
#include <iostream>

using namespace std;

class Node {
public:
    char data;
    Node* next;

    Node(char val = 0) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:

    LinkedList() {
        head = nullptr;
    }

    void insert(char val) {
        Node* newnode = new Node(val);
        if (head == nullptr) {
            head = newnode;
        }
        else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }

    LinkedList concatenate(LinkedList l1) {
        LinkedList result;
        Node* current = head;

        while (current != nullptr) {
            result.insert(current->data);
            current = current->next;
        }

        current = l1.head;
        while (current != nullptr) {
            result.insert(current->data);
            current = current->next;
        }

        return result;
    }

    LinkedList getIntersection(LinkedList& l1) {
        LinkedList result;
        Node* current1 = head;

        while (current1 != nullptr) {
            Node* current2 = l1.head;

            while (current2 != nullptr) {
                if (current1->data == current2->data) {
                    result.insert(current1->data);
                    break;
                }
                current2 = current2->next;
            }
            current1 = current1->next;
        }

        return result;
    }

    int compare() {
        Node* current1 = head;
        Node* current2 = head;

        while (current1 != nullptr && current2 != nullptr) {
            if (current1->data < current2->data)
                return -1;
            if (current1->data > current2->data)
                return 1;

            current1 = current1->next;
            current2 = current2->next;
        }

        if (current1 == nullptr && current2 == nullptr)
            return 0;

        return (current1 == nullptr) ? -1 : 1;
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {

    cout << "\n\t\t\t=============================Lab Journal 3=========================" << endl;
    LinkedList l;
    l.insert('a');
    l.insert('b');
    l.insert('c');

    cout << "\n\t\t\tList 1: ";
    l.display();

    LinkedList l2;
    l2.insert('b');
    l2.insert('c');

    cout << "\t\t\tList 2: ";
    l2.display();

    LinkedList concatenatedlist = l.concatenate(l2);

    cout << "\t\t\tConcatenated List: ";
    concatenatedlist.display();

    LinkedList intersectionlist = l.getIntersection(l2);

    cout << "\t\t\tIntersection List: ";
    intersectionlist.display();

    int comparison = l.compare();

    if (comparison == 0)
        cout << "\t\t\tBoth lists are equal." << endl;
    else if (comparison == 1)
        cout << "\t\t\tFirst list is greater." << endl;
    else
        cout << "\t\t\tSecond list is greater." << endl;

    cout << "\n\n\t\t\t=============================================================" << endl;
    return 0;
}



#include "linkedlist1.h"

#include<iostream>

using namespace std;

linkedlist1::linkedlist1() {

	head = nullptr;
}

bool linkedlist1::isEmpty() {
	/**
* Function to check if the list is empty.
* @return true if the list is empty, false otherwise.
*/
	return head == nullptr;
}

void linkedlist1::push(int val) {
	/**
 * Function to insert a new node at the top of the list.
 * val indicates that the value to be stored in the new node.
 */
	Node* newnode = new Node;
	newnode->data = val;
	newnode->next = head;
	head = newnode;
}

void linkedlist1::pop() {
	/**
 * Function to remove a node from the top of the list.
 * If the list is empty, it prints a message indicating so.
 */
	Node* temp = head;
	if (isEmpty()) {
		cout << "List is Empty." << endl;
	}
	else {

		head = head->next;
		delete temp;
	}
}

void linkedlist1::display() {
	/**
 * Function to display all nodes present in the list.
 * It prints each node's data followed by a space.
 */
	Node* current = head;
	while (current != nullptr) {

		cout << current->data << " ";
		current = current->next;

	}
}


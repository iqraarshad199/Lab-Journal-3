#include "linkedlist.h"
#include<iostream>

using namespace std;

linkedlist::linkedlist() {

	head = nullptr;
}

bool linkedlist::isEmpty() {
	/**
* Function to check if the list is empty.
* @return true if the list is empty, false otherwise.
*/
	return head == nullptr; 
}

void linkedlist::insert(int val) {
	/**
 * Function to insert a new node at the top of the list.
 * val indicates that The value to be stored in the new node.
 * Newnode with given value will be inserted. Update head with newnode.
 */
	Node* newnode = new Node;
	newnode->data = val;
	newnode->next = head;
	head = newnode;

}

void linkedlist::Sortinginascending() {
	/**
 * Function to sort nodes of the list in ascending order.
 * This function uses a bubble sort algorithm to compare each pair of nodes.
 * If current node's data is greater than next node's data, their values are swapped.
 */
	if (isEmpty()) {
		cout << "List is Empty." << endl;
	}

	Node* current = head;
	Node* temp;
	while (current != nullptr) {
		temp = current->next;

		while (temp != nullptr) {
			if (current->data > temp->data) {
				int ptr = current->data;
				current->data = temp->data;
				temp->data = ptr;
			}
			temp = temp->next;
		}
		current = current->next;
	}
}
void linkedlist::Sortingindescending() {
	/**
 * Function to sort nodes of the list in descending order.
 * This function also uses a bubble sort algorithm but swaps values
 * when current node's data is less than next node's data.
 */

	if (isEmpty()) {
		cout << "List is Empty." << endl;
	}

	Node* current = head;
	Node* temp;
	while (current != nullptr) {
		temp = current->next;

		while (temp != nullptr) {
			if (current->data < temp->data) {
				int ptr = current->data;
				current->data = temp->data;
				temp->data = ptr;
			}
			temp = temp->next;
		}
		current = current->next;
	}
}

void linkedlist::display() {
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

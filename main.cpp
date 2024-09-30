#include "linkedlist.h"

#include<iostream>
using namespace std;

int main() {
	cout << "\n\t\t\t=============================Lab Journal 3=========================" << endl;
	linkedlist l;

	cout << "\n\t\t\tThe Original list is: ";
	l.insert(5);
	l.insert(2);
	l.insert(7);
	l.insert(3);
	l.display();

	cout << "\n\t\t\tThe list after ascending order is: ";
	l.Sortinginascending();
	l.display();

	cout << "\n\t\t\tThe list after descending order is: ";
	l.Sortingindescending();
	l.display();


	cout << "\n\n\t\t\t=============================================================" << endl;
	return 0;
}
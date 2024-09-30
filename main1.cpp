#include "linkedlist1.h"



#include<iostream>
using namespace std;

int main() {
	cout << "\n\t\t\t=============================Lab Journal 3=========================" << endl;
	linkedlist1 l;

	l.push(5);
	l.push(4);
	l.push(3);
	l.push(2);
	l.push(1);

	cout << "\n\t\t\tThe original list after pushing the values is: ";
	l.display();

	cout << "\n\t\t\tThe list after popping the value is: ";
	l.pop();
	l.display();

	cout << "\n\n\t\t\t=============================================================" << endl;
	return 0;
}

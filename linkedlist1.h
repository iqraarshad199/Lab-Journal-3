#pragma once
#include "Node.h"
#include<iostream>

class linkedlist1
{
private:
	Node* head;
public:

	linkedlist1();
	bool isEmpty();
	void push(int val);
	void pop();
	void display();

};


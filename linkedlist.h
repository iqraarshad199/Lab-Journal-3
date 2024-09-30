#pragma once

#include "Node.h"
#include<iostream>

using namespace std;
class linkedlist
{
private:
	Node* head;
public:

	linkedlist();
	bool isEmpty();
	void push(int val);
	void pop();
	void display();
};


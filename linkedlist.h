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
	void insert(int val);
	void Sortingindescending();
	void Sortinginascending();
	void display();
};


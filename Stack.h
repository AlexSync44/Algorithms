#pragma once
#include <iostream>
#include <string>
#include "Node.h"

class Stack
{
public:
	bool push(int number);
	int pop();
	int peek();
	bool isEmpty();

private:
	Node* m_root = nullptr;
};
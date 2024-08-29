#pragma once
#include <iostream>
#include "Node.h"

class Queue
{
public:
	Queue() : m_front(nullptr), m_rear(nullptr) {}
	void enQueue(int number);
	void deQueue();
	bool isEmpty();
	int peek();

private:
	Node* m_front;
	Node* m_rear;
};


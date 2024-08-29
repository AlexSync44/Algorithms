#include "Queue.h"

void Queue::enQueue(int number)
{
	Node* temp = new Node(number);

	if (m_rear == nullptr)
	{
		m_front = m_rear = temp;
		return;
	}

	m_rear->m_next = temp;
	m_rear = temp;
}

void Queue::deQueue()
{
	if (m_front == nullptr)
	{
		return;
	}

	Node* temp = m_front;
	m_front = m_front->m_next;

	if (m_front == nullptr)
	{
		m_rear = nullptr;
	}

	delete temp;
}

bool Queue::isEmpty()
{
	return (m_front == nullptr);
}

int Queue::peek()
{
	if (m_front == nullptr)
	{
		return 0;
	}

	return m_front->m_data;
}
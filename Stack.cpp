#include "Stack.h"

bool Stack::isEmpty()
{
	return (m_root == nullptr);
}

bool Stack::push(int number)
{
	Node* node = new Node(number);

	if (isEmpty())
	{
		m_root = node;
		return true;
	}

	Node* last = m_root;
	while (last->m_next != nullptr)
	{
		last = last->m_next;
	}

	last->m_next = node;
	return true;
}

int Stack::pop()
{
	Node* node = m_root;
	Node* prev = nullptr;

	if (isEmpty())
	{
		return 0;
	}

	while (node->m_next != nullptr)
	{
		prev = node;
		node = node->m_next;
	}

	prev->m_next = nullptr;
	return node->m_data;
}

int Stack::peek()
{
	Node* node = m_root;

	if (isEmpty())
	{
		return 0;
	}

	while (node->m_next != nullptr)
	{
		node = node->m_next;
	}

	return node->m_data;
}

bool BracketsBalanced(std::string expr)
{
	Stack s;

	for (const char& elem : expr)
	{
		if (elem == '(')
		{
			s.push(')');
			continue;
		}
		else if (elem == '[')
		{
			s.push(']');
			continue;
		}
		else if (elem == '{')
		{
			s.push('}');
			continue;
		}

		if (s.isEmpty())
		{
			return false;
		}

		if (s.peek() != elem)
		{
			return false;
		}

		s.pop();
	}

	return s.isEmpty();
}
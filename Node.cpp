#include "Node.h"
/*
������ ����� ����.
���� ������ ������, �� ���������� ��������� �� ����� ����.
���� � ������ ���� ����, � ����� ��� �� ������, ���� �� ������ ��������� �������.
������ ��������� ���������� �������� �� ��������� �� ����� ����.
*/
void List::push_back(int data)
{
	// �������� ������ ����
	Node* node = new Node(data);

	// ���� ������ ������ ���������� ����
	if (m_head == nullptr)
	{
		m_head = node;
		return;
	}

	// � ����� ���� ��������� ������� ������
	Node* last = m_head;
	while (last->m_next != nullptr)
	{
		last = last->m_next;
	}

	// ��������� ��������� next ���������� ���� �� ��������� �� ����� ����
	last->m_next = node;
	return;
}

/*
������ ����� ����
������ ��������� m_next ������ ���� �� ������ ������
��������� �������� ������ ������ ����� �����
*/
void List::push_front(int data)
{
	Node* node = new Node(data);
	node->m_next = m_head;
	m_head = node;
}

/*
������ ����� ����
��������� ������� ������, ���� ������ ������ ��� ���� ������� ����� 0
������������� �� ������ �� ���� �� ������� �������
�������� ��������� �������� ���� �� ��������� ���� ����� �����
�������� ��������� ������ ���� �� ��������� ���� �� ����, ��������� �� ������� �����
*/

void List::insert(int pos, int data)
{
	Node* newNode = new Node(data);

	if (m_head == nullptr)
	{
		m_head = newNode;
		return;
	}

	if (pos == 0)
	{
		newNode->m_next = m_head;
		m_head = newNode;
		return;
	}

	int currPos(0);

	Node* current = m_head;

	while (currPos < pos - 1 && current->m_next != nullptr)
	{
		current = current->m_next;
		currPos++;
	}

	Node* next = current->m_next;
	current->m_next = newNode;

	newNode->m_next = next;
}

void List::deleteNodeData(int data)
{
	Node* temp = m_head;
	Node* prev = nullptr;

	if (temp && temp->m_data == data)
	{
		m_head = temp->m_next;
		delete temp;
		return;
	}

	while (temp && temp->m_data != data)
	{
		prev = temp;
		temp = temp->m_next;
	}

	if (!temp)
	{
		return;
	}

	prev->m_next = temp->m_next;
	delete temp;
}

void List::deleteNodePos(int pos)
{
	if (pos == 0)
	{
		if (m_head)
		{
			m_head = m_head->m_next;
			return;
		}
	}

	Node* temp = m_head;
	Node* prev = nullptr;
	int ind(0);

	while (temp && ind < pos)
	{
		prev = temp;
		temp = temp->m_next;
		++ind;
	}

	prev->m_next = temp->m_next;
	delete temp;
}

const bool List::find(int data) const
{
	if (m_head == nullptr)
	{
		return false;
	}

	Node* temp = m_head;
	while (temp && temp->m_next != nullptr)
	{
		if (temp->m_data == data)
		{
			return true;
		}

		temp = temp->m_next;
	}

	return false;
}

void List::clear()
{
	if (m_head == nullptr)
	{
		return;
	}

	Node* cur = m_head;

	while (cur != nullptr)
	{
		Node* temp = cur;
		cur = cur->m_next;
		delete temp;
	}

	m_head = nullptr;
}

void List::show()
{
	Node* node = m_head;

	while (node != nullptr)
	{
		std::cout << node->m_data << std::endl;
		node = node->m_next;
	}
}
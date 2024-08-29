#pragma once
#include <iostream>

class Node
{
public:
	Node(int data) : m_data(data), m_next(nullptr) {}

	int m_data;
	Node* m_next;
};

// односвязный список
class List
{
public:
	List() : m_head(nullptr) {}
	void push_back(int data);
	void push_front(int data);
	void insert(int pos, int data);
	void deleteNodeData(int data);
	void deleteNodePos(int pos);
	const bool find(int data) const;
	void clear();
	void show();


private:
	Node* m_head;
};
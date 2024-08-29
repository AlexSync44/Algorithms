#include "Tree.h"

void Tree::Node::addChild(Node* newChild)
{
	children[childCount++] = newChild;
}

Tree::Node* Tree::getNodeByNumber(int number, Node* current)
{
	if (current->number == number)
	{
		return current; // ���� ������� � ������ �����, ����������
	}

	for (int i = 0; i < current->childCount; ++i)
	{
		// ����� � �������, ���� �� ����� �������
		Node* found = getNodeByNumber(number, current->children[i]);

		if (found)
		{
			return found;
		}
	}

	return nullptr;
}

void Tree::setRoot(int number)
{
	if (root != nullptr)
	{
		delete root;
		root = nullptr;
	}

	root = new Node(number);
}

void Tree::AddNode(int parentNumber, int newNodeNumber)
{	// ���������� ��������
	Node* parentNode = getNodeByNumber(parentNumber, root);
	// �������� ������
	Node* newNode = new Node(newNodeNumber, parentNode);
	// ���������� � ��������
	parentNode->addChild(newNode);
}

void Tree::delNode(int number)
{
	Node* nodeToDelete = getNodeByNumber(number, root);

	if (nodeToDelete == nullptr)
	{
		return;
	}

	if (nodeToDelete == root)
	{
		delete root;
		root = nullptr;
		return;
	}
	
	Node* parentNode = nodeToDelete->parent;
	parentNode->delChild(nodeToDelete);

	delete nodeToDelete;
}

void Tree::Node::delChild(Node* child)
{
	for (int i = 0; i < childCount; ++i)
	{
		if (children[i] == child)
		{
			delete child;

			for (int j = i; j < childCount - 1; ++j)
			{
				children[j] = children[j + 1];
			}

			children[childCount - 1] = nullptr;
			--childCount;

			return;
		}
	}
}


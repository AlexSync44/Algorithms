#include "Tree.h"

void Tree::Node::addChild(Node* newChild)
{
	children[childCount++] = newChild;
}

Tree::Node* Tree::getNodeByNumber(int number, Node* current)
{
	if (current->number == number)
	{
		return current; // если нашлась с нужным узлом, возвращаем
	}

	for (int i = 0; i < current->childCount; ++i)
	{
		// обход в глубину, пока не найдёт искомую
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
{	// нахождения родителя
	Node* parentNode = getNodeByNumber(parentNumber, root);
	// создания нового
	Node* newNode = new Node(newNodeNumber, parentNode);
	// добавления к родителю
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


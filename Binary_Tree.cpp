#include <iostream>
#include "Binary_Tree.h"

void BinaryTree::addInt(int newdata)
{
	if (root == nullptr)
	{
		// проверка пустое ли дерево
		root = new Node(newdata);
	}
	else
	{
		// начало с корня
		Node* current = root;
		Node* newNode = nullptr;
		while (newNode == nullptr)
		{
			
			if (current->data >= newdata)
			{ // если элемент меньше текущего = влево
				if (current->leftChild != nullptr)
				{
					current = current->leftChild;
					continue;
				}
				//если левого узла нет, то ставим влево
				newNode = new Node(newdata, current);
				current->leftChild = newNode;
			}
			else
			{ // если элемент меньше текущего = вправо
				if (current->rightChild != nullptr)
				{
					current = current->rightChild;
					continue;
				}
				// если правого узла нет, то ставим вправо
				newNode = new Node(newdata, current);
				current->rightChild = newNode;
			}
		}
	}
}

void BinaryTree::enumBinatyTree(Node* root)
{
	if (root == nullptr)
	{
		return;
	}

	Node* current = root;

	if (current->leftChild != nullptr)
	{
		enumBinatyTree(current->leftChild);
	}
	else if (current->rightChild != nullptr)
	{
		enumBinatyTree(current->rightChild);
	}

	std::cout << current->data;
}
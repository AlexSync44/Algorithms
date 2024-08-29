#include <iostream>
#include "Binary_Tree.h"

void BinaryTree::addInt(int newdata)
{
	if (root == nullptr)
	{
		// �������� ������ �� ������
		root = new Node(newdata);
	}
	else
	{
		// ������ � �����
		Node* current = root;
		Node* newNode = nullptr;
		while (newNode == nullptr)
		{
			
			if (current->data >= newdata)
			{ // ���� ������� ������ �������� = �����
				if (current->leftChild != nullptr)
				{
					current = current->leftChild;
					continue;
				}
				//���� ������ ���� ���, �� ������ �����
				newNode = new Node(newdata, current);
				current->leftChild = newNode;
			}
			else
			{ // ���� ������� ������ �������� = ������
				if (current->rightChild != nullptr)
				{
					current = current->rightChild;
					continue;
				}
				// ���� ������� ���� ���, �� ������ ������
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
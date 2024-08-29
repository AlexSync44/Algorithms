#pragma once
class BinaryTree
{
public:
	struct Node
	{
		Node(int d, Node* p = nullptr) : data(d), parent(p)
		{
			leftChild = nullptr;
			rightChild = nullptr;
		};

		~Node()
		{
			if (rightChild != nullptr)
			{
				delete rightChild;
			}

			if (leftChild != nullptr)
			{
				delete leftChild;
			}
		}

		Node* parent;
		Node* leftChild;
		Node* rightChild;
		int data;
	};

	BinaryTree()
	{
		root = nullptr;
	}

	~BinaryTree()
	{
		if (root != nullptr)
		{
			delete root;
		}
	}

	void addInt(int newdata);
	void enumBinatyTree(Node* root);

private:
	Node* root;
};


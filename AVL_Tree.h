#pragma once

struct Node
{
	int key;
	Node* left;
	Node* right;
	size_t height;

	Node(int& k)
	{
		key = k;
		left = right = nullptr;
		height = 0;
	}

	Node(int&& k)
	{
		key = k;
		left = right = nullptr;
		height = 0;
	}
};

/*
size_t ...::height(Node* node)
{
	return node ? node->height : 0;
}

int ...::bfactor(Node* node)
{
	return height(node->right) - height(node->left);
}

void ...::fix_height(Node* node)
{
	size_t h_left = height(node->left);
	size_t h_right = height(node->right);

	node->height = (h_left > h_right ? h_left : h_right) + 1;
}

Node* ...::rotateRight(Node* node)
{
	Node* q = node->left;

	node->left = q->right;
	q->right = node;
	fix_height(node);
	fix_height(q);

	return q;
}

Node* ...::rotateLeft(Node* node)
{
	Node* q = node->right;

	node->right = node->left;
	q->right = node;
	fix_height(node);
	fix_height(q);

	return q;
}

Node* ...::balance(Node* const node)
{
	// вычисление правильной высоты для узла
	fix_height(node);
	
	// балансировка дерева в зависимости
	// от фактора балансировки
	if(bfactor(node) == 2)
	{
		if(bfactor(node->right) < 0)
		{
			node->right = rotateRight(node->right);
		}

		return rotateLeft(node);
	}

	if(bfactor(node) == -2)
	{
		if(bfactor(node->left) > 0)
		{
			node->left = rotateLeft(node->left);
		}

		return rotateRight(node);
	}

	// балансировка не нужна
	return node;
}

*/
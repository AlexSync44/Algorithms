#pragma once
#define SIZE 10

class Tree
{
	struct Node // узел
	{
		Node(int _number, Node* _parent = nullptr) : number(_number), parent(_parent), childCount(0) { }

		~Node()
		{
			for (int i = 0; i < childCount; ++i)
			{
				delete children[i];
			}
		}

		void addChild(Node* newChild);
		void delChild(Node* child);
		
		Node* parent; // родительская вершина
		Node* children[SIZE]; // список дочерних вершин
		int childCount; // кол-во детей
		int number; // номер вершины
	};

public:
	Tree()
	{
		root = nullptr;
	}

	~Tree()
	{
		if (root != nullptr)
		{
			delete root;
		}
	}

	void setRoot(int number);
	void AddNode(int parentNumber, int newNodeNumber);
	Node* getNodeByNumber(int number, Node* current);
	void delNode(int number);

private:
	Node* root;
};


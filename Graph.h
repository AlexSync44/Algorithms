#pragma once
#include <iostream>
#define SIZE 10

class Graph
{
public:
	Graph()
	{
		for (size_t i = 0; i < SIZE; ++i)
		{
			for (size_t j = 0; j < SIZE; ++j)
			{
				matrix[i][j] = 0;
			}
		}

		vertexCount = 0;
	}

	void addVertex(int vnumber);
	void addEdge(int v1, int v2, int weight = 1);
	void deleteVertex(int vnumber);
	void deleteEdge(int v1, int v2);
	bool edgeExists(int v1, int v2);
	
	void depth(int start);
	void width(int start);
	void findMinDistance(int vfrom);
	void findMinDistanceFloyd();

private:
	void depthInner(int current, bool visited[]);
	bool vertexExists(int v);

	int matrix[SIZE][SIZE];
	int vertexes[SIZE];
	int vertexCount;
};

class Graph_V2
{
	struct Edge
	{
		int vertexWhere;
		int weight;
		Edge() {}
		Edge(int vw, int w) : vertexWhere(vw), weight(w) {}
	};

	struct Vertex
	{
		int number;
		Edge adj_vertexes[SIZE];
		int edgeCount;
	};

public:
	Graph_V2()
	{
		vertexCount = 0;
	}

private:
	int vertexes[SIZE];
	int vertexCount;
};


void test();
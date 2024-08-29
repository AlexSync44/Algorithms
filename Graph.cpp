#include "Graph.h"

#define VERYBIGINT 1000000000

void Graph::addVertex(int vnumber)
{
	vertexes[vertexCount++] = vnumber;
}

void Graph::addEdge(int v1, int v2, int weight)
{
	matrix[v1][v2] = weight;
	matrix[v2][v1] = weight;
}

void Graph::deleteVertex(int vnumber)
{
	if (vnumber >= vertexCount)
	{
		return;
	}

	for (int i = vnumber; i < vertexCount - 1; ++i)
	{
		vertexes[i] = vertexes[i + 1];
	}

	for (int i = 0; i < SIZE; ++i)
	{
		matrix[vnumber][i] = 0;
		matrix[i][vnumber] = 0;
	}

	--vertexCount;
}

bool Graph::edgeExists(int v1, int v2)
{
	return matrix[v1][v2] > 0;
}

void Graph::deleteEdge(int v1, int v2)
{
	matrix[v1][v2] = 0;
	matrix[v2][v1] = 0;
}

bool Graph::vertexExists(int v)
{
	for (int i = 0; i < vertexCount; i++)
	{
		if (vertexes[i] == v)
		{
			return true;
		}
	}

	return false;
}

void Graph::depth(int start)
{
	bool visited[SIZE];

	for (int i = 0; i < SIZE; ++i)
	{
		visited[i] = false;
	}

	depthInner(start, visited);
}

void Graph::depthInner(int current, bool visited[])
{
	std::cout << "V = " << current << ", ";

	visited[current] = true;

	for (int i = 0; i < vertexCount; ++i)
	{
		int vnum = vertexes[i];

		if (matrix[current][vnum] != 0 && !visited[vnum])
		{
			depthInner(vnum, visited);
		}
	}
}

void Graph::width(int start)
{
	int queue_to_visit[SIZE];
	int queueCount = 0;

	bool visited[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		visited[i] = false;
	}

	queue_to_visit[queueCount++] = start;
	while (queueCount > 0)
	{
		int current = queue_to_visit[0];
		queueCount--;

		for (int i = 0; i < queueCount; i++)
		{
			queue_to_visit[i] = queue_to_visit[i + 1];
		}

		visited[current] = true;
		std::cout << "v" << current << " -> ";

		for (int i = 0; i < SIZE; i++)
		{
			bool alreadyAdded = false;

			for (int j = 0; j < queueCount; j++)
			{
				if (queue_to_visit[j] == i)
				{
					alreadyAdded = true;
					break;
				}
			}

			if (!alreadyAdded && edgeExists(current, i) && !visited[i])
			{
				queue_to_visit[queueCount++] = i;
			}
		}
	}

	std::cout << std::endl;
}

void Graph::findMinDistance(int vfrom)
{
	int distances[SIZE];

	for (int i = 0; i < SIZE; ++i)
	{
		distances[i] = VERYBIGINT;
	}
	distances[vfrom] = 0;

	bool passed[SIZE];

	for (int i = 0; i < SIZE; ++i)
	{
		passed[i] = false;
	}

	int currentVer = vfrom;
	int min_dist = 0;
	while (min_dist != VERYBIGINT)
	{
		passed[currentVer] = true;

		for (int i = 0; i < SIZE; ++i)
		{
			if (edgeExists(currentVer, i)
				&& distances[currentVer] + matrix[currentVer][i]
				< distances[i])
			{
				distances[i] = distances[currentVer] + matrix[currentVer][i];
			}

			min_dist = VERYBIGINT;

			for (int i = 0; i < SIZE; i++)
			{
				if (vertexExists(i) && !passed[i] && distances[i] < min_dist)
				{
					min_dist = distances[i];
					currentVer = i;
				}
			}
		}
	}

	for (int i = 0; i < vertexCount; ++i)
	{
		std::cout << "v" << i << ": " << distances[vertexes[i]] << ", ";
	}

	std::cout << std::endl;
}

void Graph::findMinDistanceFloyd()
{
	int weights[SIZE][SIZE];

	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = 0; j < SIZE; ++j)
		{
			if (i == j)
			{
				weights[i][j] = 0;
			}
			else
			{
				if (!edgeExists(i, j))
				{
					weights[i][j] = VERYBIGINT;
				}
				else
				{
					weights[i][j] = matrix[i][j];
				}
			}
		}
	}

	for (int x = 0; x < vertexCount; x++)
	{
		int verX = vertexes[x];

		for (int i = 0; i < vertexCount; ++i)
		{
			if (i == x)
			{
				continue;
			}
			int verI = vertexes[i];

			for (int j = 0; j < vertexCount; ++j)
			{
				if (j == x)
				{
					continue;
				}

				int verJ = vertexes[j];
				if (weights[verI][verX] + weights[verX][verJ]
					< weights[verI][verJ])
				{
					weights[verI][verJ] = weights[verI][verX]
						+ weights[verX][verJ];
				}
			}
		}
	}

	for (int i = 0; i < vertexCount; ++i)
	{
		std::cout << "V" << i << ": " << weights[0][vertexes[i]] << ", ";
	}
}

void test()
{
	Graph g;

	g.addVertex(0);
	g.addVertex(1);
	g.addVertex(2);
	g.addVertex(3);
	g.addVertex(4);
	g.addVertex(5);
	g.addVertex(6);
	g.addVertex(7);
	g.addVertex(8);

	g.addEdge(0, 1, 1);
	g.addEdge(0, 2, 1);
	g.addEdge(0, 3, 1);
	g.addEdge(1, 4, 1);
	g.addEdge(2, 5, 1);
	g.addEdge(3, 7, 1);
	g.addEdge(3, 6, 1);
	g.addEdge(3, 8, 1);
	g.addEdge(4, 3, 1);
	g.addEdge(4, 7, 1);
	g.addEdge(5, 3, 1);
	g.addEdge(5, 8, 1);
	g.addEdge(7, 6, 1);
	g.addEdge(8, 6, 1);

	g.width(7);
}
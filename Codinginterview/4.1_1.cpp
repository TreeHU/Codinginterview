#include <iostream>
#include <vector>
#include <queue>
using namespace std;


class Graph {
public:
	int vertax;
	vector<int> * adj;

	Graph(int v);
	void add(int v, int x);
	bool find(int v, int x);
};

Graph::Graph(int v) {
	this->vertax = v;
	//this->adj = new vector<int> V[5];
	//this->adj = new vector<vector<int>>[v];
	this->adj = new vector<int> [vertax];
}


void Graph::add(int v, int x) {
	adj[v].push_back(x);
}

bool Graph::find(int v, int x) {
	vector<int> check(vertax, false);
	queue<int> q;

	q.push(v);

	while (!q.empty()) {
		int curr = q.front();
		if (curr == x) {
			return true;
		}
		q.pop();
		check[curr] = true;
		int size = adj[curr].size();
		for (int i = 0; i < size; i++) {
			if (!check[adj[curr][i]]) {
				q.push(adj[curr][i]);
			}	
		}
	}

	return false;
}


int main() {

	Graph g(6);
	g.add(5, 2);
	g.add(5, 0);
	g.add(4, 0);
	g.add(4, 1);
	g.add(2, 3);
	g.add(3, 1);

	/*
		Test graph :
		0 <---4---->1
		^ 			^
		|			|
		|			|
		5---->2---->3
	*/
	cout << g.find(5, 4) << endl; // false
	cout << g.find(5, 1) << endl; // true

	return 0;
}
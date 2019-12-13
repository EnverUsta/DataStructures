#include <iostream>
#include <vector>

void addEdge(std::vector<int> adj[], int u, int v);

void printGraph(std::vector<int> adj[], int V);


int main(){
	int V = 5; 
    std::vector<int> adj[V]; 
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 4); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 1, 4); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 4); 
    printGraph(adj, V);
}


void addEdge(std::vector<int> adj[], int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}


void printGraph(std::vector<int> adj[], int V){
	for(int i = 0; i < V; ++i){
		std::cout << "\n Adjacency list of vertex "
             << i << "\n head "; 
        for(int j = 0; j < adj[i].size(); ++j){
        	std::cout << "-> "<< adj[i][j];
        }
        std::cout << '\n';
	}
}
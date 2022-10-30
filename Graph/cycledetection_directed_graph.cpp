/**
 * 
 * this code is written by Guddu 
 */

#include<bits/stdc++.h> 
using namespace std; 

void cycleDetectionInDirected(vector<int> adj[], int V) 
{ 
    vector<int> in_degree(V, 0); 
  
    for (int u = 0; u < V; u++) { 
        for (int x:adj[u]) 
            in_degree[x]++; 
    } 
  
    queue<int> q; 
    for (int i = 0; i < V; i++) 
        if (in_degree[i] == 0) 
            q.push(i); 

    int count=0;  
    while (!q.empty()) { 
        int u = q.front(); 
        q.pop(); 
  
        for (int x: adj[u]) 
            if (--in_degree[x] == 0) 
                q.push(x); 
        count++;
    } 
    if (count != V) { 
        cout << "Cycle present in the graph.\n"; 
    }
    else{
        cout << "Cycle does not present in the graph.\n";
    }
}

// create addEdge function.
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}


// main block
int main() 
{ 
	int V=5;  // number of vertex

	vector<int> adj[V];  // create vector to store adjacency list.
	addEdge(adj,0, 1); 
    addEdge(adj,4, 1); 
    addEdge(adj,1, 2); 
    addEdge(adj,2, 3); 
    addEdge(adj,3, 1);  
  
    cycleDetectionInDirected(adj,V);     // call the function to check cycle present or not.

	return 0; 
} 

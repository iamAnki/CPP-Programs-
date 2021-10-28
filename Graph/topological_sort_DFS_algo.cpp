/**
 * 
 * This code is contributed by Guddu
 * 
 */

#include<bits/stdc++.h> 
using namespace std; 


// DFSRec is DFS recursive call funtion.
void DFSRec(vector<int> adj[], int u,stack<int> &stack, bool visited[]) 
{ 	
    visited[u]=true;
    
    for(int v:adj[u]){
        if(visited[v]==false)
            DFSRec(adj,v,stack,visited);
    }
    stack.push(u);
}


// main topological sort funtion.
void topologicalSort(vector<int> adj[], int V) 
{ 
    bool visited[V]; 
	for(int i = 0;i<V; i++) 
		visited[i] = false;

	stack<int> stack;  // create a stack to store the depended vertex first. 
    
    for(int u=0;u<V;u++){
        if(visited[u]==false){
            DFSRec(adj,u,stack,visited);
        }
    }
    
    while(stack.empty()==false){
        int u=stack.top();
        stack.pop();
        cout<<u<<" ";
    }
   
}

// addEdge funtion used to add edge between two vertex in directed graph.
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}


// main code block
int main() 
{ 
	int V=5;   // define the vertex of Graph.


	vector<int> adj[V]; // create addjacency list.

	addEdge(adj,0, 1); 
    addEdge(adj,1, 3); 
    addEdge(adj,2, 3); 
    addEdge(adj,3, 4); 
    addEdge(adj,2, 4);  
  
    cout << "Topological sort using DFS based alogithm: \n"; 

    topologicalSort(adj,V);     // call the topologicalSort funtion.

	return 0; 
} 

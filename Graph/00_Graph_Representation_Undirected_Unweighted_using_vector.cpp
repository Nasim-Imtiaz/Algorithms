#include <bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[],int a,int b){
	adj[a].push_back(b);
	adj[b].push_back(a);
}

void printGraph(vector<int> adj[],int n){
	for(int i=0;i<n;i++){
		cout<<i;
		for(int x:adj[i]){
			cout<<"->"<<x;
		}
		cout<<"\n";
	}
}

int main(){
	int m,n,a,b;
	cout<<"Enter Nubmer Of nodes: ";
	cin>>n;
	vector <int> adj[n];
	cout<<"Enter Number Of edges: ";
	cin>>m;
	for(int i=0;i<m;i++){
		cout<<"From: ";
		cin>>a;
		cout<<"To: ";
		cin>>b;
		addEdge(adj,a,b);
	}
	printGraph(adj,n);
	return 0;
}

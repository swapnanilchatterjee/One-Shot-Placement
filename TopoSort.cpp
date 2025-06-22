#include<bits/stdc++.h>
using namespace std;
class Solution{
	public:
		void dfs(int node,int vis[],stack<int>&st,vector<int>adj[]){
			vis[node]=1;
			for(auto it:adj[node]){
				if(!vis[it]) dfs(it,vis,st,adj);
			}
			st.push(node);
		}
		vector<int> toposort(int V,vector<int>adj[]){
			int vis[V]={0};
			stack<int>st;
			for(int i=0;i<V;i++){
				if(!vis[i]){
					dfs(i,vis,st,adj);
				}
			}
			vector<int>ans;
			while(!st.empty()){
				ans.push_back(st.top());
				st.pop();
			}
			return ans;
		}
};
int main(){
	vector<int> adj[6]={{},{},{3},{1},{0,1},{0,2}};
	int V=6;
	Solution obj;
	vector<int> ans=obj.toposort(V,adj);
	for(auto node:ans){
		cout<<node<<" ";
	}
	cout<<endl;
	return 0;
}

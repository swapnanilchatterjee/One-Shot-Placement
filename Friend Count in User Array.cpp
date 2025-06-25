#include<bits/stdc++.h>
using namespace std;
vector<int>searchMatrix(vector<vector<int>>&matrix){
	vector<int>ans;
	int n=matrix.size();
    for(int i=0;i<n;i++){
    	for(int j=0;j<matrix[i].size();j++){
    		ans.push_back(matrix[i][j]);
		}
	}
	return ans;
}
void freq(vector<vector<int>>&ans){
	unordered_map<int,int>mpp;
	vector<int>res=searchMatrix(ans);
	int n=res.size();
	for(int i=0;i<n;i++){
	  mpp[res[i]]++;	
	}
	for(auto val:mpp){
		cout<<val.first<<":"<<val.second<<" ";
	}
	
}
int main(){
	vector<vector<int>>ans={{3,7,8,7},{8,3},{7,8,7,3}};
	freq(ans);
	return 0;
}

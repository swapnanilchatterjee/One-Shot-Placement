#include<bits/stdc++.h>
using namespace std;
void rev(vector<int>&arr){
	stack<int>st;
	for(int i=0;i<arr.size();i++){
		st.push(arr[i]);
	}
	vector<int>ans;
	while(!st.empty()){
		ans.push_back(st.top());
		st.pop();
	}
	for(auto val:ans){
		cout<<val<<" ";
	}
}
int main(){
	vector<int>arr={5,4,3,2,1};
	rev(arr);
	return 0;
}

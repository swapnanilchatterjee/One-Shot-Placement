#include<bits/stdc++.h>
using namespace std;
int cookie(vector<int>& greed,vector<int>& cookies){
	int n=greed.size();
	int m=cookies.size();
	sort(greed.begin(),greed.end());
	sort(cookies.begin(),cookies.end());
	int l=0;
	int r=0;
	while(l<m && r<n){
		if(greed[r]<=cookies[l]){
			r++;
		}
		l++;
	}
	return r;
}
int main(){
	vector<int>greed={1,5,3,3,4};
	vector<int>cookies={4,2,1,2,1,3};
	
	cout<<"Array Representing Greed: ";
	for(int i=0;i<greed.size();i++){
		cout<<greed[i]<<" ";
	}
	cout<<endl;
	cout<<"Array Representing Cookie Size: ";
	for(int i=0;i<cookies.size();i++){
		cout<<cookies[i]<<" ";
	}
	int ans=cookie(greed,cookies);
	cout<<endl<<"No. of kids assigned cookies "<<ans;
	cout<<endl;
	return 0;
}

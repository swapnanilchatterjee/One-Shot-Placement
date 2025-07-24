#include<bits/stdc++.h>
using namespace std;
int tappedwater(vector<int>&height){
	int n=height.size();
	if(n<3) return 0;
	int lmax=height[0];
	int rmax=height[n-1];
	int lpos=1;
	int rpos=n-2;
	int water=0;
	while(lpos<=rpos){
		if(lmax<=height[lpos]){
			lmax=height[lpos];
			lpos++;
		}
		else if(rmax<=height[rpos]){
			rmax=height[rpos];
			rpos--;
		}
		else if(lmax<=rmax && height[lpos]<lmax){
			water+=lmax-height[lpos];
			lpos++;
		}
		else{
			water+=rmax-height[rpos];
			rpos--;
		}
	}
	return water;
}
int main(){
	vector<int>height={0,1,0,2,1,0,1,3,2,1,2,1};
	int water=tappedwater(height);
	cout<<water;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
bool search(vector<vector<int>>&matrix,int target){
	int n=matrix.size();
	int m=matrix[0].size();
	
	int low=0,high=n*m-1;
	while(low<=high){
		int mid=(low+high)/2;
		int row=mid/m,col=mid%m;
		if(matrix[row][col]==target)return true;
		else if(matrix[row][col]<target) low=mid+1;
		else high=mid-1;
	}
	return false;
}
int main(){
	vector<vector<int>>matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	search(matrix,8)==true?cout<<"True\n":cout<<"False\n";
	return 0;
}

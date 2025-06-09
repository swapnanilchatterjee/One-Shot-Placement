//Maximum Subarray
#include<bits/stdc++.h>
using namespace std;
int maxSubarray(vector<int>& nums){
	int currSum=0,maxSum=INT_MIN;
	for(int val:nums){
		currSum+=val;
		maxSum=max(currSum,maxSum);
		if(currSum<0){
			currSum=0;
		}
	}
	return maxSum;
}
int main(){
	vector<int>arr={-2,1,-3,4,-1,2,1,-5,4};
	int maxSum=maxSubarray(arr);
	cout<<"Maximum Subarray is: "<<maxSum<<endl;
	return 0;
}

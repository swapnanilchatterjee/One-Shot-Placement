//Majority Element
#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums){
int freq=0,ans=0;
for(int i=0;i<nums.size();i++){
	if(freq==0){
		ans=nums[i];
	}
	if(freq==nums[i]){
		freq++;
	}
	else{
		freq--;
	}
}
return ans;
}
int main(){
	vector<int>nums={2,2,1,1,1,2,2};
	int freq=majorityElement(nums);
	cout<<"Majority element is: "<<freq<<endl;
	return 0;
}

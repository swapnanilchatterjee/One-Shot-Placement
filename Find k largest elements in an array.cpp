#include<bits/stdc++.h>
using namespace std;
vector<int>largest(vector<int>&nums,int target){
    sort(nums.begin(),nums.end(),greater<int>());
    vector<int>res;
    for(int i=0;i<target;i++){
        res.push_back(nums[i]);
    }
    return res;
}
int main(){
    vector<int>nums={11, 5, 12, 9, 44, 17, 2};
    int target=2;
    vector<int>res=largest(nums,target);
    for(auto val:res){
        cout<<val<<" ";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
vector<int> sortByFreq(vector<int> &arr){
    int n=arr.size();
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    priority_queue<vector<int>>pq;
    for(auto i:mpp){
        pq.push({i.second,-i.first});
    }
    vector<int>ans;
    while(!pq.empty()){
        int freq=pq.top()[0];
        int ele=-pq.top()[1];
        pq.pop();
        for(int i=0;i<freq;i++){
            ans.push_back(ele);
        }
    }
    return ans;
}
int main() {
 vector<int>arr={10, 20, 10, 10, 20, 30, 30, 30, 30, 0};
 vector<int>ans=sortByFreq(arr);
 for(int i=0;i<ans.size();i++){
     cout<<ans[i]<<" ";
 }
 return 0;
}

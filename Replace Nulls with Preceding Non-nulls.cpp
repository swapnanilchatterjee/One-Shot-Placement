#include<bits/stdc++.h>
using namespace std;
vector<int> nullRemover(vector<string>&arr){
    int n=arr.size();
    vector<int>res;
    int lastval=-1;
    for(int i=0;i<n;i++){
        if(arr[i]=="null"){
            if(lastval==-1){
                res.push_back(-1);
            }
            else{
                res.push_back(lastval);
            }
        }
        else{
            int val=stoi(arr[i]);
            lastval=val;
            res.push_back(val);
        }
    }
    return res;
}
int main(){
    vector<string>arr={"null", "5", "null", "8", "null", "null", "3", "null"};
    vector<int>res=nullRemover(arr);
    
    for(int i=0;i<res.size();i++){
        if(res[i]==-1)
        cout<<"null"<<" ";
        else
        cout<<res[i]<<" ";
    }
  
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
class Solution{
	public:
		void solve(int i,string s,string &f){
			if(i==s.length()){
				cout<<f<<" ";
				return;
			}
			f=f+s[i];
			solve(i+1,s,f);
			f.pop_back();
			solve(i+1,s,f);
		}
};
int main(){
	string s="abc";
	string f="";
	cout<<"All possible subsequences are: "<<endl;
	Solution obj;
	obj.solve(0,s,f);
}

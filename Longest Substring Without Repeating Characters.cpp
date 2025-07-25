#include<bits/stdc++.h>
using namespace std;
int lengthofLongestSubstring(string s){
	unordered_map<char,int>mp;
	int l=0,res=0;
	for(int r=0;r<s.size();r++){
		if(mp.find(s[r])!=mp.end()){
			l=max(mp[s[r]]+1,l);
		}
		mp[s[r]]=r;
		res=max(res,r-l+1);
	}
	return res;
}
int main(){
	string s="zxyzxyz";
	int len=lengthofLongestSubstring(s);
	cout<<len;
	return 0;
}

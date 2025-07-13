#include<bits/stdc++.h>
using namespace std;
class solution{
	public:
		int minAdd(string s){
			int n=s.length();
			int cnt0=0,cnt1=0;
		    for(int i=0;i<n;i++){
		    	if(s[i]=='('){
		    		cnt0++;
				}
				else{
					cnt1++;
				}
				
			}
			if(cnt0==cnt1) return 0;
			else return abs(cnt0-cnt1);
		}
};
 int main(){
 	solution t;
 	string s="(((";
 	int add=t.minAdd(s);
 	cout<<"Minimum add to make Parentheses valid: "<<add<<endl;
 	return 0;
 }

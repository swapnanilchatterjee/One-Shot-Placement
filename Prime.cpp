#include<bits/stdc++.h>
using namespace std;
bool checkPrime(int num){
	if(num==1)
	return false;
	int i=2;
	for(i=2;i<sqrt(num);i++){
		if(num%i==0)
		return false;
	}
	return true;
}
void printPrimerange(int a,int b){
	for(int i=a;i<=b;i++){
		if(checkPrime(i))
		{
			cout<<i<<" ";
		}
	}
}
int main(){
	int a=11,b=17;
	printPrimerange(a,b);
	return 0;
}

//Best Time to Buy and Sell Stock
#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices){
	int maxProfit=0,bestBuy=prices[0];
	for(int i=1;i<prices.size();i++){
		if(prices[i]>bestBuy){
		
		maxProfit=max(maxProfit,prices[i]-bestBuy);
	}
    bestBuy=min(bestBuy,prices[i]);	
}
return maxProfit;
}
int main(){
	vector<int>nums={7,1,5,3,6,4};
	int price=maxProfit(nums);
	cout<<"Max Profit is: "<<price<<endl;
	return 0;
}

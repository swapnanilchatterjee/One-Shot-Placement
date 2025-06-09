#include<bits/stdc++.h>
using namespace std;
void priorityQueue(){
	priority_queue<int>pq;
	pq.push(30);
	pq.push(10);
	pq.push(20);
	
	cout<<"Priority Queue(Max Heap): ";
	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();
	}
	cout<<endl;
}
int main(){
	priorityQueue();
	return 0;
}

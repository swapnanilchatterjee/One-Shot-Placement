#include<bits/stdc++.h>
using namespace std;
void simpleQueue(){
	queue<int>q;
	q.push(10);
	q.push(20);
	q.push(30);
	
	cout<<"Simple Queue(FIFO): ";
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}
int main(){
	simpleQueue();
	return 0;
}

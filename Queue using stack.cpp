#include<bits/stdc++.h>
using namespace std;
class Queue{
	public:
		stack<int>s1,s2;
	void enqueue(int x){
		while(!s1.empty()){
			s2.push(s1.top());
			s1.pop();
		}
		s1.push(x);
		while(!s2.empty()){
			s1.push(s2.top());
			s2.pop();
		}
	}
	int dequeue(){
		while(!s1.empty()){
		int x=s1.top();
		s1.pop();
		return x;
	}
	}
};
int main(){
	Queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	cout<<q.dequeue()<<"\n";
	cout<<q.dequeue()<<"\n";
	cout<<q.dequeue()<<"\n";
	return 0;
}

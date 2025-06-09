#include<bits/stdc++.h>
using namespace std;
class stackuQ{
	queue<int>q1,q2;
	public:
		void push(int x){
			q2.push(x);
			while(!q1.empty()){
				q2.push(q1.front());
				q1.pop();
			}
			swap(q1,q2);
		}
		void pop(){
			while(!q1.empty()){
				q1.pop();
			}
		}
		int top(){
		if (q1.empty()) {
            cout << "Stack is empty!\n";
            return -1;
        }
        return q1.front();
		}
		bool empty(){
			return q1.empty();
		}
		void display(){
			queue<int>temp=q1;
			cout<<"Stack (top to bottom): ";
			while(!temp.empty()){
				cout<<temp.front()<<" ";
				temp.pop();
			}
			cout<<endl;
		}
};
int main(){
	stackuQ s1;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.display();
	cout<<"Top: "<<s1.top()<<endl;
	return 0;
}

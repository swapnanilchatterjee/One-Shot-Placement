#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
	    Node(int data1,Node* next1){
	    	data=data1;
	    	next=next1;
		}
		Node(int data1){
			data=data1;
			next=nullptr;
		}
		
	};
		void printLL(Node* head){
			while(head!=NULL){
				cout<<head->data<<" "<<endl;
				head=head->next;
			}
		}
		Node* insertHead(Node* head,int val){
			Node* temp=new Node(val,head);
			return temp;
		}
		int main(){
			int val=100;
			Node* head=new Node(12);
		    head->next=new Node(8);
			head->next->next=new Node(5);
			head->next->next->next=new Node(7);
			cout<<"Before insertion Data: "<<endl;
			printLL(head);
			head=insertHead(head,val);
			cout<<"After insertion Data: "<<endl;
			printLL(head);
			return 0;
			
		}


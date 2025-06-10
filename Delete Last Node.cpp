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
		cout<<head->data<<" ";
	    head=head->next;
	}
}
Node* deleteTail(Node* head){
	if(head==NULL || head->next==NULL)
	return NULL;
	Node* temp=head;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	delete temp->next;
	temp->next=nullptr;
	return head;
}
int main(){
	Node* head=new Node(12);
	head->next=new Node(5);
	head->next->next=new Node(8);
	head->next->next->next=new Node(7);
	head=deleteTail(head);
	printLL(head);
}

#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		Node(int x){
			data=x;
			next=nullptr;
		}
};
Node* reverse(Node* head){
	Node *curr=head,*prev=nullptr,*next;
	while(curr!=nullptr){
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	return prev;
}
Node *addOneUtil(Node *head){
	Node *res=head;
	Node *curr=head;
	Node *last=nullptr;
	int carry=1;
	int sum;
	while(curr!=nullptr){
		sum=carry+curr->data;
		carry=(sum>=10)?1:0;
		curr->data=sum%10;
		last=curr;
		curr=curr->next;
	}
	if(carry>0){
		last->next=new Node(carry);
	}
	return res;
}
Node *addOne(Node *head){
	head=reverse(head);
	head=addOneUtil(head);
	return reverse(head);
}
void printLL(Node* head){
	Node *curr=head;
	while(curr!=nullptr){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	cout<<endl;
}
int main(){
	Node *head=new Node(1);
	head->next=new Node(9);
	head->next->next=new Node(9);
	head->next->next->next=new Node(9);
	head=addOne(head);
	printLL(head);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node* back;
		Node(int data1,Node* next1,Node* back1){
			data=data1;
			next=next1;
			back=back1;
		}
		Node(int data1){
			data=data1;
			next=nullptr;
			back=nullptr;
		}
};
Node* convertDLL(vector<int> arr){
	Node* head=new Node(arr[0]);
	Node* prev=head;
	for(int i=1;i<arr.size();i++){
		Node* temp=new Node(arr[i],nullptr,prev);
		prev->next=temp;
		prev=temp;
	}
	return head;
}
void print(Node* head){
	while(head!=nullptr){
		cout<<head->data<<" ";
		head=head->next;
	}
}
Node* insertAtTail(Node* head,int k){
	Node* newNode=new Node(k);
	if(head==nullptr){
		return newNode;
	}
	Node* tail=head;
	while(tail->next!=nullptr){
		tail=tail->next;
	}
	tail->next=newNode;
	newNode->back=tail;
	return head;
}
Node* deleteHead(Node* head){
	if(head==nullptr || head->next==nullptr){
		return nullptr;
	}
	Node* tail=head;
	while(tail->next!=nullptr){
		tail=tail->next;
	}
	Node* newTail=tail->back;
	newTail->next=nullptr;
	tail->back=nullptr;
	delete tail;
	return head;
}
int main(){
	vector<int>arr={12,5,8,7,4};
	Node* head=convertDLL(arr);
	cout<<"Doubly Linked List: "<<endl;
	print(head);
	cout<<endl<<"Doubly Linked List after insertion: "<<endl;
	head=insertAtTail(head,10);
	print(head);
	cout<<endl<<"Doubly Linked List after deletion: "<<endl;
	head=deleteHead(head);
	print(head);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* left;
		Node* right;
		
		Node(int val): data(val),left(nullptr),right(nullptr) {}
};

void preorder(Node* root,vector<int> &arr){
	if(root==nullptr){
		return;
	}
	arr.push_back(root->data);
	preorder(root->left,arr);
	preorder(root->right,arr);
}
void inorder(Node* root,vector<int> &arr){
	if(root==nullptr){
		return;
	}
     inorder(root->left,arr);
     arr.push_back(root->data);
     inorder(root->right,arr);
}
void postorder(Node* root,vector<int> &arr){
	if(root==nullptr){
		return;
	}
	postorder(root->left,arr);
	postorder(root->right,arr);
	arr.push_back(root->data);
}
vector<int> preOrder(Node* root){
	vector<int> arr;
	preorder(root,arr);
	return arr;
}
vector<int> inOrder(Node* root){
	vector<int> arr;
	inorder(root,arr);
	return arr;
}
vector<int> postOrder(Node* root){
	vector<int> arr;
	postorder(root,arr);
	return arr;
}
void printVector(vector<int>& v){
	for(auto val:v){
		cout<<val<<" ";
	}
	cout<<endl;
}
int main(){
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	vector<int>result;
	int n;
	cout<<"Enter the option: "<<endl;
	cin>>n;
	switch(n){
		case 1: 
		     result=preOrder(root);
		     break;
		case 2:
			result=inOrder(root);
			break;
		case 3:
			result=postOrder(root);
			break;
		default:
			cout<<"Please enter right option."<<endl;
			break;		
	}
	cout<<"After traversal: "<<endl;
	printVector(result);
	return 0;
	
}

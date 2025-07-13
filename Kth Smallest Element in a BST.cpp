#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* left;
		Node* right;
		Node(int d){
			this->data=d;
			this->left=NULL;
			this->right=NULL;
		}
};
Node* insertIntoBST(Node* root,int d){
	if(root==NULL){
		root=new Node(d);
		return root;
	}
	if(d>root->data){
		root->right=insertIntoBST(root->right,d);
	}
	else{
		root->left=insertIntoBST(root->left,d);
	}
	return root;
}
void takeInput(Node*  &root){
	int data;
	cin>>data;
	while(data!=-1){
		root=insertIntoBST(root,data);
		cin>>data;
	}
}
void inorder(Node* root,vector<int>&cnt){
	if (root==NULL) return;
	inorder(root->left,cnt);
	cnt.push_back(root->data);
	inorder(root->right,cnt);
}
int kthSmallest(Node* root,int k){
	vector<int>cnt;
	inorder(root,cnt);
	return cnt[k-1];
}
int main(){
	Node* root=NULL;
	cout<<"Enter data to create BST"<<endl;
	takeInput(root);
	int k=kthSmallest(root,1);
	cout<<k;
	return 0;
}

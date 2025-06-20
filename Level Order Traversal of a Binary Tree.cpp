#include<bits/stdc++.h>
using namespace std;

class TreeNode{
	public:
	int val;
	TreeNode* left;
	TreeNode* right;
	
	TreeNode():val(0),left(nullptr),right(nullptr) {}
	TreeNode(int x): val(x),left(nullptr),right(nullptr){}
	TreeNode(int x,TreeNode* left,TreeNode* right): val(x),left(left),right(right) {}
	
};
class Solution{
	public:
		vector<vector<int>> levelOrder(TreeNode* root){
		
	vector<vector<int>> ans;
	if(root==nullptr){
		return ans;
	}
	queue<TreeNode*>q;
	q.push(root);
	while(!q.empty()){
		int size=q.size();
		vector<int>level;
		for(int i=0;i<size;i++){
			TreeNode* node=q.front();
			q.pop();
			level.push_back(node->val);
			if(node->left!=nullptr){
				q.push(node->left);
			}
			if(node->right!=nullptr){
				q.push(node->right);
			}
		}
		ans.push_back(level);
		
	}
	return ans;
}
};
void printVector(const vector<int>& v){
	for(auto num:v){
		cout<<num<<" ";
	}
	cout<<endl;
}
int main(){
	TreeNode* root=new TreeNode(1);
	root->left=new TreeNode(2);
	root->right=new TreeNode(3);
	root->left->left=new TreeNode(4);
	root->left->right=new TreeNode(5);
	Solution solution;
	vector<vector<int>> result=solution.levelOrder(root);
	int n=result.size();
	cout<<"Level Order Traversal of Tree: "<<endl;
	for(const vector<int>& level:result){
		printVector(level);
	}
	cout<<"Level is: "<<n<<endl;
	return 0;
}

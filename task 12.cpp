#include<iostream>
using namespace std;
class BinTreeNode{
	public:
		int value;
		BinTreeNode* left;
		BinTreeNode* right;
		BinTreeNode(int value){
			this->value=value;
			this->left=NULL;
			this->right=NULL;
		}
};
BinTreeNode* tree_insert(BinTreeNode* tree, int item){
	if(tree==NULL)
	    tree=new BinTreeNode(item);
	else
	    if(item<tree->value)
	       if(tree->left==NULL)
	          tree->left=new BinTreeNode(item);
	        else
	          tree_insert(tree->left,item);
	    else
	       if(tree->right==NULL)
	          tree->right=new BinTreeNode(item);
	       else
	          tree_insert(tree->right,item);
	return tree;
} 
void postorder(BinTreeNode* tree){
	if(tree->left!=NULL)
	    postorder(tree->left);
	if(tree->right!=NULL)
	    postorder(tree->right);
	cout<<tree->value<< endl;
}


void push(BinTreeNode* n,int &top,BinTreeNode* stack[]){
	top++;
	stack[top]=n;
}
void pop(int &top, BinTreeNode* stack[]){
	top--;
}
bool empty(int &top){
	return top==0;
}
void in_order(BinTreeNode* tree,BinTreeNode* stack[],int &top){
	if(tree==NULL)
	   return;
	BinTreeNode* n=tree;
	while(n!=NULL||!empty(top)){
		if(n!=NULL){
			push(n,top,stack);
			n=n->left;
		}
		else{
			n=stack[top];
			pop(top,stack);
			cout<<n-> value<<endl;
			n=n->right;
		}
	}
	
	
}
void in_order_r(BinTreeNode* tree){
 if(tree->left!=NULL)
 in_order_r(tree->left);
 cout << tree->value <<endl;
 if(tree->right!=NULL)
 in_order_r(tree->right);
}

int main(int argc, char *argv[])
{
BinTreeNode* t=tree_insert(0,6);
tree_insert(t,10);
tree_insert(t,5);
tree_insert(t,2);
tree_insert(t,3);
tree_insert(t,4);
tree_insert(t,11);
BinTreeNode* stack[20];
int top=0;
in_order(t,stack,top);
return 0;
}


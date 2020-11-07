#include <iostream>
#include "Tree.h"
using namespace DSAlgo;
Tree::Tree(int n):maxChild(n){}
//Check if root is null
bool Tree::isEmpty(){return this->root == nullptr;}
//create a node
TreeNode* Tree::createNode(int d){
	TreeNode* node = new TreeNode(maxChild);
	node->data = d;
	return node;
}

//insert an element in the last as leaf node;
//TODO : insert at first empty position i order to keep it balanced.
bool Tree::insert(int d){
	TreeNode* newNode = createNode(d);
	if(newNode == nullptr) return false;
	if(root == nullptr){root = newNode; return true;};
	TreeNode* head = root;
	while(head->childs[0] != nullptr)head = head->childs[0];
	head = newNode; 
	return  true;
}
bool Tree::remove(int d){}
bool Tree::height(){}
bool Tree::totalNode(){}

void Tree::traversal_preorder_recursive(){}
void Tree::traversal_preorder_iterative(){}
void Tree::traversal_inorder_recursive(){}
void Tree::traversal_ineorder_iterative(){}
void Tree::traversal_postorder_recursive(){}
void Tree::traversal_postorder_iterative(){}
Tree::~Tree()
{
	std::cout<<"Tree destroyed";
}

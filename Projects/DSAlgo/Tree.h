#ifndef TREE_H
#define TREE_H
#include "TreeNode.h"
namespace DSAlgo{
class Tree
{
	public:
		Tree(int childLength);
		~Tree();
		virtual bool insert(int d);
		virtual bool remove(int d);
		virtual bool height();
		virtual bool isEmpty();
		virtual TreeNode* createNode(int d);
		virtual bool totalNode();
		virtual void traversal_preorder_recursive();
		virtual void traversal_preorder_iterative();
		virtual void traversal_inorder_recursive();
		virtual void traversal_ineorder_iterative();
		virtual void traversal_postorder_recursive();
		virtual void traversal_postorder_iterative();
	protected:
		TreeNode* root = nullptr;
		int maxChild = 5;
		
};
}

#endif

#include "TreeNode.h"
using namespace DSAlgo;
TreeNode::TreeNode(int childrenCount):childrenCount(childrenCount)
{
	for(TreeNode* child: childs){
		child = nullptr;
	}
}

TreeNode::~TreeNode()
{
//	delete []childs;
}

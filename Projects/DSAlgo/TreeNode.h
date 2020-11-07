#ifndef TREENODE_H
#define TREENODE_H
namespace DSAlgo{

class TreeNode
{
	private:
	int childrenCount;	
	public:
		int data;
		TreeNode* childs[10];
		TreeNode(int childrenCount);
		~TreeNode();
	protected:
	
};
}

#endif

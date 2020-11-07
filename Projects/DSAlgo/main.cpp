#include <iostream>
#include "Tree.h"
#include "BinaryTree.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace DSAlgo;
int main(int argc, char** argv) {
	Tree* t;
	BinaryTree* bt = new BinaryTree;
	bt->insert(5);
	std::cout<<(bt->isEmpty() ? "Tree is empty" : "Tree is not empty");
	return 0;
}

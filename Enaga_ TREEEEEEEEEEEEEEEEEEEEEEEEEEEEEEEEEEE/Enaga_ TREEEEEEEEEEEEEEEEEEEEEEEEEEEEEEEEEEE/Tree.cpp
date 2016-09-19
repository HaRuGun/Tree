#include <iostream>
#include "Tree.h"


Tree::Tree(char _data)
{
	LeftChild = NULL;
	RightSibling = NULL;
	this->_data = _data;
}

void Tree::AddChild(Tree * Child)
{
	if (LeftChild == NULL)
		LeftChild = Child;
	else
	{
		Tree * temp = LeftChild;

		while (temp->RightSibling != NULL)
			temp = temp->RightSibling;
		temp->RightSibling = Child;
	}
}

void Tree::PrintRoot(int _depth)
{
	for (int i = 0; i < _depth; i++)
		cout << " ";
	cout << _data << endl;

	if (LeftChild != NULL)
		LeftChild->PrintRoot(_depth + 1);

	if (RightSibling != NULL)
		RightSibling->PrintRoot(_depth);
}
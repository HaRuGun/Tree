#include <iostream>
#include "Tree.h"

void main()
{
	Tree Root('R'), A('A'), B('B'), C('C'), D('D'), E('E'), F('F');

	Root.AddChild(&A);
	Root.AddChild(&B);

	A.AddChild(&C);
	A.AddChild(&D);

	B.AddChild(&E);
	B.AddChild(&F);

	Root.PrintRoot(0);
}
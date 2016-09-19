#pragma once

using namespace std;

class Tree
{
private:
	char _data;
	Tree * LeftChild;
	Tree * RightSibling;

public:
	Tree() {};
	Tree(char _data);
	
	void AddChild(Tree * Child);
	void PrintRoot(int _depth);

	~Tree() {};
};


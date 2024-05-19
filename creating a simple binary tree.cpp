//============================================================================
// Name        : creating.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<algorithm>
using namespace std;

struct Node
{
	int data;
	 Node *left;
	 Node*right;
	Node(int value)
	{

		data=value;
		left=NULL;
		right=NULL;
	}
};

// 'Heighted' function caluculates the height of binary tree;
int heighted(Node *root)
{
	if(root ==NULL)

		return 0;

	int left_hgt= heighted(root->left);
	int right_hgt=heighted(root->right);

	return max(left_hgt,right_hgt)+1;
}
//'Total_node' function counts the all node;
int total_node(Node *root)
{
	if(root ==nullptr)
	{
		return 0;
	}
	int total_left=total_node(root->left);
	int total_right=total_node(root->right);

	return total_left+total_right+1;

}
//maxx_node() function calculates the highest element of tree
int maxx_node(Node *root)
{
  if (root==NULL )
   return 0;
  int maxx=root->data;
  int num1=maxx_node(root->left);
  int num2=maxx_node(root->right);
  if(num1>maxx)
    maxx=num1;
  if(num2>maxx)
    maxx=num2;
  return maxx;

}
int main() {
	 Node *root=new Node(1);
	root->left=new  Node(2);
	root-> right=new Node(3);
	root->left->left=new  Node(4);
	root-> right->right=new Node(5);
	root->left->left->left=new  Node(6);
	root-> right->right->right=new Node(7);
	root->left->left->right=new  Node(8);


	cout<<"  "<<root->data<<endl;
	cout<<"/    \\"<<endl;
	cout<<root->left->data<<"    "<<root->right->data<<endl;
	cout<<"/    \\"<<endl;
	cout<<root->left->left->data<<"    "<<root->right->right->data;

	cout<<endl<<"Height of tree is :"<<heighted(root);
	cout<<endl<<"Total node of tree is :"<<total_node(root);
	cout<<endl<<"maximum element in array is :"<<maxx_node(root);

	return 0;
}

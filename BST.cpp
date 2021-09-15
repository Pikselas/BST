#include"BST.h"
//static insret does the insertion
void BST::insert(std::shared_ptr<BST::node>& RootNode,const int data)
{
  if(RootNode == nullptr)
  {
    RootNode = std::make_shared<node>();
    RootNode->data = data;
  }
  else if(data >= RootNode->data)
  {
    insert(RootNode->rightNode,data);
  }
  else
  {
    insert(RootNode->leftNode,data);
  }
}
//instance's append function 
void BST::append(int data)
{
  insert(root,data);
}
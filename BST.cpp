#include"BST.h"
//static insret does the insertion
template<typename data_type>
void BST<data_type>::insert(std::shared_ptr<BST::node>& RootNode,const data_type data)
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
//inserts new item to the tree
template<typename data_type>
void BST<data_type>::append(const data_type data)
{
  insert(root,data);
}
#include"BST.hpp"
//static insert does the insertion
template<typename data_type>
void BST<data_type>::insert(std::shared_ptr<BST::node>& RootNode,const data_type& data)
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

//searches for data
template<typename data_type>
bool BST<data_type>::search(const std::shared_ptr<BST::node>& RootNode,const data_type& data)
{
   if(RootNode == nullptr)
   {
     return false;
   }
   else if(RootNode->data == data)
   {
     return true;
   }
   else if(RootNode->data > data)
   {
     return search(RootNode->leftNode,data);
   }
   else
   {
     return search(RootNode->rightNode,data);
   }
}
//inserts new item to the tree
template<typename data_type>
void BST<data_type>::append(const data_type& data)
{
  insert(root,data);
}
template<typename data_type>
bool BST<data_type>:: find(const data_type& data)
{
  return search(root,data);
}
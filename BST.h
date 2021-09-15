#pragma once
#include<iostream>
#include<memory>
template<typename data_type>
class BST
{
  public:
       struct node
       {
          std::shared_ptr<node> leftNode = nullptr;
          std::shared_ptr<node> rightNode = nullptr;
          data_type data;
       };
      std::shared_ptr<BST::node> root = nullptr;
  public:
    BST() = default;
    ~BST() = default;
  private:
    static void insert(std::shared_ptr<BST::node>& RootNode,const data_type data);
  public:
    void append(const data_type data);
};
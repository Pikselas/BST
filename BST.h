#include<iostream>
#include<memory>
class BST
{
  public:
       struct node
       {
          std::shared_ptr<node> leftNode = nullptr;
          std::shared_ptr<node> rightNode = nullptr;
          int data = 0;
       };
      std::shared_ptr<BST::node> root = nullptr;
  public:
    BST() = default;
    ~BST() = default;
  private:
    static void insert(std::shared_ptr<BST::node>& RootNode,const int data);
  public:
    void append(int data);
};
#include"BST.h"
int main()
{
    BST<int> btr;
    btr.append(10);
    std::cout<<btr.root->data;
    return 0;
}
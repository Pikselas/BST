#include"BST.h"
#include"BST.cpp"
int main()
{
    BST<int> btr;
    btr.append(10);
    btr.append(20);
    btr.append(5);
    std::cout<<std::boolalpha<<btr.find(20);
    return 0;
}
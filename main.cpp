#include"BST.hpp"
#include"BST.cpp"
int main()
{
    BST<int> bs;
    bs.append(10);
    std::cout<<std::boolalpha<<bs.find(10);
    return 0;
}

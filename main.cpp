// Dylan Strnad
//CS23001
//binary_tree

#include "btree.hpp"
#include <iostream>

int main(){

btree<int> tree;

tree.insert(8);
tree.insert(4);
tree.insert(1);
tree.insert(7);
tree.insert(2);
tree.insert(55);
tree.insert(16);
tree.insert(9);
tree.insert(87);
tree.insert(64);
tree.insert(99);

if(tree.find(55) == true){
    std::cout << "found 55" << std::endl;
}
else{
    std::cout << "55 not found" << std::endl;
}

if(tree.find(0) == true){
    std::cout << "found 0" << std::endl;
}
else{
    std::cout << "0 not found" << std::endl;
}

std::cout << "inorder: ";
tree.inorder(std::cout);
std::cout << std::endl;

std::cout << "postorder: ";
tree.postorder(std::cout);
std::cout << std::endl;

std::cout << "preorder: ";
tree.preorder(std::cout);
std::cout << std::endl;

int depth = -1;
std::cout << "depth of 4: " <<tree.findDepth(4, depth) << std::endl;

depth = -1;
std::cout << "depth of 2: " <<tree.findDepth(2, depth) << std::endl;

depth = -1;
std::cout << "depth of non-existent number: " <<tree.findDepth(105, depth) << std::endl;

}
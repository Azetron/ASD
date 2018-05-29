#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <iostream>
#include <string>
using namespace std;
struct TreeNode{
        string data;
        TreeNode *left;
        TreeNode *right;
};

class BinaryTree
{
private:
    TreeNode *root;
public:
    BinaryTree(){
        root=NULL;
        begin(root);
    }
    void begin(TreeNode*&);
    void win();
    void lose(TreeNode*&,TreeNode*&);
};

#endif // BINARYTREE_H

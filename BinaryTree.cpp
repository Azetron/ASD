#include "BinaryTree.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

void BinaryTree::begin(TreeNode*& tree){
        string ch,ch1,ch2;
        if(tree != NULL){
            cout<<"\t\t\t";
            cout<<tree->data<<" ";
            getline(cin,ch);
            if(ch == "N" || ch == "n"){
                if(tree->right != NULL){
                    if(tree->right->left == NULL && tree->right->right == NULL){
                        cout<<"\t\t\t";
                        cout<<"Is it "<<tree->right->data<<"? ";
                        getline(cin,ch1);
                        if(ch1 == "Y" || ch1 == "y"){
                            win();
                        }
                        else{
                            lose(tree,tree->right);
                        }
                    }
                    else{
                        begin(tree->right);
                    }

                }
                else{
                lose(tree->right,tree);
            }

            }
            else{
            if(tree->left != NULL){
                if(tree->left->left != NULL){
                    begin(tree->left);
                }
                else{
                    cout<<"\t\t\t\t";
                    cout<<"Is it "<<tree->left->data<<"? ";
                    getline(cin,ch2);
                    if(ch2 == "Y" || ch2 == "y"){
                        win();
                    }
                    else{
                        lose(tree,tree->left);
                    }
                }
            }
            else{
                lose(tree->left,tree);
            }
          }
        }
        else{
        lose(tree,tree);
    }
}
void BinaryTree::win()
{
    string ch;
    cout<<"\t\t\t";
    cout<<"I win!"<<endl;
    cout<<"\t\t\t";
    cout<<"Play again?(y/n)";
    getline(cin,ch);
    if(ch == "Y" || ch == "y"){
        cout<<endl;
        begin(root);
    }
    else{
        cout<<"\n\t\t\t\t\t\t\t\t";
        cout<<"Well done!!!";
    }
}
void BinaryTree::lose(TreeNode*& tree, TreeNode*& tree2){
    string question,answer;
    string ch,ch2;
    TreeNode* oneNode = new TreeNode;
    TreeNode* twoNode = new TreeNode;
    if(root ==NULL){
        cout<<"\n\t\t";
        cout<<"I know nothing yet!"<<endl<<endl;
        cout<<"\n\t\t";
        cout<<"Think and give me a person, place, or thing!->>";
        getline(cin,answer);
    }
    else{
        cout<<"\t\t\t\t";
        cout<<"I give up."<<endl;
        cout<<"\t\t\t\t";
        cout<<"What is it?";
        getline(cin,answer);
    }
    if(tree != NULL){
        cout<<"\n\t\t";
        cout<<"I need a question to distinguish "<<answer<<"from a/an "<<tree2->data<<". ";
    }
    else if(root != NULL){
        cout<<"\n\t\t";
        if(tree2->left != NULL){
            if(tree2->left->left == NULL){
                cout<<"I need a question to distinguish "<<answer<<"from a/an"<<tree2->left->data<<". ";
            }
        }
    }
    else{
        cout<<"\n\t\t";
        cout<<"I need a question for me to know what that is ";
    }
    cout<<"\n\t\t";
    cout<<"Enter the question: ";
    getline(cin,question);
    cout<<"\n\t\t";
    cout<<"If the answer were "<<answer<<"the answer would be? ";
    getline(cin,ch);
    if(tree != NULL){
        oneNode->data=question;
        if(ch == "Y" || ch == "y"){
            oneNode->right=tree2;
            oneNode->left=twoNode;
        }
        else{
            oneNode->left=tree2;
            oneNode->right=twoNode;
        }
        tree2=oneNode;
        twoNode->data=answer;
        twoNode->right=twoNode->left=NULL;
    }
    else{
        tree=oneNode;
        oneNode->data=question;
        if(ch == "Y" || ch == "y"){
            oneNode->right=NULL;
            oneNode->left=twoNode;
        }
        else{
            oneNode->left=NULL;
            oneNode->right=twoNode;
        }
        twoNode->data=answer;
        twoNode->left=twoNode->right=NULL;
    }
    if(root==NULL)
        root=tree;
        cout<<"\t\t\t\t";
        cout<<"Play again?(y/n) ";
        getline(cin,ch2);
        cout<<endl;
     if(ch2 == "Y" || ch2 == "y")
            begin(root);
     else{
        cout<<"\n\t\t\t";
        cout<<"Well done!!!";
     }
}

#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

struct s//node declaration
{
    int k;
    s* lch;
    s* rch;
};

class SplayTree
{
public:
    s* RR_Rotate(s* k2);
    s* LL_Rotate(s* k2);
    s* Splay(int key, s* root);
    s* New_Node(int key);
    s* Insert(int key, s* root);
    s* Delete(int key, s* root);
    s* Search(int key, s* root); //seraching
    void InOrder(s* root); //inorder traversal

};

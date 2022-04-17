#ifndef NODE2_3_H
#define NODE2_3_H

struct Node2_3{

    int height;
    int keys[2];
    class Tree2_3* tree;

    Node2_3* father;
    Node2_3* left, * mid, *right;

};

#endif


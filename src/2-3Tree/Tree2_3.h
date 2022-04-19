#ifndef TREE2_3_H
#define TREE2_3_H

class Tree2_3 {
    public:
        Tree2_3();
        ~Tree2_3();
    private:
        friend struct Node2_3;
        struct Node2_3* root;
};

#endif


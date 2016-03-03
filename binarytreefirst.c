#include <stdio.h>
#include <stdlib.h>

//some programming on Binary Trees.by Nikolaos Mouzakitis 2016.

struct node {
        int data;
        struct node *left,*right,*parent;
} ;


// creating leaves on the binary tree. lv-left value.rv - right leaf's value.*p is the parental element.//

void create_leaves(struct node *p,int lv,int rv)
{
        struct node *lchild,*rchild ;
        rchild = malloc(sizeof(struct node));
        lchild = malloc(sizeof(struct node));

        // connectin pararent with childs.
        p->left = lchild;
        p->right = rchild;

        //assigning values to childs.
        rchild->parent = p;
        lchild->parent = p;

        //connecting childs to parent.
        lchild->data = lv;
        rchild->data = rv;

        //assigning NULL to childs ,making them new leaves.

        lchild->left = NULL;
        lchild->right = NULL;
        rchild->left = NULL;
        rchild->right = NULL;

}

int main(int argc,char *argv[])
{
        struct node *root;

        root = malloc(sizeof(struct node));

        //-----initializing root.---------

        root->parent = NULL;
        root->data = 1;

        create_leaves(root,4,2);

        printf("\t%d\n%d\t\t%d\n",root->data,root->left->data,root->right->data);


        return (0);
}

#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* right;
    struct Node* left;
}Node;

Node* createNode(int data){
    Node* nw = (Node*) malloc(sizeof(Node));
    nw->data = data;
    return nw;
}

void preOrderTraversal(Node* root){
    if(root != NULL){
        printf("%d ", root->data);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

void postOrderTraversal(Node* root){
    if(root != NULL){
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d ", root->data);
    }
}

void inOrderTraversal(Node* root){
    if(root != NULL){
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}
int main(){

    Node *r, *a, *b, *c, *d;
    r = createNode(4);
    a = createNode(1);
    b = createNode(6);
    c = createNode(5);
    d = createNode(2);

    r->left = a;
    r->right = b;
    a->left = c;
    a->right = d; 

    preOrderTraversal(r);
    printf("\n");
    postOrderTraversal(r);
    printf("\n");
    inOrderTraversal(r);
    printf("\n");


    return 0;
}
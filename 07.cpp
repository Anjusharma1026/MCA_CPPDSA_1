/*BST
1.the left subtree of a node contains only nodes with keys less than the nodes keys.
2.the right subtree of a node will contains only nodes with keys greater than the nodes keys.
3.the left and right subtree each must be a BST. There  must be no duplicate nodes .
*/
#include<iostream>
using namespace std;
class Node{
    public: 
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node* insertBST(Node* root, int val){
    if(root==NULL)return new Node(val);

    if(val < root-> data){
        root->left = insertBST(root->left,val);
    }
    else{
        root->right=insertBST(root->right,val);
    }
    return root;
}

void inorder(Node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data <<" ";
    inorder(root->right);
 
}

int main(){
    Node* root=NULL;
    root =insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);

    inorder(root);
}
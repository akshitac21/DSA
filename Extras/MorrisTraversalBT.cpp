#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right= NULL;
    }

};

void MorrisTraversal(Node* root)
{
    Node *current, *pre;
 
    if (root == NULL)
        return;
 
    current = root;
    while (current != NULL) {
 
        if (current->left == NULL) {
            cout << current->data << " ";
            current = current->right;
        }
        else {
 
            pre = current->left;
            while (pre->right != NULL && pre->right != current)
                pre = pre->right;
 
            if (pre->right == NULL) {
                pre->right = current;
                current = current->left;
            }
 
            else {
                pre->right = NULL;
                cout << current->data << " ";
                current = current->right;
            } 
        } 
    }
}

Node* buildTree(Node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new Node(data); //from class node
    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}

int main(){

    Node* root = NULL;

    cout<<"Create Tree: "<<endl;
    root = buildTree(root);

    cout<<"Morris Traversal: "<<endl;
    MorrisTraversal(root);

}

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

void lot(Node* root){
    queue<Node*>q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            //level has been traversed
            cout<<endl;

            if(!q.empty()){
                q.push(NULL);
            }
        }

        else{

            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }

    }
}

void inorder(Node* root){
    //base case
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    //base case
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    //base case
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


Node* insertBST(Node* &root, int data){
    //base case
    if(root == NULL){
        Node* root = new Node(data);
        return root;
    }

    if(data > root->data){
        root->right = insertBST(root->right, data);
    }
    else{
        root->left = insertBST(root->left, data);
    }

    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data; //takes the root

    while(data != -1){
        root = insertBST(root, data);
        cin>>data; //keep inserting
    }
}


int main(){

    Node* root = NULL;

    cout<<"Enter data to create BST"<<endl;
    takeInput(root);
    cout<<"Printing BST"<<endl;
    lot(root);
    cout<<"\n Inorder BST"<<endl;
    inorder(root);
    cout<<"\n Preordering BST"<<endl;
    preorder(root);
    cout<<"\n Postordering BST"<<endl;
    postorder(root);
}
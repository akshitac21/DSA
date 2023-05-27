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

Node* minVal(Node* root){
    Node* temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }

    return temp;
}

Node* maxVal(Node* root){
    Node* temp = root;

    while(temp->right != NULL){
        temp = temp->right;
    }

    return temp;
}



int main(){

    Node* root = NULL;

    cout<<"Enter data to create BST"<<endl;
    takeInput(root);

    Node* min = minVal(root);
    cout<<"Minimum value in BST is "<<min->data<<endl;

    Node* max = maxVal(root);
    cout<<"Maximum value in BST is "<<max->data<<endl;


}

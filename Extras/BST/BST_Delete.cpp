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

Node* deleteFromBST(Node* root, int val){
    //base case
    if(root==NULL){
        return NULL;
    }

    if(root->data == val){
        //0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        //1 child
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        //2 child
        //option 1: right se sabse minimum value
        if(root->left != NULL && root->right != NULL){
            int mini = minVal(root->right)->data;
            root->data = mini; //copied
            root->right = deleteFromBST(root->right, mini);
            return root;
        }

        /*option 2: left se sabse maximum value
        if(root->left != NULL && root->left!= NULL){
            int maxi = maxVal(root->left)->data;
            root->data = maxi;
            root->left = deleteFromBST(root->left, maxi);
            return root;
        }
        */
    }
    else if(root->data > val){
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else{
        root->right = deleteFromBST(root->right, val);
        return root;
    }

    return root;
}


int main(){

    Node* root = NULL;

    cout<<"Enter data to create BST"<<endl;
    takeInput(root);

    Node* min = minVal(root);
    cout<<"Minimum value in BST is "<<min->data<<endl;

    Node* max = maxVal(root);
    cout<<"Maximum value in BST is "<<max->data<<endl;

    cout<<"Printing BST : Level Order"<<endl;
    lot(root);
    
    root = deleteFromBST(root, 30);

    cout<<"Printing BST : Level Order"<<endl;
    lot(root);


}

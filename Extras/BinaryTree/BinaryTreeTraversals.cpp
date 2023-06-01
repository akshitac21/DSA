#include <iostream>
#include <queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data); //from class node
    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node* root){ //bfs
    queue<node*> q;

    q.push(root);
    q.push(NULL); //separator

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){ //prev level completed
            cout<<endl;

            if(!q.empty()){ //q still has children
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

        } //end of while
}

void inorder(node* root){
    //base case
    if(root == NULL){
        return;
    }

    inorder(root ->left); //lnr
    cout << root->data<<" ";
    inorder(root ->right);
}

void preorder(node* root){
    //base case
    if(root == NULL){
        return;
    }

    cout << root->data<<" "; //nlr
    preorder(root ->left);
    preorder(root ->right);
}

void postorder(node* root){ //lrn
    //base case
    if(root == NULL){
        return;
    }

    postorder(root ->left);
    postorder(root ->right);
    cout << root->data<<" ";
}

int countLeaf(node* root, int &count){
    //base case
    if(root == NULL){
        return 0;
    }

    countLeaf(root ->left,count); //lnr
    if(root -> left==NULL && root->right == NULL){
        cout<<"Leaf Node: "<<root->data<<endl;
        count++;
    }
    countLeaf(root ->right,count);

    return count;
}

void buildFromLevelOrder(node* &root){
    queue<node*>q;

    cout<<"Enter data from root: "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter left node for: "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp->left = new node(leftData); //put a node in left
            q.push(temp->left);
        }

        cout<<"Enter right node for: "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }

    }
}


int main(){

    node* root = NULL;

    /*
    //create a tree
    root = buildTree(root);

    cout<<"printing tree..."<<endl;
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    levelOrderTraversal(root);

    cout<<"Inorder traversal..."<<endl;
    inorder(root);

    cout<<"\nPreorder traversal..."<<endl;
    preorder(root);

    cout<<"\nPostorder traversal..."<<endl;
    postorder(root);
    cout<<endl;
    */

   buildFromLevelOrder(root);
   levelOrderTraversal(root); //1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    int count = 0;
    count = countLeaf(root,count);
    cout<<"The number of leaf nodes are "<<count<<endl;
    return 0;
}

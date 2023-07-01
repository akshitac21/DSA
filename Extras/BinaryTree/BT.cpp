#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* create(Node* &root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;

    root = new Node(data);
    if(data == -1){
        return NULL;
    }

    cout<<"Left of: "<<data<<endl;
    root->left = create(root->left);
    cout<<"Right of: "<<data<<endl;
    root->right = create(root->right);

    return root;
}

//level order traversal or bfs
void bfs(Node* root){
    if(root == NULL) return;

    queue<Node*>q;

    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();

        if(temp->left != NULL){
            q.push(temp->left);
        }

        if(temp->right != NULL){
            q.push(temp->right);
        }
    }
}

//dfs: inorder, preorder, postorder

void inorder(Node* root){
    //lnr
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    //nlr
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    //lrn
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

//count leaf
int countleaf(Node* root, int &count){
    if(root==NULL){
        return 0;
    }

    countleaf(root->left, count);
    if(root->left ==NULL && root->right == NULL){
        count++;
    }
    countleaf(root->right,count);

    return count;
}

//build from level order traversal
void buildbfs(Node* &root){

    queue<Node*>q;

    cout<<"Root: ";
    int data;
    cin>>data;
    root = new Node(data);

    q.push(root);

    while(!q.empty()){
        Node* node = q.front();
        q.pop();

        cout<<"Left of "<<node->data<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata != -1){
            node->left = new Node(leftdata);
            q.push(node->left);
        }

        cout<<"Right of "<<node->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata != -1){
            node->right = new Node(rightdata);
            q.push(node->right);
        }
    }
}

int main(){
    Node* root = NULL;

    //create a tree
    root = create(root);
    //1 2 4 -1 -1 5 -1 -1 3 -1 -1

    bfs(root);
    cout<<"\n\nInorder traversal LNR: "<<endl;
    inorder(root);
    cout<<"\nPreorder traversal NLR: "<<endl;
    preorder(root);
    cout<<"\nPostorder traversal LRN: "<<endl;
    postorder(root);

    int count = 0;
    cout<<"\n\nCount of the leaf nodes: "<<countleaf(root,count)<<endl;
   
    cout<<"\nCreate tree from bfs "<<endl;
    buildbfs(root);
    bfs(root);
}

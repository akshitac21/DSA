//Singly Linked List

#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    //constructor
    Node(int data) { //create a new node
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node() {
        int value = this -> data;
        //delete this
        if(this-> next!= NULL) {
            delete this->next;
            this->next = NULL; //point it to null
        }
        cout << "Deleting Node: " << value << endl;
    } 
};

void InsertAtHead(Node* &head, int d) {
        Node *newNode = new Node(d);
        newNode->next = head; //set the next of the new node to the head
        head = newNode;
}

void InsertAtTail(Node* &tail, int d) {
    Node* newNode = new Node(d); //create a new node
    tail -> next = newNode; //set the next of the new node to the tail
    tail = newNode; //set the tail to the new node
}

void InsertAtPosition(Node* &tail, Node* &head, int d, int pos) {

    Node* temp = head; //create a temp node
    
    //Inserting at the head
    if(pos == 1) {
        InsertAtHead(head, d);
        return;
    }

    //Inserting at the last position
    if(temp -> next == NULL) { //agar last tak pohoch gaye
        InsertAtTail(tail, d);
        return;
    }

    int i = 1;
    while(i < pos - 1) { //to go to n position, we should traverse till n-1
        temp = temp -> next; //temp points to the next node
        i++;
    } //temp ko aage badhao pos ke pehle tak

    Node* insertNode = new Node(d); //create a new node
    insertNode -> next = temp -> next; //set the next of the new node to the next of the temp node
    temp -> next = insertNode; //set the next of the temp node to the new node
}

void print(Node* &head){

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }

    Node* temp = head;
    while(temp!= NULL){
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode (int position, Node* &head){
    //position 1 to end
    if(position == 1){
        Node* delNode = head;
        head = head -> next;
        //free the memory
        delNode -> next = NULL;
        delete delNode;
        
    }
    //middle node or last node deletion
    else{

        Node* curr = head;
        Node* prev = NULL;

        int cnt=1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++; //iterate it forward
        }


        prev -> next = curr -> next;
        curr -> next = NULL;
        //free the memory
        delete curr;
    }
}

int main(){

    //create a node
    Node* node1 = new Node(10);
    //cout<< node1-> data <<endl;
    //cout<< node1-> next <<endl;

    //head holds the data of node1;
    Node* head = node1;
    Node* tail = node1;
    //print(head);
    
    InsertAtHead(head,12);
    //print(head);

    InsertAtHead(head,15);
    //print(head);

    InsertAtTail(tail,25);
    //print(head);

    InsertAtPosition(tail,head,80,1);
    //print(head);

    InsertAtPosition(tail,head,90,2);
    print(head);

    //deleteNode(6,head);
    //print(head);

    /*for(Node* curr = head; curr!= NULL; curr = curr->next){
        cout<<curr->data;
    }
    */

    cout<<"Head value: "<<head->data<<endl;
    cout<<"Tail value: "<<tail->data<<endl;

    return 0;
}

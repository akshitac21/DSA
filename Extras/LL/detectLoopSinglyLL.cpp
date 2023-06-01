//Singly Linked List

#include <iostream>
#include <map>
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

bool detectLoop(Node* head){
    if(head == NULL)
        return false;

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp !=NULL) {

        //cycle is present
        if(visited[temp] == true) {
            cout<<"Loop detected: "<<temp->data<<endl;
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;

    }
    return false;
}

int main(){

    //create a node
    Node* node1 = new Node(10);

    //head holds the data of node1;
    Node* head = node1;
    Node* tail = node1;
    
    InsertAtTail(tail,12);
    //print(head);

    InsertAtTail(tail,15);
    //print(head);

    InsertAtTail(tail,22);
    //print(head);

    tail->next = head->next; //create cycle, dont print it since it will show infinite cycle


    cout<<"Head value: "<<head->data<<endl;
    cout<<"Tail value: "<<tail->data<<endl;
    //print(head); //will create infinite cycle

    if(detectLoop(head)){
        cout<<"Cycle detected: "<<endl;
    }
    else{
        cout<<"Cycle not detected: "<<endl;
    }

    return 0;
}

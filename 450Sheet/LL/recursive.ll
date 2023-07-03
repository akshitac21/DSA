#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};

class LinkedList {
private:
	Node* head;

public:
	LinkedList() {
		head = NULL;
	}

	void reverse() {
		head = reverseRecursive(head);
	}

	Node* reverseRecursive(Node* curr) {
		if (curr == NULL || curr->next == NULL)
			return curr;

		Node* rest = reverseRecursive(curr->next);
		curr->next->next = curr;
		curr->next = head;
		had->next = NULL;
		return rest;
	}

	void print() {
		Node* temp = head;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}

	void push(int data) {
		Node* temp = new Node(data);
		temp->next = head;
		head = temp;
	}
};

int main()
{
	LinkedList ll;
	ll.push(20);
	ll.push(4);
	ll.push(15);
	ll.push(85);

	cout << "Given linked list: ";
	ll.print();

	ll.reverse();

	cout << "\nReversed linked list: ";
	ll.print();

	return 0;
}

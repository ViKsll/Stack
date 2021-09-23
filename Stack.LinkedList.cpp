#include <iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
};

void push(Node** head, int data) {
	Node* new_node = new Node();
	if (*head == NULL) {
		new_node->data = data;
		new_node->next = NULL;
		*head = new_node;
	}
	else {
		new_node->data = data;
		new_node->next = *head;
		*head = new_node;
	}
}
void print(Node* head) {
	while (head != NULL) {
		cout << head->data << endl;
		head = head->next;
	}
}
void peek(Node* head) {
	if (head != NULL) {
		cout << "The top number is: " << head->data << endl;
	}
	else {
		cout << "The list is empty!";
	}
}
void pop(Node** head) {
	if (*head == NULL) return;
	Node* temp = *head;
	*head = (*head)->next;
	cout << "The number: " << temp->data << " deleted" << endl;
	delete temp;
}
void isEmpty(Node* head) {
	if (head == NULL) {
		cout << "The list is empty" << endl;
	}
	else {
		cout << "The list is not empty" << endl;
	}
}

int main() {
	Node* head = NULL;
	push(&head, 1);
	push(&head, 2);
	push(&head, 3);
	push(&head, 4);
	push(&head, 5);

	print(head);
	cout << endl;

	peek(head);
	cout << endl;

	pop(&head);
	cout << endl;

	print(head);
	cout << endl;

	isEmpty(head);

	return 0;
}

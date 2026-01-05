// List Given the head of a singly linked list, reverse the list, and return the reversed list.

// Input: head = [1,2,3,4,5]
// Output: [5,4,3,2,1]

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void insert(Node* head, int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
}


Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main(){

    Node* head = NULL;

    head = new Node();
    head->data = 1;
    head->next = NULL;
    insert(head,2);
    // insert(head,3);
    // insert(head,4);
    // insert(head,5);

    // while(head != NULL){
    //     cout << head->data << " ";
    //     head = head->next;
    // }

    Node*  nhead = reverse(head);

    while(nhead != NULL){
        cout << nhead->data << " ";
        nhead = nhead->next;
    }

    return 0;
}
//
// Created by asbpo on 17-11-2024.
//

#include "doubly-linked.h"

List::List(): first(nullptr) {

}
List::~List() {
    Node* current = first;
    while(current != nullptr){
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

void List::print() {
    Node* head = first;
    while(head != nullptr){
        cout << " ";
        cout << head->val;
        head = head->next;
    }
    cout << endl;
}

void List::reverse() {
    Node* curr = first;
    Node* tmp = nullptr;
    while (curr != nullptr) {
        tmp = curr->prev;
        curr->prev = curr->next;
        curr->next = tmp;
        curr = curr->prev;
    }
    if (tmp != nullptr) {
        first = tmp->prev;
    }
}

void List::insert(int n) {
    Node* newNode = new Node{n, nullptr, nullptr};
    Node* head = first;
    if(first == nullptr){
        first = newNode;
    }
    else {
        while (head->next != nullptr) {
            head = head->next;
        }
        head->next = newNode;
        newNode->prev = head;
    }
}

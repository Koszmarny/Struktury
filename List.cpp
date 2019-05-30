//
// Created by pawel on 12.04.2019.
//

#include "List.h"
int value;
List::List() {
    head == nullptr;
}

List::~List() {
//dtor
}

void List::insertFront(int value) {
    Node *tmp = new Node(value, head);
    head = tmp;
}

bool List::remove(int value) {
    Node *tmp = this->head;
    Node *prev = nullptr;
    bool jest = false;
    while (tmp->getFather() != nullptr && jest == false) {
        if (tmp->getValue() != value) {
            prev = tmp;
            tmp = tmp->getFather();
        } else {
            jest = true;
        }
    }
    if (jest == true) {
        if (tmp != this->head) {
            prev->setFather(tmp->getFather());
            delete tmp;
        } else {
            head = head->getFather();
            delete tmp;
        }
        return true;

    } else {
        return false;
    }

}

Node *List::search(int value) {
    return nullptr;

}

string List::printList() {
    bool jest = false;
    string zmienna;
    zmienna = "[";
    Node *tmp = head;
    while (tmp->getFather() != nullptr && jest == false) {
        if (tmp->getValue() != value) {

        }
        return "";
    }
}

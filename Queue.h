//
// Created by pawel on 12.04.2019.
//

#ifndef SDIA_QUEUE_H
#define SDIA_QUEUE_H


#include "Node.h"

using namespace std;

class Queue {
private:
    Node *head;
    Node *tail;
public:
    int front() {
        return head->getValue();
    }

    bool isEmpty() {
        return head == nullptr;
    }

    void attach(int el) {
        Node *link = new Node(el, nullptr);
        if (this->isEmpty()) {
            head = link;
        } else {
            std::cout << "kolejka nie pusta";
            tail->setFather(link);
        }
        tail = link;
    }

    bool detach() {
        if (this->isEmpty()) {
            return false;
        } else {
            head = head->getFather();
        }
    }
};


#endif //SDIA_QUEUE_H

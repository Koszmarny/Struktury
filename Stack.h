//
// Created by pawel on 12.04.2019.
//

#ifndef SDIA_STACK_H
#define SDIA_STACK_H


class Stack {
private:
    Stack *head;
    Stack *tail;
public:
    Stack();

    ~Stack();

    void push();

    void pop();

    void top();

    bool isEmpty() {
        return head == nullptr;
    }
};


#endif //SDIA_STACK_H

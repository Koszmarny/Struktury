//
// Created by pawel on 12.04.2019.
//

#ifndef SDIA_STACK_H
#define SDIA_STACK_H


class Stack {
public:
    int l;
    Stack *poprzedni;

    Stack();

    ~Stack();

    void push(Stack **s);

    void pop(Stack **s);

    double size;

    bool isEmpty(Stack **s);
};


#endif //SDIA_STACK_H

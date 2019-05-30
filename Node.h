//
// Created by pawel on 12.04.2019.
//

#ifndef SDIA_NODE_H
#define SDIA_NODE_H

#include <iostream>

using namespace std;

class Node {
private:
    int data;
    Node *father;
    Node *left;
    Node *right;
public:
    Node();

    virtual~Node();

    Node(int el, Node *ptr);

    void setFather(Node *n);

    Node *getFather();

    void setValue(int el);

    int getValue();

    Node *getLeft();

    void setLeft(Node *node);

    Node *getRight();

    void setRight(Node *node);

};


#endif //SDIA_NODE_H

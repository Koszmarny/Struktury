//
// Created by pawel on 12.04.2019.
//

#include"Node.h"
Node::Node()
{
    data = 0;
    father = nullptr;
    left = 0;
    right = 0;
}

Node::~Node()
{
//dtor
}

Node::Node(int value, Node* ptr)
{
    data = value;
    father = ptr;
}
int Node::getValue()
{
    return data;
}
Node * Node::getFather()
{
    return father;
}
void Node::setValue(int el)
{
    data = el;
}
void Node::setFather( Node* ptr)
{
    father = ptr;
}

Node *Node::getLeft()
{
    return left;
}

void Node::setLeft(Node *node)
{
    left = node;
}

Node *Node::getRight()
{
    return right;
}

void Node::setRight(Node *node)
{
    right = node;
}


//
// Created by pawel on 10.05.2019.
//
#include "Node.h"
#include "BST.h"

/*
 * Constructors
 */

BST::BST(Node *_root)
        : root(_root) {}

BST::BST() {
    BST(nullptr);
}


/*
 * Other methods
 */

#include <iostream>

void BST::print(unsigned method) {
    if (root != nullptr) {
        std::cout << " ";
        BST(root->getLeft()).print(0);
        std::cout << "] " << root->getValue() << "[ ";
        BST(root->getRight()).print(0);
        std::cout << " ";
    }
}

void BST::add(int v) {
    Node *toAdd = new Node(v, nullptr);
    if (root == nullptr) {
        root = toAdd;
    } else {
        if (toAdd->getValue() > root->getValue()) {
            if (root->getRight() == nullptr)
                root->setRight(toAdd);
            else
                BST(root->getRight()).add(v);
        } else if (toAdd->getValue() < root->getValue()) {
            if (root->getLeft() == nullptr)
                root->setLeft(toAdd);
            else
                BST(root->getLeft()).add(v);
        }
    }
}

Node *BST::search(int v) {
    Node *current = this->root;
    if (current->getValue() == v) {
        return current;
    } else if (current->getLeft() != nullptr &&
               current->getValue() > v) {
        return BST(current->getLeft()).search(v);
    } else if (current->getRight() != nullptr &&
               current->getValue() < v) {
        return BST(current->getRight()).search(v);
    } else {
        return nullptr;
    }
}

bool BST::remove(int v) {
    Node *toRemove = search(v);
    if (toRemove == nullptr)
        return false;
    Node *leftOfRemoved = toRemove->getLeft();
    Node *rightOfRemoved = toRemove->getRight();
    Node *father = root->getFather();
    /*
     *if (father == nullptr)
     */
    if (leftOfRemoved == nullptr && rightOfRemoved == nullptr) {
        if (father->getLeft() == root)
            father->setLeft(nullptr);
        else
            father->setRight(nullptr);
        delete root;
    } else if (leftOfRemoved == nullptr || rightOfRemoved == nullptr) {
        if (leftOfRemoved == nullptr)
            father->setRight(rightOfRemoved);
        else //rightOfRemoved == nullptr
            father->setLeft(leftOfRemoved);
        delete toRemove;
    }

}



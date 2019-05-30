//
// Created by pawel on 12.04.2019.
//

#ifndef SDIA_LIST_H
#define SDIA_LIST_H

#include <iostream>
#include "Node.h"

using namespace std;

class List {
public:
    List();

    virtual ~List();

    void insertFront(int value);

    bool remove(int value);

    Node *search(int value);

    string printList();

protected:

private:
    Node *head;

};


#endif //SDIA_LIST_H

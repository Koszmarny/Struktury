//
// Created by pawel on 10.05.2019.
//

#ifndef SDIA_BST_H
#define SDIA_BST_H

using namespace std;

class BST {
private:
    Node* root;
public:
    BST();

    BST(Node* root);

    void print(unsigned method);

    void add(int v);

    Node* search(int v);

    bool remove(int v);

   // bool *remove(int v);


};


#endif //SDIA_BST_H

//
// Created by pawel on 30.05.2019.
//

#ifndef SDIA_PRIORITYQUEUE_H
#define SDIA_PRIORITYQUEUE_H
#include <iostream>
using namespace std;

class PriorityQueue {
private:
    double size;
    double[] elements;

public:
    PriorityQueue();
    PriorityQueue(double[] elements, double size);

    void pAttach(int value);
    void pDetach(int value);
    int pFront();
    bool increaseKey(int value, int newPriority);
    bool pIsEmpty();
    void printBT(string sp, string sn, int v)

};
int main(){

}


#endif //SDIA_PRIORITYQUEUE_H

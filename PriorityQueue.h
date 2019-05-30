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
    PriorityQueue(double[] *_elements, double size)

    void attach(int value);
    void detach(int value);
    int front();
    bool increaseKey(int value, int newPriority);
    bool isEmpty();

};
int main(){

}


#endif //SDIA_PRIORITYQUEUE_H

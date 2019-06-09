//
// Created by pawel on 30.05.2019.
//

#include "PriorityQueue.h"
#include "Queue.h"

PriorityQueue::PriorityQueue(){
    size=0;
    elements=new[](size);
}

PriorityQueue::PriorityQueue(double[]el){
    elements=el;
}

void PriorityQueue::pAttach(int value) {
    int i = n++;
    int j = (i - 1) / 2;
    while(i > 0 && T[j] < value)
    {
        T[i] = T[j];
        i = j;
        j = (i - 1) / 2;
    }
    T[i] = value;
}

void PriorityQueue::pDetach(int value) {
    Queue->detach(value)
}

int PriorityQueue::pFront() {
    cout<<
}

bool PriorityQueue::increaseKey(int value, int newPriority) {

}

bool PriorityQueue::pIsEmpty() {
    return this->isEmpty();
}
string cr,cl,cp;      // łańcuchy do znaków ramek
int T[15], n = 0;
void printBT(string sp, string sn, int v)
{
    string s;

    if(v < n)
    {
        s = sp;
        if(sn == cr) s[s.length() - 2] = ' ';
        printBT(s + cp, cr, 2 * v + 2);

        s = s.substr(0,sp.length()-2);

        cout << s << sn << T[v] << endl;

        s = sp;
        if(sn == cl) s[s.length() - 2] = ' ';
        printBT(s + cp, cl, 2 * v + 1);
    }
}
//
// Created by pawel on 06.06.2019.
//

#include <iostream>
#include "Graph.h"
#include "Queue.h"

using namespace std;

double Graph::wszerz(int start) {
    if (start <=ms.size) {
        for (int v; v <=ms.size;) {
            odwiedzony[v]=false;
        }
        Queue k;
        k.attach(start);
        int biezacy = k.front();
        odwiedzony[biezacy]= true;
        k.detach();
        for(int v; v <=ms.size){
            if(!odwiedzony[v] && ms[biezacy][v]){
                k.attach(v);
            }
        }
        for(int v; v <=ms.size){
            if(!odwiedzony[v]){
                wszerz(v);
            }
        }
    }
}
//
// Created by pawel on 12.04.2019.
//
using namespace std;

#include <iostream>
#include "Stack.h"

void push(Stack **s, int liczba) {
    Stack *news = new Stack;
    news->poprzedni = *s;
    news->l = liczba;
    *s = news;
}

void pop(Stack **s) {
    if ((*s)->poprzedni != NULL) {
        cout << (*s)->l << endl;
        Stack *news = *s;
        news = (*s)->poprzedni;
        *s = news;
    } else cout << "Pusty stos" << endl;
}

void isEmpty(Stack **s)
{
    if ((*s)->poprzedni == NULL)
        cout << "Stos jest pusty\n";
    else
        cout << "Stos nie jest pusty\n";
}

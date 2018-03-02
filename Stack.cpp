/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stack.cpp
 * Author: SALA4
 * 
 * Created on 28 de febrero de 2018, 03:54 PM
 */

#include "Stack.hpp"

template<class T>
Stack<T>::Stack() {
    top = NULL;
}

template<class T>
bool Stack<T>::isEmpty() {
    return top == NULL;
}

template<class T>
void Stack<T>::push(T info) {
    if (isEmpty()) {
        top = new Nodelist<T>(info);
    } else {
        Nodelist<T>* newNode = new Nodelist<T>(info);
        newNode->next = top;
        top = newNode;
    }
}

template<class T>
T Stack<T>::pop() {
    T aux=top->getInfo();
    Nodelist<T>* nodeDel=top;
    top=top->next;
    delete(nodeDel);
    return aux;
}

template<class T>
Stack<T>::~Stack() {
}


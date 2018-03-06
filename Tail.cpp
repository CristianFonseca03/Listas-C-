/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tail.cpp
 * Author: cristian
 * 
 * Created on 2 de marzo de 2018, 15:39
 */

#include "Tail.hpp"

template<class T>
Tail<T>::Tail() {
    head=NULL;
}

template<class T>
bool Tail<T>::isEmpity() {
    return head==NULL;
}

template<class T>
void Tail<T>::push(T info) {
    if(Tail().isEmpity()){
        head = new Nodelist<T>(info);
    }else{
        Nodelist<T>* aux = new Nodelist<T>(info) ;
        aux=head;
        while(aux->next !=NULL){
            aux=aux->next;    
        }
        Nodelist<T>* newNodo=new Nodelist<T>(info);
        aux->next=newNodo;
    }
    
}

template<class T>
T Tail<T>::pull() {
    T aux=head->getInfo();
    Nodelist<T>* nodeDel=head;
    head=head->next;
    delete(nodeDel);
    return aux;
}



template<class T>
Tail<T>::~Tail() {
}


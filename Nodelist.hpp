/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodelist.hpp
 * Author: SALA4
 *
 * Created on 28 de febrero de 2018, 03:30 PM
 */

#ifndef NODELIST_HPP
#define NODELIST_HPP
#include <cstdlib>

template<class T>class Stack;
template<class T>
class Nodelist {
    friend class Stack<T>;
public:
    Nodelist();
    Nodelist(T);
    T getInfo();
    virtual ~Nodelist();
private:
    T info;
    Nodelist* next;
};

template <class T>
Nodelist<T>::Nodelist(){
    next=NULL;
}

template<class T>
Nodelist<T>::Nodelist(T info){
    this->info=info;
    next=NULL;
}

template<class T>
T Nodelist<T>::getInfo(){
    return info;
}

template<class T>
Nodelist<T>::~Nodelist(){
}
#endif /* NODELIST_HPP */


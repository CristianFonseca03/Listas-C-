/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stack.hpp
 * Author: SALA4
 *
 * Created on 28 de febrero de 2018, 03:54 PM
 */

#ifndef STACK_HPP
#define STACK_HPP

#include "Nodelist.hpp"


template<class T>
class Stack {
public:
    Stack();
    bool isEmpty();
    T pop();
    void push(T);
    virtual ~Stack();
private:
    Nodelist<T>* top;
};

#endif /* STACK_HPP */


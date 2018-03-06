/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tail.hpp
 * Author: cristian
 *
 * Created on 2 de marzo de 2018, 15:39
 */

#ifndef TAIL_HPP
#define TAIL_HPP

#include "Nodelist.hpp"

template<class T>
class Tail {
public:
    Tail();
    bool isEmpity();
    void push(T);
    T pull();
    virtual ~Tail();
private:
    Nodelist<T>* head;

};

#endif /* TAIL_HPP */


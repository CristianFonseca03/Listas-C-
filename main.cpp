/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Object.cpp
 * Author: SALA4
 *
 * Created on 28 de febrero de 2018, 02:39 PM
 */

#include <cstdlib>
#include <iostream>
#include <stack>
#include <cstdio>
#include "Student.hpp"
#include "Nodelist.hpp"
#include "Stack.hpp"
#include "Stack.cpp"

using namespace std;

/*
 * 
 */
int main() {
    Stack<Student>* stack=new Stack<Student>();
    stack->push(Student("A1","Juan",3));
    stack->push(Student("A2","Andres",4));
    stack->push(Student("A3","Cristian",5));
    printf("%s",stack->isEmpty()?"Pila vacia\n":"Con elementos\n");
    Student t= stack->pop();
    cout<<t.toString()<<endl;
    printf("%s",stack->isEmpty()?"Pila vacia\n":"Con elementos\n");
    t= stack->pop();
    cout<<t.toString()<<endl;
    printf("%s",stack->isEmpty()?"Pila vacia\n":"Con elementos\n");
    t= stack->pop();
    cout<<t.toString()<<endl;
    printf("%s",stack->isEmpty()?"Pila vacia\n":"Con elementos\n");
}


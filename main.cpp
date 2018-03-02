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
#include "Student.hpp"
#include "Nodelist.hpp"

using namespace std;

/*
 * 
 */
int main() {
    Student con("M03","Consola 360",55);
    Nodelist<Student> node(con);
    //cout<<node.getInfo().toString()<<endl;
    
    Nodelist<int> i(30);
    cout<<i.getInfo()<<endl;
    return EXIT_SUCCESS;
}


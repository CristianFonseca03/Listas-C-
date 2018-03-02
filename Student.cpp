/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Student.cpp
 * Author: cristian
 * 
 * Created on 2 de marzo de 2018, 13:01
 */

#include "Student.hpp"
#include <sstream>

Student::Student() {
    key="";
    semester=0;
    name="";
    
}

Student::Student(std::string key, std::string name, int semester) {
    this->key=key;
    this->name=name;
    this->semester=semester;
}

std::string Student::getKey() {
    return key;
}

void Student::setKey(std::string key) {
    this->key=key;
}

std::string Student::getName() {
    return name;
}

void Student::setName(std::string name) {
    this->name=name;
}

void Student::setSemester(int semester) {
    this->semester=semester;
}

std::string Student::parseString(int semester) {
    std::string output;
    std::ostringstream aux;
    aux<<semester;
    output=aux.str();
    return output;
}

std::string Student::toString() {
    std::string parse;
    std::string output="";
    parse= parseString(semester);
    output="Estudiante[Key= "+key+" ,Nombre= "+name+" ,Semestre= "+parse+"]";
    return output;
}



Student::~Student() {
}


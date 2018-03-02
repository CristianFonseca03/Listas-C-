/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Student.hpp
 * Author: cristian
 *
 * Created on 2 de marzo de 2018, 13:01
 */

#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>

class Student {
public:
    Student();
    Student(std::string key,std::string name,int semester);
    void setKey(std::string);
    void setName(std::string);
    void setSemester(int);
    std::string getKey();
    std::string getName();
    int getSemester();
    std::string toString();
    virtual ~Student();
private:
    std::string key;
    std::string name;
    int semester;
    std::string parseString(int);
};

#endif /* STUDENT_HPP */


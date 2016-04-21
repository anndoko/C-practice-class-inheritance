//
//  main.cpp
//  ClassInheritance
//
//  Created by Yu-An Ko on 2016/4/21.
//  Copyright © 2016年 Yu-An Ko. All rights reserved.
//

#include <iostream>

using namespace std;

class Person {
    int ssn;
    int age;
};

class Student : public Person {
    int sid;
    int gpa;
};

int main() {
    
    
    cout << "Size of Person: " <<sizeof(Person) << endl;
    // 2 integers (ssn, age)
    
    cout << "Size of Student: " << sizeof(Student) << endl;
    // 4 integers (int ssn, age, sid, gpa)

    return 0;
}
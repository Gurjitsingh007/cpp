#include<iostream>
using namespace std;


class Person{  //person class
    public:
string name;
Person(){

}
~Person(){

}


};

// student class
class student:public Person{
    public:
    string course;
    double marks;
    int year;


    void display(){
    
}



};

//employee
class employee:public Person{
    public:
    string department;
    double salary;

};


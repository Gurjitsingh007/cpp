#include<iostream>
using namespace std;
 class person{
    public:
    string name;

    void setName(string name){
        this->name=name;
    }

    virtual void display(){
        cout<<"Name is : "<<name<<endl;
    }
 };

 class student:public person{
    public:
    string course;
    double marks;
    int year;

    void Course(string course){
        this->course=course;

    }
    void Marks(double marks){
        this->marks=marks;

    }
    void Year(int year){
        this->year=year;
    }

    void display()override{
        cout<<"name is : "<<name<<endl;
        cout<<"course is : "<<course<<endl;
        cout<<"marks is : "<<marks<<endl;
        cout<<"year is : "<<year<<endl;
        cout<<endl;
    }


 };


 //employee
 class employee:public person{
    public:
    string dept;
    double salary;

    void Dept(string dpt){
        this->dept=dpt;

    }
    void setSalary(double salary){
        this->salary=salary;
    }
    void display()override{
        cout<<"name is : "<<name<<endl;
        cout<<"department is : "<<dept<<endl;
        cout<<"salary is : "<<salary<<endl;

    }

 };

 int main(){
    student s;
    s.setName("aman");
    s.Course("CS");
    s.Marks(505);
    s.Year(2025);

    employee e;
    e.setName("ali");
    e.Dept("IT");
    e.setSalary(25000);



s.display();
e.display();





    return 0;
 }
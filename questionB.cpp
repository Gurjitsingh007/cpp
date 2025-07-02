// c
//  #include<iostream>
//  using namespace std;
//  void Ascii(char ch){
//      int no=(int) ch; //typecast
//      cout<< no;

// }
// int main(){
//     char ch;
//     cout<<"enter character :";
//     cin>>ch;
//     cout<<endl;
//     cout<<"ascii value of "<<ch<<" is : ";
//     Ascii(ch);
//     return 0;
// }

/// E
// #include<iostream>
// using namespace std;
//  void swap(int *a,int *b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;

//  }

//  int main(){
//     int a,b;
//     a=20;
//     b=30;
//     swap(&a,&b);
//     cout<<"no a is: "<<a<<endl;
//     cout<<"no b is: "<<b;
//  }
////////f
// #include<iostream>

// using namespace std;

// class four_seater{

// public:

// void Property(){
//     cout << "It has space for four persons" << endl;
// }
// };
// class four_wheeler{
//     public:

//     void Property(){
//         cout<<"it runs on four tyres"<<endl;
//     }
// };

// class Car:public four_seater,public four_wheeler{};

// int main(){
//     Car C1;
//     C1.four_seater::Property(); //error one
//     C1.four_wheeler::Property();//error 2
//     return 0;
// }// it may have diamond problem

// #include<iostream>
// using namespace std;
// template<class T1, class T2> //E1= T->t
// class Person{
// T1 m_t1;
// T2 m_t2;

// public:
// Person (T1 t1, T2 t2)
// {
//     m_t1=t1;
//     m_t2=t2;

//     cout<<m_t1<<" "<<m_t2<<endl;
// }

// // Person (T3 t1, T4 t2) // T3 and T4 dosn't defined
// // {
// //     m_t1=t1;
// //     m_t2=t2;

// //     cout<<m_t1<<" "<<m_t2<<endl;
// // }
// };

// int main(){ //main must be int
//     Person<int,float>obj1(1,2.34);
//     Person<float,char>obj2(2.13,'r');
//     return 0;

// }

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
// const int size =100;
// char buffer[size];
// ifstream in ("pl.cpp");
// ofstream out("p2.cpp");
// while(in.get(buffer))
// {
// in.get();
// cout<<buffer<<endl;
// cout<<buffer<<endl;
// }
// in.close();
// out.close();
// }

// #include<iostream>

// using namespace std;

// int func(int a, int* b, int& c)

// {

// int temp = a + *b + c;

// a += 10;

// *b += 20;

// c += 30;

// return temp;
// }
// int main(){

// int x = 1, y=2, z=3;

// cout << x << ", " << y << "," << z << "\n";

// cout << func(x, &y,z);

// cout << "\n" << x << ", " << y << ", " << z;

// return 0;

// }

// #include<iostream>
// using namespace std;

// int area(int a){
//     cout<<"area of square :";
//     int area=a*a;
//     return area;
// }

// double area(float r){
//     cout<<"area of circle : ";
//     double area=3.14*r*r;
//     return area;
// }
// int main(){
//     cout<<"1.area of square\n";
//     cout<<"2.area of circle\n";
//     int n;
//     cin>>n;
//     switch(n){
//         case 1:
//             int side;
//             cout<<"enter side of square(integral) :";
//             cin>>side;
//             cout<<area(side)<<endl;
//             break;

//         case 2:
//             float r;
//             cout<<"enter radius of circle(float):";
//             cin>>r;
//             cout<<area(r)<<endl;
//             break;

//         default:
//         cout<<"invalid input";
//         break;

//   return 0;

// }
// }

// #include<iostream>
// using namespace std;
//  void printPattern(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }cout<<endl;
//     }
//  }
//  int main(){
//     printPattern(5);
//     return 0;
//  }

// #include<iostream>
// using namespace std;
// class Complex{
//     private:
//     int n;
//     public:

//     Complex(){

//     }
//     Complex(int n){
//         this->n=n;
//     }
// }

// #include<iostream>
// using namespace std;
// void concatenate(int a[],int b[],int n,int m){

//     for(int i=0;i<m;i++){
//         a[n+i]=b[i];

//     }
//     for(int i=0;i<(m+n);i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<"end\n";
// }
// int main(){
//     int a[3]={1,2,3};
//     int n=3;
//     int b[2]={4,5};
//     int m=2;

//     concatenate(a,b,n,m);
//     cout<<a;
// }

// #include<iostream>
// using namespace std;
// class Base{
//     public:
//     virtual void show(){
//         cout<<"inside base B1";
//         cout<<endl;
//     }

// };
// class Derived:public Base{
//     public:
//     void show(){
//         cout<<"inside derived";
//         cout<<endl;
//     }

// };
// int main(){
//     Base* p;
//     Derived d;
//     p=&d;
//    p->show();

// return 0;
// }

// #include<iostream>
// #include<math.h>
// using namespace std;
// int fact(int f){
//     int fact=1;
//     for(int i=1;i<=f;i++){
//         fact*=i;
//     }return fact;
// }
// double sum(int x,int n){
//     double sum=0;
//     int count=0;

//         int i=1;
//         int j=1;
//         while(count<n){

//             sum+=(pow(-1,(j+1))*(pow(x,i)/fact(i)));
//             count++;
//             j++;
//             i+=2;

//         }return sum;

// }
// int main(){
//     double res=sum(1,3);
//     cout<<res;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char ch[]="hello world";
//     int n;
//     int countv=0,countalp=0;
//     for(int i=0;ch[i];i++){
//         if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'){
//             countv+=1;
//         }
//         else if(ch[i]==' '){
//             continue;
//         }else{
//             countalp++;
//         }
//     }
// cout<<"1.volwel \n 2.consonents\n";
// cin>>n;
//         switch(n){
//             case 1: cout<<"vowels : "<<countv;
//             break;

//             case 2: cout<<"consonents : "<<countalp;
//             break;
//         }

// return 0;
//     }

// #include <iostream>
// using namespace std;
// class Bankaccount
// {
// public:
//     string name;
//     int accno;
//     double balance;

//     Bankaccount()
//     {
//     }
//     Bankaccount(string name, int accno, double balance)
//     {
//         this->name = name;
//         this->accno = accno;
//         this->balance = balance;
//     }

//     void input()
//     {
//      cout<<"Enter name : ";
//      cin>>name;
//      cout<<"\nEnter account no : ";
//      cin>>accno;
//      cout<<"\nEnter balance : ";
//      cin>>balance;


    
//     }

//     void withdraw(double x)
//     {
//         if ((balance - x) >= 500)
//         {
//             balance -= x;
//             cout << "withdraw succesfully, balance is :"<<balance<<endl;
//         }
//         else
//         {
//             cout << "unable to debit, the minimum balance should be 500 \n";
//         }
//     }

//     void deposit(double x)
//     {
//         balance += x;
//         cout << "deposite succesfully, balance is :"<<balance<<endl;
//     }

//     void display()
//     {
//         cout << "Name is : " << name << endl;
//         cout << "acount no is : " << accno << endl;
//         cout << "balance is : " << balance << endl;
//     }
// };

// int main()
// { Bankaccount ac1;
//     cout<<"enter details of acount \n";
//     ac1.input();

//     ac1.deposit(3000);
//     ac1.withdraw(500);
//     ac1.withdraw(2100);
//     ac1.display();


// }

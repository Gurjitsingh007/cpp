#include<iostream>
#include<fstream>
using namespace std;

//  void sort(int a[], int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(a[j]>a[j+1]){
//                 int temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;

//             }
//     }
//     }
    

//  }
//  int main(){
//     int arr[5]={34,56,71,1,2};
//     int n=5;
//     sort(arr,n);

//    for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//  }

// void f_sum(int x[],const double y,char &chi){

// }

// void fx(double*A, int B[][3]){

// }

// float B[]={3.4,5.6,7.8,9.1};

int main(){
ifstream fin1;
ofstream fout;
fin1.open("A1.txt"); //asuming A1.txt alraeady
string c;
fout.open("A2.txt");
int count;
while(fin1>>c){
fout<<c<<" ";
count++;

}cout<<count;
fout.close();
fin1.close();

return 0;


}
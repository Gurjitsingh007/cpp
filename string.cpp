#include<iostream>
using namespace std;
int main(){
  cout<<
" 1. Show address of each character in string\n 2. Concatenate two strings.\n 3. Compare two strings \n 4. Calculate length of the string (use pointers) \n 5. Convert all lowercase characters to uppercase \n 6. Reverse the string \n 7. Insert a string in another string at a user specified position";
int n;
cout<<"\n Enter choice :";
cin>>n;
char s1[100];
char s2[100];
switch(n){
    case 1:{
    int i=0;
    cout<<"enter string :";
    while(s1[i]!='\0'){
        cin>>s1[i];
        ++i;
    }
    
     while(s1[i]!='\0'){
        cout<<s1[i];
        i++;
    }

}   
    

}





}



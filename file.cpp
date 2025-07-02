#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// int main() {
//     ifstream inFile("A1.txt");      // Open source file
//     ofstream outFile("A2.txt");     // Open destination file

//     if (!inFile || !outFile) {
//         cout << "Error opening file!" << endl;
//         return 1;
//     }

//     string word;
//     int wordCount = 0;

//     while (inFile >> word) {
//         outFile << word << " ";     // Write word followed by space
//         wordCount++;
//     }

//     cout << "Number of words copied: " << wordCount << endl;

//     inFile.close();
//     outFile.close();

//     return 0;
// }

int main(){
    ifstream in("A1.txt");
    ofstream out("out.dat");

    if(!in||!out){
        cout<<"file oening error ";
        return 1;
    }

    string word;

    while(in>>word){
        out<<word<<" ";
    }
    in.close();
    out.close();
ifstream n;
n.open("out.dat");

string w;
while(n>>w){
    cout<<w<<" ";
}


    return 0;


}
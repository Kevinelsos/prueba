#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

int main(){
     ofstream fout;

     char str[256];
     cout<<"ingrese caracteres";
     cin>>str;

     fout.open("archivo.txt");
     fout << str;
     fout.close();

    return 0;
}
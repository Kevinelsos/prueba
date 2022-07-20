#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

int main(){
     ifstream fout;

     char str[256];

     fout.open("archivo.txt");
     if(fout.is_open()) cout<<"abierto"<<endl;

    while(fout.good()){
     fout.getline(str,256);
     cout<<str<<endl;
    }

    return 0;
}

//sososos
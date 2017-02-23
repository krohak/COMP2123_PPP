#include <iostream>
using namespace std;

int main(){

    string b;
    string c;

    getline(cin,b);

    while (b.length() !=0){
    int i = 0;
    while (i != b.length()){

        if (( (b[i] >= '0' ) && (b[i] <= '9') ) || ( (b[i] >= 'a' ) && (b[i] <= 'z') ) ||( (b[i] >= 'A' ) && (b[i] <= 'Z') ) ){


           c = c + b[i];




        }


    i++;



    }

    getline(cin,b);

    }


    cout << c;




    }

#include <iostream>

using namespace std;

int main(){

    string c;
    string b;

    getline(cin,c);

    int x = c.length();
    bool z = 1;


    for (int i=0; i<x; i++){

      if(( (c[i] >= 'a' ) && (c[i] <= 'z') ) ||( (c[i] >= 'A' ) && (c[i] <= 'Z') ) ){

        b = b+c[i];


      }
}


x = b.length();
int n = x/2;



    for (int i=0; i<n; i++) {


        if ( (b[i] != b[x-i-1]) && (b[i] != (b[x-i-1] - 'A' + 'a')) && (b[i] != (b[x-i-1] - 'a' + 'A')) ){


            z = 0;


        }

  }

    if (z==1){cout << "Yes";}

        else{cout << "No";}




    return 0;


    }

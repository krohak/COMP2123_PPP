#include <iostream>

using namespace std;


int main(){


      string c;
      string b;

      getline(cin,c);

      int x = c.length();


      for (int i=0; i<x; i++){

        int start = i;
        int stop;

        while((c[i]!=' ' ) && (i!=x)){
          i++;
          stop = i-1;

        }

        //cout<<stop;
        if (start!=stop){
        b = b + c[start];}

        for (int j = stop-1; j>start; j--){


          b = b + c[j];

        }

        b = b + c[stop] + ' ';

      //  i = stop;



      }


      cout << b;


    return 0;


}

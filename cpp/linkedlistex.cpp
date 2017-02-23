#include <iostream>

using namespace std;


int main(){

    int *p1;
    int *p2;
    int x = 25;
    int y = 13;

    p2 = &y;

    p1 = p2;
    x = *p1;

    cout << *p1 <<endl;
    cout << *p2 <<endl;
    cout << x<<endl;
    cout <<y<<endl;



    return 0;

}

#include <iostream>
using namespace std;

int main() {
    
    double a,sum;
    int count = 0;
    
     cin >> a;
     
    
    while (a!=-1){
        
        count++;
        
        sum = (sum +a);
        
        cin >> a;
        
    }
    
    cout << sum/count;
    
    
    
    
    }
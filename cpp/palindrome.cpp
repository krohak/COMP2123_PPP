#include<iostream>
using namespace std;

bool is_palindrome(int input[], int numOfSlots);

int main(){
    int n;
    cin >> n;
    int *input = new int[n]; // A dynamic array with n slots
    for (int i = 0 ; i < n ; i++){
        cin >> input[i];
    }

    if (is_palindrome(input,n) == true ){
        cout << "This is a palindrome.";
    }else{
        cout << "This is NOT a palindrome.";
    }
    return 0;
}

// Implement the is_palindrome() function here...

bool is_palindrome(int input[], int numOfSlots){
    
    
    for (int i=0; i<numOfSlots/2; i++) {
        
        if (input[i] != input[numOfSlots-i-1]){
            
            return 0;
            
            
        }
        
        
        
    }
    
    
    return 1;
    
    
}
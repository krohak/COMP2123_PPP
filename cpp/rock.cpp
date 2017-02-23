#include <iostream>

using namespace std;


int check_win (string moveA, string moveB) {

    if (moveA == moveB){

        return 2;

    }

    else if ((moveA == "rock" && moveB == "scissors") || (moveA == "scissors" && moveB == "paper") || (moveA == "paper" && moveB == "rock")) {


        return 1;

    }

    

    else {return 0;}
}


int main (){

    int n;

    cin >> n;

    string moves_A[n];
    string moves_B[n];

    for (int i =0; i<n; i++){

        cin >> moves_A[i];

    }

    int A_score =0, B_score =0;

    for (int i =0; i<n; i++){

        cin >> moves_B[i];

        int z = check_win(moves_A[i],moves_B[i]);

        if (z==1){A_score++;}
        else if(z==0){B_score++;}

    }



    cout << A_score << " " << B_score << endl;




    return 0;


    }

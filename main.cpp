#include <iostream>
#include <vector>
#include <iomanip>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
using namespace std;



void PayTable();

int main()
{


    int bet;
    int payout;
    double TotalWinnings = 0;

    srand(time(0));

    vector<int> reel(11);
    reel[0] = 1;
    reel[1] = 1;
    reel[2] = 1;
    reel[3] = 1;
    reel[4] = 2;
    reel[5] = 2;
    reel[6] = 2;
    reel[7] = 2;
    reel[8] = 5;
    reel[9] = 5;
    reel[10] = 7;


    int a = rand() % 11;
    int b = rand() % 11;
    int c = rand() % 11;
    int d = rand() % 11;
    int e = rand() % 11;
    int f = rand() % 11;
    int g = rand() % 11;
    int h = rand() % 11;
    int i = rand() % 11;

    PayTable();

    cout << "How many credits would you like to bet? 1, 2, or 3? ";

        while(!(cin >> bet)) {  //check user input for non integer.
            cout << "\nInvalid bet. Please enter a number. ";
            cin.clear();
            cin.ignore(50, '\n');
              }
        while(!(bet == 1 || bet == 2 || bet == 3)){ //check user input for valid integer.
            cout << "\nInvalid bet amount. Please enter 1, 2, or 3. ";
            while(!(cin >> bet)){
                  cout <<"\nInvalid bet. Please enter a number. ";
                  cin.clear();
                  cin.ignore(50, '\n');
    }
        }
    cout << "\n\nPress enter when you're ready to play. " << endl;
    cin.sync();
    cin.get();

    //Print out slot outcome.
    cout <<"+-------+" << endl;
    cout <<"|" << reel[a] << setw(3) << reel[b] << setw(3) << reel[c] << "|" << endl;
    cout <<"|" << reel[d] << setw(3) << reel[e] << setw(3) << reel[f] << "|" << endl;
    cout <<"|" << reel[g] << setw(3) << reel[h] << setw(3) << reel[i] << "|" << endl;
    cout <<"+-------+" << endl;





    if(reel[d] == reel[e] && reel[e] == reel[f])     {

         if(reel[d] == 7 && reel[e] == 7 && reel[f] == 7)    {

            cout << "\n\nCongrats you got 3 sevens! ";
            payout = bet * 20;
            cout << "\nYou won " << payout << " credits!" << endl;


        }

        else if(reel[d] == 1 && reel[e] == 1 && reel[f] == 1)    {

            cout << "\n\nCongrats you got 3 ones! ";
            payout = bet * 5;
            cout << "\nYou won " << payout << " credits!" << endl;

        }

        else if(reel[d] == 2 && reel[e] == 2 && reel[f] == 2)    {

            cout << "\n\nCongrats you got 3 twos! ";
            payout = bet * 5;
            cout << "\nYou won " << payout << " credits!" << endl;

        }

        else if(reel[d] == 5 && reel[e] == 5 && reel[f] == 5)    {

            cout << "\n\nCongrats you got 3 fives! ";
            payout = bet * 10;
            cout << "\nYou won " << payout << " credits!" << endl;

        }
    }

    else if((reel[d] == 7 && reel[e] == 7 && reel[f] != 7) || (reel[d] == 7 && reel[e] != 7 && reel[f] == 7) || (reel[d] != 7 && reel[e] == 7 && reel[f] == 7))  {

        cout << "\n\nCongrats you got 2 sevens! ";
        payout = bet * 7;
        cout << "\nYou won " << payout << " credits!" << endl;

    }

    else if((reel[d] == 7 && reel[e] != 7 && reel[f] != 7) || (reel[d] != 7 && reel[e] == 7 && reel[f] != 7) || (reel[d] != 7 && reel[e] != 7 && reel[f] == 7)) {

        cout << "\n\nCongrats you got 1 seven! ";
        payout = bet * 1;
        cout << "\nYou won " << payout << " credits!" << endl;

    }

    else {

        cout << "\n\nSorry you lose. " << endl;
        payout = bet * 0;

    }




}


void PayTable() {

    cout << "     Welcome to my Slot Game! "      << endl << endl;
    cout <<"+---------------------------------+" << endl;
    cout <<"|          Payout Table           |" << endl;
    cout <<"|      | 1 Cr. | 2 Cr. | 3 Cr.|   |" << endl;
    cout <<"|1,1,1     5      10      15      |" << endl;
    cout <<"|2,2,2     5      10      15      |" << endl;
    cout <<"|5,5,5    10      20      30      |" << endl;
    cout <<"|7,7,7    20      40      60      |" << endl;
    cout <<"|7,7       7      14      21      |" << endl;
    cout <<"|7         5      10      15      |" << endl;
    cout <<"+---------------------------------+" << endl << endl;
}

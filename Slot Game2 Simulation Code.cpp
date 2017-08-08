#include <iostream>
#include <vector>
#include <iomanip>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int bet = 1;
int triple7 = 0;
int triple1 = 0;
int triple2 = 0;
int triple5 = 0;
int double7 = 0;
int single7 = 0;
int payout;
double TotalWinnings = 0;


int main()
{




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

    for(int x = 1; x <= 10000000; x++)   {

    int a = rand() % 11;
    int b = rand() % 11;
    int c = rand() % 11;
    int d = rand() % 11;
    int e = rand() % 11;
    int f = rand() % 11;
    int g = rand() % 11;
    int h = rand() % 11;
    int i = rand() % 11;

   /* cout << "How many credits would you like to bet? 1, 2, or 3? ";

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
        } */
    //cout << "Press enter when you're ready to play. " << endl;
    //cin.sync();
    //cin.get();



   /* cout << reel[a] << setw(3) << reel[b] << setw(3) << reel[c] << endl;
    cout << reel[d] << setw(3) << reel[e] << setw(3) << reel[f] << endl;
    cout << reel[g] << setw(3) << reel[h] << setw(3) << reel[i] << endl;

*/




    if(reel[d] == reel[e] && reel[e] == reel[f])     {

         if(reel[d] == 7 && reel[e] == 7 && reel[f] == 7)    {

          //  cout << "\n\nCongrats you got 3 sevens! ";
            triple7 += 1;
            payout = bet * 20;


        }

        else if(reel[d] == 1 && reel[e] == 1 && reel[f] == 1)    {

           // cout << "\n\nCongrats you got 3 ones! ";
            triple1 += 1;
            payout = bet * 5;

        }

        else if(reel[d] == 2 && reel[e] == 2 && reel[f] == 2)    {

           // cout << "\n\nCongrats you got 3 twos! ";
            triple2 += 1;
            payout = bet * 5;

        }

        else if(reel[d] == 5 && reel[e] == 5 && reel[f] == 5)    {

           // cout << "\n\nCongrats you got 3 fives! ";
            triple5 += 1;
            payout = bet * 10;

        }
    }

    else if((reel[d] == 7 && reel[e] == 7 && reel[f] != 7) || (reel[d] == 7 && reel[e] != 7 && reel[f] == 7) || (reel[d] != 7 && reel[e] == 7 && reel[f] == 7))  {

        //cout << "\n\nCongrats you got 2 sevens! ";
        double7 += 1;
        payout = bet * 7;

    }

    else if((reel[d] == 7 && reel[e] != 7 && reel[f] != 7) || (reel[d] != 7 && reel[e] == 7 && reel[f] != 7) || (reel[d] != 7 && reel[e] != 7 && reel[f] == 7)) {

       // cout << "\n\nCongrats you got 1 seven! ";
        single7 += 1;
        payout = bet * 1;

    }

    else {

       // cout << "\n\nSorry you lose. ";
        payout = bet * 0;

    }
    cout <<"\n\n";
    TotalWinnings = TotalWinnings + payout;





    }


    cout << "\n\nTotalWinnings = " << TotalWinnings << ". Payback percentage is " << TotalWinnings/10000000;
    cout << "\n\n3 ones: " << triple1 << "\n3 twos: " << triple2 << "\n3 fives :" << triple5 << "\n3 sevens: " << triple7 << "\n2 sevens: " << double7 << "\n1 seven: " << single7 << endl;

   }






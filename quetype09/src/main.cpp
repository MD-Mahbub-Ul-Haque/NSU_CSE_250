#include <iostream>
#include <algorithm>
#include "quetype.h"
#include "quetype.cpp"
using namespace std;

int main()
{
    QueType<int> total, numOfCoins;
    int  n;
    cin >> n;
    int coinValue[n];
    for(int i=0; i<n; i++){
        cin >> coinValue[i];
    }
    int amountOfMoneyToMake;
    cin >> amountOfMoneyToMake;

    int value = 0, coins = 0;
    while(value != amountOfMoneyToMake){
        for(int i=0; i<n; i++){
            total.Enqueue(value + coinValue[i]);
            numOfCoins.Enqueue(coins + 1);
        }
        total.Dequeue(value);
        numOfCoins.Dequeue(coins);
    }
    cout << coins << endl;
    return 0;
}

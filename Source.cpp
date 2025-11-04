/*
* File: P9-3
* Author: Anna Keeler
* Date: 10/30/2025
*
* Description: Lab 9.3
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;


//prototypes
 
void displayRun(int values[], int size);

int main(void) {
    const int SIZE = 20;
    int values[SIZE];
    srand(time(0));
    for (int i = 0; i < SIZE; i++) {
        values[i] = rand() % 6 + 1;
    }
    displayRun(values, SIZE);
        

   




    return 0;

}


void displayRun(int values[], int size) {
    bool isInRun = false;
    for (int i = 0; i < size; i++) {
        if (values[i] == values[i+1]&& isInRun == false) {
                cout << "(";
                isInRun = true;
        }
        cout << values[i];
        if (values[i] != values[i + 1] && isInRun == true) {
            isInRun = false;
            cout << ")";
        }
        cout << " ";
    }
    return;
}



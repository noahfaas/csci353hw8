
#include <iostream>
#include "knapsack.h"
using namespace std;

int main() {
    int items1[3][2] = {{2,4},{3,5},{4,7}};
    cout << "Test 1: knapsack, T = 6" << endl;
    cout << "Items: (2,4) (3,5) (4,7)" << endl;
    cout << "Expected value: 11" << endl;
    int r1 = knapsack(items1,3,6);
    cout << "Returned value: " << r1 << endl << endl;

    int items2[4][2] = {{2,4},{3,5},{4,7},{5,10}};
    cout << "Test 2: knapsack, T = 6" << endl;
    cout << "Items: (2,4) (3,5) (4,7) (5,10)" << endl;
    cout << "Expected value: 11" << endl;
    int r2 = knapsack(items2,4,6);
    cout << "Returned value: " << r2 << endl << endl;

    int items3[2][2] = {{1,1},{10,20}};
    cout << "Test 3: knapsack, T = 10" << endl;
    cout << "Items: (1,1) (10,20)" << endl;
    cout << "Expected value: 20" << endl;
    int r3 = knapsack(items3,2,10);
    cout << "Returned value: " << r3 << endl << endl;

    int items4[3][2] = {{3,6},{4,9},{5,12}};
    cout << "Test 4: knapsack, T = 9" << endl;
    cout << "Items: (3,6) (4,9) (5,12)" << endl;
    cout << "Expected value: 21" << endl;
    int r4 = knapsack(items4,3,9);
    cout << "Returned value: " << r4 << endl << endl;

    int items5[3][2] = {{5,10},{6,12},{7,14}};
    cout << "Test 5: knapsack, T = 11" << endl;
    cout << "Items: (5,10) (6,12) (7,14)" << endl;
    cout << "Expected value: 22" << endl;
    int r5 = knapsack(items5,3,11);
    cout << "Returned value: " << r5 << endl << endl;

    return 0;
}

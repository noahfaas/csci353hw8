
#ifndef KNAPSACK_H
#define KNAPSACK_H

#include <iostream>

int knapsack(int items[][2], int n, int T);
void find_items(int **table, int n, int T, int items[][2]);

int knapsack(int items[][2], int n, int T) {
    int **table = new int*[n + 1];
    for (int i = 0; i <= n; i++) {
        table[i] = new int[T + 1];
    }
    for (int w = 0; w <= T; w++) {
        table[0][w] = 0;
    }
    for (int i = 1; i <= n; i++) {
        for (int w = 0; w <= T; w++) {
            if (items[i - 1][0] > w) {
                table[i][w] = table[i - 1][w];
            } else {
                int a = table[i - 1][w];
                int b = items[i - 1][1] + table[i - 1][w - items[i - 1][0]];
                if (a > b) {
                    table[i][w] = a;
                } else {
                    table[i][w] = b;
                }
            }
        }
    }
    std::cout << "Items chosen: ";
    find_items(table, n, T, items);
    int result = table[n][T];
    for (int i = 0; i <= n; i++) {
        delete[] table[i];
    }
    delete[] table;
    return result;
}

void find_items(int **table, int n, int T, int items[][2]) {
    int w = T;
    for (int i = n; i > 0; i--) {
        if (table[i][w] != table[i - 1][w]) {
            std::cout << i << " ";
            w -= items[i - 1][0];
        }
    }
    std::cout << std::endl;
}

#endif

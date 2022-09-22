//
// Created by jhb on 2022/9/22.
//
#include <algorithm>
#include <stdio.h>
#include <iostream>

using namespace std;

int n, m, map[11][11], f[11][11][11][11];

int main() {
    int i, j, k, l;
    scanf("%d", &n);
    int a, b, c;
    while (1) {
        scanf("%d%d%d", &a, &b, &c);
        if (!a && !b && !c)
            break;
        map[a][b] = c;
    }
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; ++j)
            for (k = 1; k <= n; ++k) {
                for (l = 1; l <= n; l++) {
                    f[i][j][k][l] = max(max(f[i - 1][j][k - 1][l], f[i - 1][j][k][l - 1]),
                                        max(f[i][j - 1][k - 1][l], f[i][j - 1][k][l - 1])) + map[i][j];
                    if (i != k && j != l)
                        f[i][j][k][l] += map[k][l];

                }

            }
    cout<<f[n][n][n][n];
}
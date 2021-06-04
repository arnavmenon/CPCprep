#include <bits/stdc++.h>
#include <vector>
using namespace std;

void booleanMatrix(int mat[R][C])
{
    bool row0 = false;
    bool col0 = false;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {

            if (i == 0 && mat[i][j] == 1)
                row0 = true;
 
            if (j == 0 && mat[i][j] == 1)
                col0 = true;
 
            if (mat[i][j] == 1) {
                mat[0][j] = 1;
                mat[i][0] = 1;
            }
        }
    }


    for (int i = 1; i < R; i++) {
        for (int j = 1; j < C; j++) {
            if (mat[0][j] == 1 || mat[i][0] == 1) {
                mat[i][j] = 1;
            }
        }
    }
 
    if (row0 == true) {
        for (int i = 0; i < C; i++) {
            mat[0][i] = 1;
        }
    }
 
    if (col0 == true) {
        for (int i = 0; i < R; i++) {
            mat[i][0] = 1;
        }
    }
}
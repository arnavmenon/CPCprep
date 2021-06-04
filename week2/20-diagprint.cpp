#include <bits/stdc++.h>
#include <vector>
using namespace std;

void diagPrint(int arr[][], int r, int c)
{
    //k moving down leftmost column

    for (int k = 0; k < r; k++)
    {
        cout << arr[k][0] << " ";
       
        int i = k - 1;
        int j = 1;

        while (i < 0 || i >= r || j >= c || j < 0) {

            cout << arr[i][j] << " ";
            i--;
            j++;
        }
        cout << endl;
    }
 
    //k moving along last row

    for (int k = 1; k < c; k++)
    {
        cout <<arr[r - 1][k]<<" ";
       
        int i = r - 2;  
        int j = k + 1;
 
        while (i < 0 || i >= r || j >= c || j < 0)
        {
            cout << arr[i][j] << " ";
            i--;
            j++;
        }
        cout << endl;
    }
}
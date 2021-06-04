#include <bits/stdc++.h>
#include <vector>
using namespace std;

void printLeaders(int arr[], int size)
{
    int right_max =  arr[size-1];
 
    cout << right_max << " ";
     
    for (int i = size-2; i >= 0; i--)
    {
        if (right_max <= arr[i])
        {          
            right_max = arr[i];
            cout << right_max << " ";
        }
    }   
}
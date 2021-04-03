#include <bits/stdc++.h>
#include <vector>
using namespace std;

int find3Numbers(int arr[], int n)  //similar to commented method in 2
{

    int max = n - 1, min = 0, i;

    int smaller[n];
 
    smaller[0] = -1;

    for (i = 1; i < n; i++) {
        if (arr[i] <= arr[min]) {
            min = i;
            smaller[i] = -1;
        }
        else
            smaller[i] = min;
    }
 

    int greater[n];
 
    greater[n - 1] = -1;

    for (i = n - 2; i >= 0; i--) {

        if (arr[i] >= arr[max]) {
            max = i;
            greater[i] = -1;
        }
        else
            greater[i] = max;
    }

    for (i = 0; i < n; i++) {
        if (smaller[i] != -1 && greater[i] != -1) {
            return 1;
        }
    }
  
    return 0;
}
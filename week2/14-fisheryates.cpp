#include <bits/stdc++.h>
#include <vector>
#include <time.h> 
using namespace std;


void swap (int *x, int *y) 
{ 
    int t = *x; 
    *x = *y; 
    *y = t; 
} 

void fisheryates(){

    srand (time(NULL)); 

    for (int i = n - 1; i > 0; i--) 
    { 
        int j = rand() % (i + 1); 
        swap(&arr[i], &arr[j]); 
    } 
}

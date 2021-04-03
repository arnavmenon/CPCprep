#include <bits/stdc++.h>
#include <vector>
using namespace std;

void dutchflag(int a[], int n)
{
    int low = 0,  mid = 0, high = n - 1;     

    while (mid <= high) {
        switch (a[mid]) {
    
        case 0:
            swap(a[low++], a[mid++]);
            break;
    
        case 1:
            mid++;
            break;
    
        case 2:
            swap(a[mid], a[high--]);
            break;
        }
    }
}
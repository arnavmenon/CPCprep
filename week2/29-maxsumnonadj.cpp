#include <bits/stdc++.h>
#include <vector>
using namespace std;

int maxsumnonadj(int arr[], int n)
{
  int incl = arr[0];
  int excl = 0,temp;
  
  for (int i = 1; i < n; i++)
  {

     temp = (incl > excl)? incl: excl;
  
     incl=excl+arr[i];
     excl=temp;
  }
  
   return ((incl > excl)? incl : excl);
}
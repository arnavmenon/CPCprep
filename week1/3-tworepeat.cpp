#include <bits/stdc++.h>
#include <vector>
using namespace std;

void twoRep(int arr[], int n)
{
	int op = arr[0]; 
	int rightmost1,i; 
	
		
	for(i = 1; i < n; i++)
		op ^= arr[i];

	for(i = 1; i <= n-2; i++)
		op ^= i;
	
	rightmost1 = op &~ (op-1);
    int a = 0, b = 0;

	for(i=0; i < n; i++)
	{
		if(arr[i] & rightmost1)
		    a = a ^ arr[i]; 
		else
		    b = b ^ arr[i];
	}

	for(i=1; i<=n-2; i++)
	{
		if(i & rightmost1)
		    a = a ^ i;
		else
		    b = b ^ i; 
	}
		
	cout<<"\n"<<a<<" "<<b<<"\n";
}

int main()
{
	int arr[] = {1,1,2,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	twoRep(arr, n);
	return 0;
}

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int m_min;
int m_max;

void minmax(int arr[], int n)
{
	int i;
	
	if (n%2 == 0)
	{
		if (arr[0] > arr[1])	
		{
			m_max = arr[0];
			m_min = arr[1];
		}

		else{
			m_min = arr[0];
			m_max = arr[1];
		}
		
		i = 2;
	}

	else
	{
		m_min = arr[0];
		m_max = arr[0];	
		i = 1;
	}
	

	while (i<n-1)
	{		
		if (arr[i] > arr[i + 1])		
		{
			if(arr[i] > m_max)	
				m_max = arr[i];
				
			if(arr[i + 1] < m_min)		
				m_min = arr[i + 1];	
		}
		
        else{
			if (arr[i + 1] > m_max)	
				m_max = arr[i + 1];
				
			if (arr[i] < m_min)		
				m_min = arr[i];	
		}
		
		i += 2;
	}		

}

int main()
{
	int arr[] = {342,54,14,876,34,576,34,23,4778,356,23,2};

	int n = sizeof(arr) / sizeof(arr[0]);

	
	minmax(arr,n);
	
	cout<<"\nMin: "<<m_min;
	cout<<"\nMax: "<<m_max<<"\n";
		
	return 0;
}


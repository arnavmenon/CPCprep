#include <bits/stdc++.h>
#include <vector>
using namespace std;

int d1[1000];
int d2[1000];

void arrUnion(int a1[], int a2[], int m, int n)
{   
    int i=0,j=0;
    while(i<m && j<n){
        if(a1[i]<a2[j])
            cout<<a1[i++]<<" ";
        else if (a1[i] > a2[j])
            cout<<a2[j++]<<" ";
        else{
            cout<<a1[i++]<<" ";
            j++;
        }
    }

    while (i<m)
        cout<<a1[i++]<<" ";
    while (j<n)
        cout<<a2[j++]<<" ";

    cout<<"\n";
    return;
	
}

void arrUnionDup(int a1[], int a2[], int m, int n)
{   
    int i=0,j=0,k=0;

    while(i<m && j<n){

        int topush;

        if(a1[i]<a2[j])
            topush=a1[i++];
        else if (a1[i] > a2[j])
            topush=a2[j++];
            
        else{       
            topush=a1[i++];
            j++;
        }

        if (k>0 && d1[k-1]==topush)
            continue;
        else
            d1[k++]=topush;
    }
    


    while (i<m){
        int topush=a1[i++];
       if (k>0 && d1[k-1]==topush)
            continue;
        else
            d1[k++]=topush;
    }
        
    while (j<n){
        int topush=a2[j++];
        if (k>0 && d1[k-1]==topush)
            continue;
        else
            d1[k++]=topush;
    }
        

    cout<<"\n";
    for(int i=0;i<k;i++)
        cout<<d1[i]<<" ";
    return;
	
}

void arrInt(int a1[], int a2[], int m, int n)
{
    int i=0,j=0;

    while(i<m && j<n){
        if(a1[i]<a2[j])
            i++;
        else if (a1[i] > a2[j])
            j++;
        else{
            cout<<a1[i++]<<" ";
            j++;
        }
    }

    cout<<"\n";
    return;
}

void arrIntDup(int a1[], int a2[], int m, int n)
{
    int i=0,j=0,k=0;

    while(i<m && j<n){

        if(a1[i]<a2[j])
            i++;
        else if (a1[i] > a2[j])
            j++;

        else{

            if (k>0 && d2[k-1] == a1[i]){
                i++; j++;
            }
            else{
                d2[k++] = a1[i++];
                j++;
            } 
        }
    }

    cout<<"\n";
    for(int i=0;i<k;i++)
        cout<<d2[i]<<" ";
    cout<<"\n";
    return;
}


int main()
{
	int a1[] = { 4,4 };
	int a2[] = { 1,4,2,3,5,4 };

	int m = sizeof(a1) / sizeof(a1[0]);
	int n = sizeof(a2) / sizeof(a2[0]);

	arrUnion(a1, a2, m, n);
    arrInt(a1, a2, m, n);

    arrUnionDup(a1, a2, m, n);
    arrIntDup(a1, a2, m, n);


	return 0;
}

//gfg
/* class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        
        int i=0,j=0,k=0;
        sort(a, a+n);
        sort(b, b+m);
        int d1[100000];

        while(i<n && j<m){
    
            int topush;
    
            if(a[i]<b[j])
                topush=a[i++];
            else if (a[i] > b[j])
                topush=b[j++];
                
            else{       
                topush=a[i++];
                j++;
            }
    
            if (k>0 && d1[k-1]==topush)
                continue;
            else
                d1[k++]=topush;
        }
        
    
    
        while (i<n){
            int topush=a[i++];
           if (k>0 && d1[k-1]==topush)
                continue;
            else
                d1[k++]=topush;
        }
            
        while (j<m){
            int topush=b[j++];
            if (k>0 && d1[k-1]==topush)
                continue;
            else
                d1[k++]=topush;
        }
            
    

        return k;
    }
}; */
#include<bits/stdc++.h>
using namespace std;

void swap(int *x , int *y)
{
         int temp = *x;

         *x = *y;

         *y = temp;
}

void selecctionSort(int arr[], int n)
{
         int i,j, min_idx;

         for(i =0; i< n-1; i++)
         {
                  min_idx =i;

                  for(j = i+1; j<n; j++)
                  {
                           if(arr[j] < arr[min_idx])
                           {
                                    min_idx = j;

                           }
                  }

                  swap(&arr[min_idx], &arr[i]);
         }
}


void printArray(int arr[], int size)
{
         int i;

         for( i=0; i<size; i++)

         cout<<arr[i]<<" ";


         cout<<endl;
}

int main()
{
          int n;

                  cin>>n;

                  int arr[n];

                  for(int i =0; i<n; i++)
                  {
                           cin>>arr[i];
                  
                   }

                   selecctionSort(arr,n);
                   printArray(arr,n);
}
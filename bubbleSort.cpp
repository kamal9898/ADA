#include<bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[] , int n)
{
         for(int i =0; i<n-1; i++)
         {
                  bool swapped = false;

                  for(int j = 0; j< n-i-1; j++)
                  {
                           if(arr[j] > arr[j+1])
                           {
                                    swap(arr[j] , arr[j+1]);
                                    swapped = true;
                           }
                  }

                  if(swapped = false )
                  {
                           break;
                  }
         }
}

void printArray(int arr[], int n)
{
         for (int  i = 0; i <n; i++)
         {
                  cout<<arr[i]<<" ";
         }

         cout<<endl;
         
}


int main()
{
         int n; 
         cout<<"Enter the Number -> ";

         cin>>n;

         int time[n];

         for (int i = 0; i < n; i++)
         {
                 cin>>time[i];
         }

         bubbleSort(time,n);

         printArray(time,n);
         
}
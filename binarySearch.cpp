#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
         int start = 0;
         int end = size-1;

         int mid = (start+end)/2;

         while (start <= end)
         {
                if (arr[mid] == key)
                {
                        return mid;
                }
                if (key > arr[mid])
                {
                        start = mid+1;
                }

                else{
                         end = mid-1;
                }

                mid = (start+end)/2;              
         }

         return -1;
         
}

int main()
{
         int even[8] = {13,12,65,3,8,9,23,1};
         int odd[5] = {13,12,65,3,8};

         int evenIndex = binarySearch(even,8,23);

         cout<<"Index 23 is "<<evenIndex<<endl;

         int oddIndex = binarySearch(odd,5,13);

         cout<<"Index 13 is "<<oddIndex<<endl;
}
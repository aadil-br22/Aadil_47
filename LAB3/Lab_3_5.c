#include <stdio.h>
int FirstOcc (int a[], int n, int key, int low, int high)
   { 
   int i;  
   int j; 
   int flag = 0;
   int low = 0;
   int high = n-1;
   int mid = low + (high - low)/2;
   for(i = 0; i < n; i++)
      {
        if (a[mid] == key)
           j = mid;
           while (a[j] == a[mid])
           {
                 if a[j-1] == a[mid]
                 {
                    mid = j-1;
                    j--;
                 }
                 else
                 break;
           }  
      }
   }
           
int main()
   {
     int a[] = { 1, 2, 2, 2, 3, 4, 5, 6};
     int n = 7;
     int key = 2;
     int low = 0;
     int high = 8;
     
   
     int result = FirstOcc (a, n, key, low, high);
     printf("The first index of the duplicate is : %d", result);
     return 0;
   }

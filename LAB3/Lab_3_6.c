#include <stdio.h>
int FirstOcc (int a[], int n, int key)
   { 
   int i;   
   int flag = 0;
   for(i = 0; i < n; i++)
      {
        if (a[i] == key)
        flag = flag + 1;
      }
   return flag;
   }
   
int main()
   {
     int a[] = { 1, 2, 2, 2, 3, 4, 5, 6};
     int n = 8;
     int key = 2;
   
     int result = FirstOcc (a, n, key);
     printf("The number of occurance of key is : %d", result);
     return 0;
   }

1.output=6

2.output=-2.333333

3.output=9 1

4.output=14

5.output=4

6.output=hello word


7.output=      1        
      12
     123
    1234
   12345



8.#include <stdio.h>

int main()
{
   int N, X, i, flag = 0;

   printf("Enter the number of elements in the array: ");
   scanf("%d", &N);

   int arr[N];

   printf("Enter the elements of the array: ");
   for(i=0; i<N; i++)
      scanf("%d", &arr[i]);

   printf("Enter the element to be searched: ");
   scanf("%d", &X);

   for(i=0; i<N; i++)
   {
      if(arr[i] == X)
      {
         printf("The index of the first occurrence of %d is %d\n", X, i);
         flag = 1;
         break;
      }
   }

   if(flag == 0)
      printf("-1\n");

   return 0;
}


9.output=umar

10.output=32


#include<stdio.h>
 void main()
 {
  int a[10],i,j,n,temp;
  printf(" Enter total number of elements");
  scanf("%d",&n);
  printf("Enter th elements of the array:");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  } 
  for(i=1;i<n;i++)
  {
   temp= a[i];
   j= i-1;
   while(j>=0&&a[j]>temp)
   {
    a[j+1] = a[j];
    j--;
   }
   a[j+1]= temp;
   }
   printf("The sorted elements are\n");
   for(i=0;i<n;i++)
   {
   printf("%d\n",a[i]);
   }
   }

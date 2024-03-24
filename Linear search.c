#include<stdio.h>
int main() 
{
   int i,j,temp,n,arr[100];
   printf("enter the size of array:");
   scanf("%d",&n);
   printf("/n enter the size of array");
   for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   for(i=1;i<n;i++){
       temp=arr[i];
       j=i-1;
       while(j>=0 &&arr[j]>temp)
       {
           j=i-1;
       }
       arr[j+1]=temp;
   }
   for(i=0;i<n;i++){
       printf("%d/n",arr[j]);
       printf("/n");
   }
   return 0;
}

   

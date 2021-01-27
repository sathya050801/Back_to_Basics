#include<stdio.h>
int main()
{
 int i,n,j,key,num[100];
 
 printf("\n The no. of element are: ");
 scanf("%d",&n);
 
 printf("\n Enter the elements: ");
 for(i=0;i<n;i++)
 {
     scanf("%d",&num[i]);
 }
 
 for(i=1;i<n;i++)
 {
     key=num[i];
     j=i-1;
     
     while((j>=0) && (num[j]>key))
     {
     num[j+1]=num[j];
     j=j-1;
     }
     num[j+1]=key;
 }
 
 printf("\n The sorted elements are: ");
 for(i=0;i<n;i++)
 {
     printf("%d\t",num[i]);
 }
 return 0;
 }


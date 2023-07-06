
#include<stdio.h>
int main()
{
int a[20],i,j,n,temp;
printf("enter the no of elements in the array\n");
scanf("%d",&n);
printf("enter the elements of the array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
int min=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[min])
min=j; // location of the minimum element in the unsorted array is assigned to ‘min’
}
temp=a[i];
a[i]=a[min]; // element at ‘min’ location is swapped with the first element in the unsorted list
a[min]=temp;
}
for(i=0;i<n;i++)
printf("%d->",a[i]);
return 0;
}


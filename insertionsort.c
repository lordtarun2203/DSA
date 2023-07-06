//insertion sort
#include<stdio.h>
int main()
{
int a[20],i,j,n,temp,k;
printf("enter the no of elements in the array\n");
scanf("%d",&n);
printf("enter the elements of the array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
if(a[i+1]<a[i]) // only if the first element in the unsorted list (a[i+1]) is lesser than the
{ // immediate predecessor (a[i]), the second loop is entered. Otherwise inner
temp=a[i+1]; // loop is skipped.
for(k=i;k>=0;k--)
{
if(a[k]<temp)
break;
else
a[k+1]=a[k];
}
a[k+1]=temp;
}
}
for(i=0;i<n;i++)
printf("%d->",a[i]);
return 0;
}


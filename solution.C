#include<stdio.h>
void main()
{
 int a[10], b[10],i,n, found=0;
 clrscr();
 printf("enter the size of the array\n");
 scanf("%d",&n);
 printf("enter the element of array a\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter the element of array b\n");
for(i=0;i<n;i++)
scanf("%d",&b[i]);
for(i=0;i<n;i++)
{
 if(a[i]==b[i])
  {
  found++;
  }
}
if(found==n)
{
   printf("the array is equal\n");
}
else
{
printf("the array is not equal\n");
}
getch();
}



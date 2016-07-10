#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],key,i,n;
clrscr();
printf("enter the size of array");
scanf("%d",&n);
printf("Enter the element on by one");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the key");
scanf("%d",&key);
printf("after rotatation");
for(i=key;i<n;i++)
{
printf("%d",a[i]);
}
for(i=0;i<key;i++)

printf("%d",a[i]);
getch();
}



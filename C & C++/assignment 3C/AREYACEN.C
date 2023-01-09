#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,a,n,b[10],c[10],d,e;
clrscr();
printf("enter the value of N \n");
scanf("%d",&n);

printf("enter values numbers for first array\n");
for(i=0;i<n;++i)
scanf("%d",&b[i]);
printf("\nenter values of numbers for second array\n");
for(i=0;i<n;++i)
scanf("%d",&c[i]);

printf("if accending press 1 if decending press 2");
scanf("%d",&e);
if(e<=1)
{
  for(i=0;i<n;++i)
 {
  for(j=i;j<n;++j)
 {
   if(b[i]>b[j])
 {    a=b[i];
      b[i]=b[j];
       b[j]=a;
 }}}
 printf("first arrey in Accending order is \n");
 for(i=0;i<n;++i)
 printf("%d ",b[i]);
 for(i=0;i<n;++i)
 {
 for(j=i;j<n;++j)
 {
   if(c[i]>c[j])
 {    d=c[i];
      c[i]=c[j];
       c[j]=d;
 }}}

 printf("\nsecond arrey in Accending order is\n");
 for(i=0;i<n;++i)
 printf("%d ",c[i]);
}
else
 {
  for(i=0;i<n;++i)
 {
 for(j=i+1;j<n;++j)
 {
   if(b[i]<b[j])
 {    a=b[i];
      b[i]=b[j];
       b[j]=a;
 }}}
printf("first arrey in Descending order is \n");
 for(i=0;i<n;++i)
 printf("%d ",b[i]);
 for(i=0;i<n;++i)
 {
 for(j=i+1;j<n;++j)
 {
    if(c[i]<c[j])
 {    d=c[i];
      c[i]=c[j];
       c[j]=d;
 }}}

printf("\nsecond arrey in Descending order is\n");
for(i=0;i<n;++i)
printf("%d ",c[i]);

}

getch();
return 0;

}
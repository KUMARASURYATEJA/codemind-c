#include<stdio.h>
int main()
{
int I,j,h,n,a[100];
int hcf(int,int);
scanf("%d
",&n);
for(I=0;I<n;I++)
{
scanf("%d",&a[I]);
}
for(I=0;I<n-1;I++)
{
h=hcf(a[I],a[I+1]);
a[I+1]=h;
}
printf("%d",h);
//getch();
}
int hcf(int a,int b)
{
if(a%b==0)
{
return b;
}
else
{
    return(hcf(b,a%b));
}
}

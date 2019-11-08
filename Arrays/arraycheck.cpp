/* checks whether the arrays entered are equal or not */
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[10][10],b[10][10],i,j,m,n,p,q;
cin>>m>>n>>p>>q;
if(m!=p || n!=q)
{
cout<<"NOT POSSIBLE";
return;
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
cin>>a[i][j];
}
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
cin>>b[i][j];
}
int x=0;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]!=b[i][j])
x=1;
}
}
if(x==0)
cout<<"ARRAYS ARE EQUAL";
else
cout<<"ARRAYS ARE NOT EQUAL";
getch();
}

#include<iostream.h>
#include<conio.h>
int main()
{
int a,p,n,z,number;
clrscr();
p=0;
z=0;
n=0;
cout<<"enter the total number ";
cin>>a;
while(a>0)
{
cout<<"enter the unmber ";
cin>>number;
if(number>0)
p++;
if(number<0)
n++;
if(number==0)
z++;
a--;
}
cout<<"you entered  "<<p<<" postive number "<<n<<" negative number "<<z<<" zero"<<endl;
getch();
return 0;
}
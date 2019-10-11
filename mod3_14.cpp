#include<iostream.h>
#include<stdio.h>
void decimal()
{
char arr[20],b='a'; 
cout<<"Enter the decimal string"<<endl;
gets(arr);
for(int i=0;arr[i]!='\0';i++)
{
if((arr[i]=='0'||arr[i]=='3'||arr[i]=='6'||arr[i]=='9') && b=='a')
{ cout<<b<<"--"<<arr[i]<<"-->";
cout<<b<<endl;
}
else
if((arr[i]=='0'||arr[i]=='3'||arr[i]=='6'||arr[i]=='9') && b=='b')
{ cout<<b<<"--"<<arr[i]<<"-->";
cout<<b<<endl;
}
else
if((arr[i]=='0'||arr[i]=='3'||arr[i]=='6'||arr[i]=='9') && b=='c')
{ cout<<b<<"--"<<arr[i]<<"-->";
cout<<b<<endl;
}
else
if((arr[i]=='1'||arr[i]=='4'||arr[i]=='7') && b=='a')
{
cout<<b<<"--"<<arr[i]<<"-->";
b='b';
cout<<b<<endl;
}
else
if((arr[i]=='2'||arr[i]=='5'||arr[i]=='8') && b=='a')
{
cout<<b<<"--"<<arr[i]<<"-->";
b='c';
cout<<b<<endl;
}
else
if((arr[i]=='1'||arr[i]=='4'||arr[i]=='7') && b=='b')
{
cout<<b<<"--"<<arr[i]<<"-->";
b='c';
cout<<b<<endl;
}
else
if((arr[i]=='2'||arr[i]=='5'||arr[i]=='8') && b=='b')
{
cout<<b<<"--"<<arr[i]<<"-->";
b='a';
cout<<b<<endl;
}
else
if((arr[i]=='1'||arr[i]=='4'||arr[i]=='7') && b=='c')
{ cout<<b<<"--"<<arr[i]<<"-->";
b='a';
cout<<b<<endl;
}
else
if((arr[i]=='2'||arr[i]=='5'||arr[i]=='8') && b=='c')
{ cout<<b<<"--"<<arr[i]<<"-->";
b='b';
cout<<b<<endl;
}

else
{
cout<<"Invalid";
exit(0); }
}
if(b=='a')
{
cout<<"String is accepted"<<endl;
}
else
{
cout<<"String is rejected"<<endl;
}
cout<<endl<<"Press enter to continue..."<<endl;

}
int main()
{


decimal();

}

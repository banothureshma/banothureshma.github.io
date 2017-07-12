#include<iostream>
using namespace std;
int main()
{
int a;
 int rem, sum = 0;
      cout<<"enter the values:"; 
    cin>>a;
    while(a>0){
        rem = a%10;
    sum = sum+rem;
    a  = a/10;
}
cout<<"sum:"<<sum;
return 0;
}


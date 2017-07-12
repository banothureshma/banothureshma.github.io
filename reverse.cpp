#include<iostream>
using namespace std;
int main()
{
int rev = 0;
int n;
int digit;
cout<<"enter the values";
cin>>n;
while(n > 0){
digit = n % 10;
rev = (rev*10)+digit;
n = n/10;
}
cout<<"reverse of given number is:"<<rev;
return 0;
}


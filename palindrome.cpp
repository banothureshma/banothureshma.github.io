#include<iostream>
using namespace std;
int main(){
int n;
int digit;
int rev = 0;
int temp;

cout<<"enter an inter:";
cin>>n;
temp = n;
while(n > 0){
digit = n%10;
rev = (rev*10)+digit;
n = n/10;
}
if(rev == temp){
cout<<"palindrome:";
}else{
cout<<"not palindrome:";
}
return 0;
}


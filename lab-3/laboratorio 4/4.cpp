#include <stdio.h>
using namespace std;
#include <iostream>

int isPalindrome(int num)
{

    int n = num;
 

    int rev = 0;
 
    while (n)
    {

        int r = n % 10;
 
      
        rev = rev * 10 + r;
 
       
        n = n / 10;
    }
 
    return (num == rev);
}
 
int main(void)
{
    int n ;
    cout<< "escribe un numero: ";
    cin>> n ;
    int a{0};
 
    if (isPalindrome(n)) {
        a=n;
    }
    else {
        a=a;
    }
 
    return 0;
}

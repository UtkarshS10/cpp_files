#include <iostream>
using namespace std;
// Q-reverse a no + palindrome
int reverseNo(int n) {
    int rem;
    int revNo=0;
    if(n==0) {
        return 0;
    }

    if(n<0) {
        n=-n;
    }
    while(n>0) {
     rem=n % 10;
     n/=10;
      revNo=revNo*10+rem;
    } 
     return revNo;
    
}

int main() {
    int n;
    cout<<"n=";
    cin>>n;
    
    int reverse=reverseNo(n);
    if(n==reverse) {
        cout<<"yes it's a palindrome";
    } else {
        cout<<"no it is not a palindrome";
    }
    return 0;

} 


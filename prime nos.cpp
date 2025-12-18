#include <iostream>
using namespace std;
// Q-check if a no is prime
// int main () {
//     int n;
//     cout<<"n=";
//     cin>>n;
//     bool isPrime=true;
//     for(int i=2;i*i<=n;i++) {
//         if(n%i==0) {
//             isPrime=false;
//             break;
//         }
//     } 
//     if(isPrime==true){
//         cout<<"yes "<<n<<" is a prime no";
//     }
//     else {
//         cout<<"no "<<n<<" is not a prime no";
//     }
//     return 0;
// }
// Q-prime nos bw 1 nd n
 void primeNo(int n) {
    
   for(int j=2;j<=n;j++) {
    bool isPrime=true;
    for(int i=2;i*i<=j;i++) {
        if(j%i==0) {
        isPrime=false;
        break;
    }
    }
     if(isPrime==true) {
    cout<<j<<" ";
 }
 }
 
}
int main() {
    int n;
    cout<<"n=";
    cin>>n;
    primeNo(n);
    return 0;
}
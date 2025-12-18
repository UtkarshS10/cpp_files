#include <iostream>
using namespace std;
// Q- factorial of a no
// int main () {
//     int n;
//     cout<<"n=";
//     cin>>n;
//     int pro=1;
//     for (int i=1;i<=n;i++) {
//         pro*=i;
//     }
//     cout<<pro;
//     return 0;
// }
// Q- digits in a no
int countDigits(int n) {
    if(n==0) {
        return 1;
    }
    int count=0;
    if(n<0) {
        n=-n;
  }
  while(n>0) {
    n/=10;
    count++;
  }
  return count;
    
}
int main() {
    int n;
    cout<<"n=";
    cin>>n;
   
    cout<<"the no of digits in"<< n<<"is="<<countDigits(n);
    return 0;
}

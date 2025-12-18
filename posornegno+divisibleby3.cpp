#include <iostream>
using namespace std;
//Q- no is positive neg or zero
// int main () {
//     int n;
//     cout<<"n=" ;
//     cin>>n;
//     if(n>0) {
//         cout<<n<< "is a positive no";
//          }
//          else if (n==0) {
//             cout<<n<< " is a zero no";
//          }
//      else {
//         cout<<n<< "is a negative no";
//      }
//      return 0;
// }
// Q- how many nos bw 1 and n are divisible by 3
int main() {
    int n;
    cout<<"n=" ;
    cin>>n;
    int count=0;
    for (int i=1; i<n;i++) {
        if (i%3==0) {
            count++;
           }
            }
            cout<<count<< "numbers";
    return 0;
}
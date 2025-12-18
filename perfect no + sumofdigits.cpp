#include <iostream>
using namespace std;
// Q-check if a no is a perfect no
// int main() {
//     int n;
//     cout<<"n=";
//     cin>>n;
//     int count=0;
//     for(int i=1;i<n;i++) {
//         if(n%i==0) {
//             count+=i;
//         }
//     }
//     if(count==n) {
//         cout<<n<<" is a perfect no";
//     }
//     else{
//          cout<<n<<" is not a perfect no";
//     }
//     return 0;
// }
// Q-sum of digits of a no
int main() {
    int n;
    cout<<"n=";
    cin>>n;
    int rem;
    int count=0;
    while(n>0) {
       rem=n%10;
        count+=rem;
        n/=10;
    }
    cout<<count;
    return 0;
}
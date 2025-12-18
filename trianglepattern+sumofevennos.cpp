#include <iostream>
using namespace std;
// Q- inverted triangle pattern
// int main () {
//     int n;
//     cout<<"n=";
//     cin>>n;
//     int count=0;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<=n-i-1;j++) {
//             count++;
//              cout<<count<<" " ;
//         }
//         cout<<endl;
//     } 
//     return 0;

// }
// Q- sum of even nos upto n
int main () {
     int n;
    cout<<"n=";
    cin>>n;
    int count=0;
   
    for (int i=0;i<=n;i+=2) {
        count+=i;
    } 
    cout<<"sum="<<count;
    
    return 0;
}

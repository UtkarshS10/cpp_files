#include <iostream>
using namespace std;
// Q-GCD of two nos
// int main() {
//     int a,b;
//     cout<<"a=";
//     cin>>a;
//     cout<<"b=";
//     cin>>b;
//     int min,max;
//     int GCD;
//     if(a>b) {
//         min=b;
//         max=a;
//     }
//     else{
//         min=a;
//         max=b;
//     }
//     for(int i=1;i<=min;i++) {
//         if(min%i==0 && max%i==0) {
//             GCD=i;
//         }
//     }
//     cout<<GCD;
//     return 0;
// }
//Q-LCM of two nos
int main() {
    int a,b;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    int min,max;
    int LCM;
    if(a>b) {
        min=b;
        max=a;
    }
    else{
        min=a;
        max=b;
    } 
    for(int i=min;i<max*min;i++) {
        if(i%min==0 && i%max==0) {
            LCM=i;
            break;
        }
    }
    cout<<LCM;
    return 0;
}
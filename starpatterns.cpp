#include <iostream>
using namespace std;
// Q- sq pattern of stars of size n
// int main() {
//     int n;
//     cout<<"n=";
//     cin>>n;
//     for(int i=0;i<n;i++) {
//         cout<<"****"<<endl;
//     }
//     return 0;
// }
// Q- right angled triangle using stars
int main() {
    int n;
    cout<<"n=";
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<i+1;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}
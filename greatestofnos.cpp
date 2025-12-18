#include <iostream>
using namespace std;
// Q-greatest of two nos
// int main() {
//     int a,b;
//     cout<<"a=";
//     cin>>a;
//     cout<<"b=";
//     cin>>b;
//     if(a>b) {
//         cout<<a;
//      }   
//      else {
//         cout<<b;
//      }    
//      return 0;
// }
// Q-greatest of 3 nos
int main () {
     int a,b,c;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    cin>>c;
    if(a>b&&a>c) {
        cout<<a;
    }
        if(a>b&&a<c) {
            cout<<c;
        }
        if(a<b&&b>c) {
            cout<<b;
        }
        if(a<b&&b<c) {
            cout<<c;
        }
        return 0;
    }
    

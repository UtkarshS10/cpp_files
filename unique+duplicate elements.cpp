#include <iostream>
using namespace std;
// Q-print all unique elements from an array
// int main () {
//     int array[]={1,3,4,4,8};
//     int size=5;
    
//     for(int i=0;i<size;i++) {
//         bool isUnique=true;
//         for(int j=0;j<i;j++) {
//             if(array[i]==array[j]) {
//                  isUnique=false;
//                  break;
//               }
//              }
//          if(isUnique) {
//             cout<<array[i]<<" ";
//          }
//     }
//     return 0;
// }
// Q- remove duplicate elements
int main () {
    int array[]={1,3,4,4,8};
    int size=5;
    
    for(int i=0;i<size;i++) {
        int count=0;
        for(int j=0;j<size;j++) {
            if(array[i]==array[j]) {
                 count++;
                 
              }
             }
        if(count==1) {
            cout<<array[i]<<" ";
         }
    }
    return 0;
}
#include <iostream>
#include <climits>
using namespace std;
// Q- diff bw largest and smallest no
// int main() {
//     int array[]={4,8,6,12,16};
//     int size=5;
//     int largest=INT_MIN;
//     int smallest=INT_MAX;
//    int diff;
//     for(int i=0;i<size;i++) {
//         if(array[i]>largest) {
//             largest=array[i];
//         }
//         if(array[i]<smallest){
//             smallest=array[i];
//         }
//     } 
//     diff=largest-smallest;
//     cout<<diff;
//     return 0;
// }
// Q-count even nd odd elements in an array
int main() {
    int array[]={4,3,6,11,16};
    int size=5;
    int countEven=0;
    int countOdd=0;
    for(int i=0;i<size;i++) {
        if(array[i]%2==0) {
            countEven++;
        }
        else {
            countOdd++;
        }
    }
    cout<<"no of even elements="<<countEven<<endl;
    cout<<"no of odd elements="<<countOdd<<endl;
    return 0;
}
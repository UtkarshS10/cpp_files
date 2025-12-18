#include <iostream>
using namespace std;
//Q-sum of elements in an array
// int main() {
//     int array[]={1,3,5,7,9};
//     int size=5;
//     int sum=0;
//     for(int i=0;i<size;i++) {
//         sum+=array[i];
//     }
//     cout<<sum;
//     return 0;

// }
//Q-how many nos are positive in an array
int main() {
    int array[]={2,-4,4,7,9,5};
    int size=6;
    int count=0;
    for(int i=0;i<size;i++) {
        if(array[i]>0) {
            count++;

        }
    }
    cout<<"positive nos are "<<count;
    return 0;
}
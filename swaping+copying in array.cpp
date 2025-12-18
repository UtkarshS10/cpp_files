#include <iostream>
using namespace std;
// Q- swap 1st nd last elements in an array
// int main () {
//     int array[]={2,4,8,9,6};
//     int size=5;
//     int start=0;
//     int end=size-1;
//     swap(array[start],array[end]) ;
//     for(int i=0;i<size;i++) {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
// Q-copy one array into another
int main() {
    int array[]={1,3,5,9,6};
    int size=5;
    int array1[5];
    int index=0;
    for (int i=0;i<size;i++) {
        array1[index]=array[i];
        index++;
    }
    for (int i=0;i<index;i++) {
        cout<<array1[i]<<" ";

    }
    return 0;

}
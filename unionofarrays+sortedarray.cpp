#include <iostream>
using namespace std;
// Q-union of two arrays

   bool unionOfArrays(int array[],int size,int same) {
    for(int i=0;i<size;i++) {
        if(array[i]==same) {
            return true;
        }
    }
    return false;
   }
   int main() {
    int arr1[]={2,4,6,7,9};
    int size1=5;

    int arr2[]={1,3,4,6,8};
    int size2=5;

    int unionArray[10];
    int unionSize=0;
    for(int i=0;i<size1;i++) {  // adding elements of arr1
        if(!unionOfArrays(unionArray,unionSize,arr1[i])) {
        unionArray[unionSize++]=arr1[i];
        }
    }
    for(int i=0;i<size2;i++) {  // adding elements of arr2
        if(!unionOfArrays(unionArray,unionSize,arr2[i])) {
        unionArray[unionSize++]=arr2[i];
        }
    }
    cout<<"union of arrays: ";
    for(int i=0;i<unionSize;i++) {
        cout<<unionArray[i]<<" ";
    }
    return 0;
   }
    
//Q-check if an array is sorted in ascending order
// bool isSortedAscending(int array[],int size) {
//     if(size<=1) {
//         return true;
//     }
//     for(int i=1;i<size;i++) {
//         if(array[i]<array[i-1]) {
//             return false;
//         }
//     }
//     return true; // if loop completes without finding any unsorted pair , then array is sorted
// }

// int main() {
//     int array1[]={2,5,6,7,4};
//     int size1=5;
//     int array2[]={1,2,3,4,5};
//     int size2=5;
//     int array3[]={2};
//     int size3=1;

//     cout<<"array1 is sorted"<<(isSortedAscending(array1,size1)? "true" : "false")<<endl;
//     cout<<"array2 is sorted"<<(isSortedAscending(array2,size2)? "true" : "false")<<endl;
//     cout<<"array3 is sorted"<<(isSortedAscending(array3,size3)? "true" : "false")<<endl;
    
//    return 0;
// }
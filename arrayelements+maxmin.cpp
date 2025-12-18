#include <iostream>
#include <climits>
using namespace std;
//Q- read n elements in an array and print them
// int main() {
//     int size;
    
//     cout<<"size of array=";
//     cin>>size;
//     int arr[size];
//      for(int i=0;i<size;i++) {
//         cout<<"enter the"<<i<<"th element=";
//         cin>>arr[i];
       
//         }
     
//      for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//      }
//      return 0;
// }
// Q- maximum/minimum no in an array
int main() {
    int array[]={2,4,6,8,10};
    int size=5;
    int min=INT_MAX;
    for(int i=0;i<size;i++) {
        if(array[i]<min) {
            min=array[i];
        }
        }
         cout<<min;
        return 0;
}
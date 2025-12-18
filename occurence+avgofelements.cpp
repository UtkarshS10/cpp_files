#include <iostream>
using namespace std;
//Q- how many times a specific no appears in an array
// int occurencesOfaNo(int array[],int size,int n) {
    
//     int count=0;
//     for(int i=0;i<size;i++) {
//         if(array[i]==n) {
//             count++;
//         }
//     }
//     return count;
// }
// int main() {
//     int arr[]={1,4,6,1,5};
//     int size=5;
//     int n;
//     cout<<"enter the no=";
//     cin>>n;
//     cout<<n<<" occurs"<< occurencesOfaNo(arr,size,n)<<" times in the array";
//     return 0;
// }
//Q-avg of elements of an array
int avg(int array[],int size) {
    int sum=0;
    int avg;
    for(int i=0;i<size;i++) {
        sum+=array[i];

    } 
    avg=sum/size;
    return avg;
}
int main() {
    int arr[]={10,7,13,8,12};
    int size=5;
    cout<<"avg="<<avg(arr,size);
    return 0;
}
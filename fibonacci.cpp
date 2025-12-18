#include <iostream>
using namespace std;
// Q- fibonacci series upto n terms
// int fibonacciNo(int n) {
//     if(n<=0) return 0;
   
//     int a=0,b=1,fib;
    
//         for(int j=0;j<n;j++) {
//            cout<<a<<" ";
//             fib=a+b;
//             a=b;
//             b=fib;
           
//            }
    
// }
// int main() {
//         int n;
//         cout<<"n=";
//         cin>>n;
//        cout<< fibonacciNo(n);
//         return 0;

// }
// Q-prime nos in an array
void primeNo(int array[],int size) {
    for(int i=0;i<size;i++) {
        bool isPrime=true;
        for(int j=2;j*j<=array[i];j++) {
            if(array[i]%j==0) {
                isPrime=false;
                break;
            }
        }
       if(isPrime==true) {
        cout<<array[i]<<" ";
       } 
    }
    cout<<endl;
}
int main() {
    int array[]={2,5,6,7,8};
    int size=5;
    int array1[]={1,3,4,6,9};
    int size1=5;
    int array2[]={10,15,16,19};
    int size2=4;
   primeNo(array,size);
   primeNo(array1,size1);
   primeNo(array2,size2);
    return 0;

}
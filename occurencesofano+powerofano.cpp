#include <iostream>
using namespace std;
// Q-how many times a digit appears in a no
// int countdigitoccurences(long long number,int targetDigit) {
// if(number==0 && targetDigit==0) {
//     return 1;
// }
// int count=0;
// if(number<0) {
//     number=-number;
// }
// while(number>0) {
//     int digit=number % 10;
//     if(digit==targetDigit) {
//         count++;
//     }
//     number/=10;
// }
// return count;
// }
// int main() {
//     long long num;
//     int digittofind;
//     cout<<"enter a number=";
//     cin>>num;
//     cout<<"enter the digit to count=";
//     cin>>digittofind;

//     if(digittofind<0 || digittofind>9) {
//         cout<<"invalid digit. please enter a digit between 0 & 9.";
//         return 1;
//     }
//     int occurences=countdigitoccurences(num,digittofind);
//     cout<<"the digit "<<digittofind<<" appears "<<occurences<<" times in the number "<<num;
//     return 0;
// }
// Q- power of a no using loop
int main() {
    int pro=1;
    int base,power;
    cout<<"enter a base=";
    cin>>base;
    cout<<"enter power=";
    cin>>power;
    for(int i=0;i<power;i++) {
       pro*=base;
    }
    cout<<pro;
    return 0;
}

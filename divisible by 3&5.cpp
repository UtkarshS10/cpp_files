#include <iostream>
using namespace std;
// Q-print nos bw 1 nd 100 that are divisible by both 3 nd 5
int main() {
    int rem;
    int count=0;
    
    for(int i=2;i<100;i++) {
       if(i%15==0) {
        cout<<i<<" ";
       }
    }
   
    return 0;
}
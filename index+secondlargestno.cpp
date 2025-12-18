#include <iostream>
#include <climits>
using namespace std;
// Q- index of a specific no in an array
// int main() {
//     int array[]={2,4,9,13,18};
//     int size=5;
//     int n;
//     cout<<"enter the no=";
//     cin>>n;
//     for(int i=0;i<size;i++) {
//         if(array[i]==n) {
//             cout<<"index="<<i;
//         }
//     }
//     return 0;
// }
// Q-2nd largest no in an array
int secondLargestNo(int arr[], int size)
{
    if (size < 2)
    { // array having only 1 element
        return -1;
    }
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i]; // if current element is bw largest & 2nd largest
        }
    }
    if (secondLargest == INT_MIN)
    {
        return -1; // for array having same elements or only 1 distinct element
    }

    return secondLargest;
}
int main()
{
    int arr1[] = {2, 4, 5, 8, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "the 2nd largest no in the array is" << secondLargestNo(arr1, size1) << endl;
    int arr2[] = {2};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "the 2nd largest no in the array is" << secondLargestNo(arr2, size2) << endl;
    int arr3[] = {5, 5, 5, 5};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << "the 2nd largest no in the array is" << secondLargestNo(arr3, size3) << endl;
    return 0;
}

//PRINTING SUBARRAYS of given arrays ,NO. OF SUBARRAYS DIRECTLY PROPORTIONAL TO N SQUARE, TIME COMPLEXITY O(N.N.N)(N CUBIC)

#include <iostream>

using namespace std;

void printSubArrays(int arr[],size_t n) {

    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            for(int k=i;k<=j;k++) {
                cout<<arr[k]<<",";
            }
            cout<< endl;
        }
    }

}
int main(){
    int arr[] {10,20,30,40,50,60};

    size_t n = sizeof(arr)/sizeof(int);

    printSubArrays(arr,n);

    return 0 ;

}
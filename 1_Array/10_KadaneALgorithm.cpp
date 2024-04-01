//MODIFIED KADANE'S ALGORITHM WORK FOR WHOLE NEGATIVE NUMBERS ALSO
// T/C O(N)   S/C O(1)

#include <iostream>
#include <array>
#include <climits>

using namespace std;

int max_SubArray_Sum(int arr[], size_t n) {

    int current_sum {0};
    int largest_sum = INT_MIN;

    for(int i=0;i<n;i++) {
        current_sum = current_sum + arr[i];

        current_sum =(current_sum > arr[i]) ? current_sum : arr[i];

        if(current_sum > largest_sum) {
            largest_sum = current_sum;
        }
        
        largest_sum = max(largest_sum,current_sum);

    }

    return largest_sum;
}

int main() {

    int arr [] {-2,-3,-4,-1,-5,-12,-6,-1,-3};

    size_t n = sizeof(arr)/sizeof(int);

    cout<<"MAx sum using Kadane's algorithm: "<<max_SubArray_Sum(arr,n)<<endl;


    return 0;
}
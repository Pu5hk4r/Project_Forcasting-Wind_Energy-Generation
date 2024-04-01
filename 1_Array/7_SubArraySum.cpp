//PRINTING SUBARRAYS SUM BRUTE FORCE, TIME COMPLEXITY O(N CUBE)

#include <iostream>
#include <array>

using namespace std;

int largestSubarraySum1(int arr[],size_t n) {

    int largest_sum {0};
   

    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {

             int subarray_sum {0};

            for(int k=i;k<=j;k++) {
                // cout<<arr[k]<<",";
                subarray_sum += arr[k];
            }
           //put a check is SubarraySum > largest_sum

           //cout<<endl;

           largest_sum = max(largest_sum,subarray_sum);
        }
    }

    return largest_sum;

}
int main(){
    int arr[] {-2,3,4,-1,5,-12,6,1,3};

    size_t n = sizeof(arr)/sizeof(int);

   cout<< "The largest SubArray sum is:: "<< largestSubarraySum1(arr,n) <<endl;

    return 0 ;

}
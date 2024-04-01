//PREFIX SUBARRAY SUM:: For reducing Time complexity from O(n cube) to O(n square) we are implementing Prefix subarray problem
//GIVEN ARRAY arr: [1,2,-3,7,5]--->PREFIX ARRAY:[1,3,0,1,12]  prefix[i-1] + arr[i]
// RELATION BETWEEN THESE TWO FOR ANY SUBARRAY STARING INDEX i & END INDEX IS j , PREFIX[j] - PREFIX[i - 1]
//let say subarray arr:[2,-3,7](above given array) calculating sum as follow
//we know index i=1 & j=3
//PREFIC[J]-PREFIX[I-1]=> prefix[3] - prefix[1-1](=0), value corresponding to this index in prefix array:
// 5-1 = 4

#include<iostream>
#include <array>

using namespace std;

//Problem : Print all subarrays of a given array
// Brute Force Approach O(N^3)
int largestSubarraySum1(int arr[],size_t n){

	int largest_sum {0};

	for(int i=0;i<n;i++){
		for(int j=i; j<n; j++){

			int subarraySum {0};

			for(int k=i; k<=j; k++){
				//cout<<arr[k] <<",";
				subarraySum += arr[k];
			}
			//put a check is subarraySum > largest_sum
			largest_sum = max(largest_sum,subarraySum);

		}
	}
	return largest_sum;
}
// Prefix Sum Approach O(N^2)
int largestSubarraySum2(int arr[],size_t n){

	//Prefix Sums
	int prefix[n] {0};
	prefix[0] = arr[0];
	
	for(int i=1;i<n;i++){
		prefix[i] = prefix[i-1] + arr[i];    //valid for value of i>=1
	}

	//largest sum login
	int largest_sum = 0;

	for(int i=0;i<n;i++){
		for(int j=i; j<n; j++){
			int subarraySum = i>0 ? prefix[j] - prefix[i-1] : prefix[j];//i can take a value of 0 so validating i>=1 using ternary operator in case of "0" we require prefix[j] only
			//put a check is subarraySum > largest_sum
			largest_sum = max(largest_sum,subarraySum);

		}
	}
	return largest_sum;
}

int main(){
	//Array Containing 
	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	size_t n = sizeof(arr)/sizeof(int);

	cout<<"Sub Array sum using Time complexity O(N'3)--> "<< largestSubarraySum1(arr,n) <<endl;

	cout<<"SubArray sum using Prefix Array method Time complexity O(N'2)--> "<< largestSubarraySum2(arr,n) <<endl;


	return 0;
}
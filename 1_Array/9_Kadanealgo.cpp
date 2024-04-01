//KADANE'S ALGORITHM
//THIS WILL NOT WORK FOR IF ELEMENT OF WHOLE ARRAY IS NEGATIVE
//T/C O(N), S/C O(1)


#include <iostream>
#include <array>

using namespace std;

int maximum_subarray_sum(int *arr,size_t n){  //same as arr[]

	int current_sum {0};
	int largest_sum  {0};

	for(int i=0;i<n;i++){
		current_sum = current_sum + arr[i];
		if(current_sum < 0) {
			current_sum = 0;
		}
		largest_sum = max(largest_sum, current_sum);
	}

	return largest_sum;
}


int main(){
	//Array Containing 
	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	size_t n = sizeof(arr)/sizeof(int);

	cout<<"THE sum is using Kadane's algorithm is: "<< maximum_subarray_sum(arr,n) <<endl;

	return 0;
}
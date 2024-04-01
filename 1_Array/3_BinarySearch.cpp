//BINARY SEARCH ALGORITHM ,TIME COMPLEXITY O(LOG N),ARRAY MUST BE SORTED EITHER INCREASING OR DECREASING

#include <iostream>

using namespace std;

int Binary_Search(int arr[],int n,int key){
    int s=0;
    int e= n-1;

    while(s<=e) {
        int mid = (s+e)/2;   //key idea divide array in half

        if(arr[mid] == key) {  //
            return mid;
        }
        else if(arr[mid] > key) {

            e= mid-1;      //shifting end point in divided array when mid value is greater than key value

        } else {
            s = mid+1;     //shifting end point in divided array when mid value is less than key value
        }
    }
    return -1;

}

int main() {
    int arr [] {10,20,30,40,114,150,155,1000};

    size_t n = sizeof(arr)/sizeof(int);

    int key {};

    cout<<"Plz enter the value for ssearching: ";
    cin>> key;
    int index = Binary_Search(arr,n,key);

    if(index != -1) {
        cout<<key<<": is found at "<<index<<endl;
    }
    else {
        cout<<key<<" is not found!"<<endl;
    }

    return 0;
}
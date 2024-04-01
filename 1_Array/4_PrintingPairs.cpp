//PRINTING unique PAIRS OF ARRAY  value

#include <iostream>
using namespace std;

void Printing_pairs(int arr[],size_t n) {

    for(int i=0;i<n;i++) {
        int x = arr[i];

        for(int j=i+1;j<n;j++) {  //for all possible pairs of array make j =0

            int y = arr[j];
            
            cout<<"("<<x<<","<<y<<")";

        }

        cout<<endl;
    }
}

int main() {

    int arr[] {10,20,30,40,50};

    size_t n = sizeof(arr)/sizeof(int);

    Printing_pairs(arr,n);

    return 0;
}
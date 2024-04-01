   //Here will see why pass size of array in function array

   #include <iostream>
   using namespace std;

   void printarray(int arr[6]) {   //correction: void printarray(int arr[],n)
   
    cout<<"In function the size of array is::" <<sizeof(arr)<<endl;

    int n = sizeof(arr)/sizeof(int);

    for(int i=0;i<n;i++) {
        cout<<arr[i]<<endl;
    }
   }

   int main(){
    int arr [] {1,2,3,4,5,6};

    int n = sizeof(arr)/sizeof(int);

    cout<<"In main the size of array is::" <<sizeof(arr)<<endl;

    for(int i=0;i<n;i++) {
        cout<<arr[i]<<endl;
    }

    printarray(arr);

    return 0;
   }


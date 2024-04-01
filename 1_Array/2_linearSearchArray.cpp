//LINEAR SEARCH ALGORITHM ,TIME COMPLEXITY IS O(N)

#include <iostream>

using namespace std;

int linear_search(int arr[],size_t n,int key){
    for(size_t i=0;i<n;i++) {
        if(arr[i]== key) {      //KEY IDEA
            return i;
        }
        
    }

    return -1;
}
int main() {
    int arr [] {10,15,12,9,6,4,3,10,8};
    int key{};
    cout<<"Plz enter the key you want to find:";
    cin>>key;
    size_t n = sizeof(arr)/sizeof(int);

    int index= linear_search(arr,n,key);
    if(index != -1) {
        cout<<key<<": is present at index: "<<index<<endl;
    } else {
        cout<<key<<" this element is not found";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int arr[10]={1, 8, 3, 6, 5, 4, 9, 2, 8, 12};
    for (int i=0;i<10;i++){
        for (int j=0;j<10-1-i;j++){
            if(arr[j]< arr[j+1]){
            swap(arr[j],arr[j+1]);
            }
        }

    }
    for (int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

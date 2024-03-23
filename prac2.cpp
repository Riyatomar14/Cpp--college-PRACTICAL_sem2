/* write a program to remove duplicate from the array */

#include <iostream>
using namespace std;
void removeduplicate(int arr[],int& n){
    int index = 0;
    for(int i=0;i<n;i++){
        bool isduplicate = false;
        
        for( int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                isduplicate = true;;
                break;
            }
        }
        if(!isduplicate){
            arr[index++]=arr[i];
        }
    }
    n=index;
}
int main() {
    int n;
    int arr[5] = {1,3,4,3,4};
    n = sizeof(arr)/sizeof(arr[0]);
    cout<<"original array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
    removeduplicate(arr,n);
    cout<<"after removing the duplicate from the array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}

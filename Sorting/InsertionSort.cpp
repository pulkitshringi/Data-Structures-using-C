/*
             | Insertion Sort ( Like we sort cards)
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    cin >> arr[i];
    for(i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=key;
    }
    for(i=0;i<n;i++)
    cout << arr[i] <<  " " ;
    return 0;
}
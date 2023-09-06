 // Bubble Sort.
#include <iostream>
using namespace std;
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int main(){
    int n;
    cin >> n;
    int arr[n],temp;
    for(int i=0;i<n;i++)
        cin >> arr[n];
        int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }    
    return 0;
}
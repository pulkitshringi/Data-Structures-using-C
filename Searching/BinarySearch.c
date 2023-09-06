#include <stdio.h>
int binarysearch(int arr[],int n,int no){
int low = 0;
int high = n-1;
int mid;
while(low<=high){
    mid=(low+high/2);
    if(arr[mid]==no)
    return mid;
    else if(no>arr[mid])
    low=mid+1;
    else
    high=mid-1;
}
return -1;
}
int main(){
     printf("Enter n \n");
     int n,i,j,temp;
     scanf("%d",&n);
     int arr[n];
     printf("Enter array\n");
     for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    }
    printf("Sorted Array : ");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
  int low,high,mid,no,found=0;
  printf("\nEnter element to find : ");
  scanf("%d",&no);
 printf("Element found at index %d\n",binarysearch(arr,n,no));
    return 0;
}
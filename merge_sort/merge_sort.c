#include <stdio.h>
#define MAX 1000010

int arr[MAX], tmp[MAX];

void merge_sort(int arr[], int l, int r);

int main(){
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++) scanf("%d", &arr[i]);
    merge_sort(arr, 0, n-1);
    for (int i=0; i<n; i++){
        if(i != 0) printf(" ");
        printf("%d", arr[i]);
    }
    return 0;
}
void merge_sort(int arr[], int l, int r){
    if (l >= r) return;
    int mid = (l+r)/2;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid+1, r);
    int k=0, i=l, j=mid+1;
    while (i<=mid && j<=r){
        if (arr[i] <= arr[j]){
            tmp[k++] = arr[i++];
        }else{
            tmp[k++] = arr[j++];
        }
    }
    while (i<=mid) tmp[k++] = arr[i++];
    while (j<=r) tmp[k++] = arr[j++];
    for (i=l,j=0; i<=r; i++, j++) arr[i] = tmp[j];
}
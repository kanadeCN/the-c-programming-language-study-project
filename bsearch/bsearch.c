// 输入格式
// 第一行包含整数 n
//  和 q
// ，表示数组长度和询问个数。

// 第二行包含 n
//  个整数（均在 1∼10000
//  范围内），表示完整数组。

// 接下来 q
//  行，每行包含一个整数 k
// ，表示一个询问元素。

// 输出格式
// 共 q
//  行，每行包含两个整数，表示所求元素的起始位置和终止位置。

// 如果数组中不存在该元素，则返回 -1 -1。#include <stdio.h>
#define MAX 1000010

int n, m;
int arr[MAX];

int main(){
    scanf("%d %d", &n, &m);
    for (int i=0; i<n; i++) scanf("%d", &arr[i]);
    while(m--){
        int x;
        scanf("%d", &x);
        int l = 0, r = n - 1;
        while(l < r){
            int mid = (l+r)/2;
            if(arr[mid]>=x) r = mid;
            else l = mid + 1;
        }
        if (arr[l] != x) printf("-1 -1\n");
        else{
            printf("%d ", l);
            int l = 0, r = n - 1;
            while(l < r){
                int mid = (l+r+1)/2;
                if(arr[mid]<=x) l = mid;
                else r = mid -1;
            }
            printf("%d\n", l);
        }
    }
    return 0;
}
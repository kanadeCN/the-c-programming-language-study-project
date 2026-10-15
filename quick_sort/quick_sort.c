#include <stdio.h>
#define MAX 1000010

int arr[MAX];

void quick_sort(int arr[], int l, int r);

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  quick_sort(arr, 0, n - 1);
  for (int i = 0; i < n; i++) {
    if (i != 0)
      printf(" ");
    printf("%d", arr[i]);
  }
}
void quick_sort(int arr[], int l, int r) {
  if (l >= r)
    return;
  int x = arr[(l + r) / 2], i = l - 1, j = r + 1;
  while (i < j) {
    do
      (++i);
    while (arr[i] < x);
    do
      (--j);
    while (arr[j] > x);
    if (i < j) {
      int swap = arr[i];
      arr[i] = arr[j];
      arr[j] = swap;
    }
  }
  quick_sort(arr, l, j);
  quick_sort(arr, j + 1, r);
}

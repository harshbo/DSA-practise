#include <stdio.h>

int binarySearch(int arr[], int length, int target) {
  int start = 0;
  int end = length - 1;

  while (start <= end) {
    int mid = (start + end) / 2;
    if (arr[mid] < target) {
      start = mid + 1;
    } else if (arr[mid] > target) {
      end = mid - 1;
    } else {
      // element is found
      return mid;
    }
  }

  // if element is not found return -1
  return -1;
}

int main() {
  int target,n;
  int arr[n];
  printf("Enter the size of an array : ");
  scanf("%d",&n);
  
  printf("Enter the array of numbers : ");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  
  printf("Enter the number to be searched : ");
  scanf("%d",&target);

  printf("Element found at index %d\n", binarySearch(arr, n, target));

  return 0;
}




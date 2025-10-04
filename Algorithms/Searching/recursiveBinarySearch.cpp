#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector <int> arr, int target, int st, int end){
  int mid = st + (end - st)/2;
  if (target < arr[mid]){
    return binarySearch(arr, target, st, mid - 1);
  } 
  if (target > arr[mid]){
    return binarySearch(arr, target, mid + 1, end);
  }
  else {
    return mid;
  }
}

int main(){
  vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
  int target = 12;

  int st = 0;
  int end = arr.size() - 1;

  int ans = binarySearch(arr, target, st, end);
  cout << ans << endl;

  return 0;
}

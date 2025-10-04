#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector <int> arr, int target){
  int st = 0;
  int end = arr.size() - 1;

  while (st <= end){
    int mid = st + (end - st)/2;
    if (arr[mid] == target) return mid;
    if (arr[mid] < target) end = mid - 1;
    if (arr[mid] > target) st = mid + 1;
  }
  return -1;
}

int main(){
  vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
  int target = 12;

  int ans = binarySearch(arr, target);
  cout << ans << endl;

  return 0;
}

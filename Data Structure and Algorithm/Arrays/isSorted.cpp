
#include<bits/stdc++.h>

using namespace std;

bool isSorted(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1])
      return false;
  }

  return true;
}

bool isSorted2(int arr[], int n) {
    int cnt = 0;
    for( int i = 1; i < n; i++ ){
        if( arr[i-1] > arr[i] ){
            cnt++;
        }
    }

    if( arr[n-1] > arr[0] ){
        cnt++;
    }

  return (cnt <= 1);
}

int main() {

  int arr[] = {1, 2, 3, 4, 5}, n = 5;

  printf("%s", isSorted(arr, n) ? "True" : "False");
  cout<<"\n";
  printf("%s", isSorted2(arr, n) ? "True" : "False");

}
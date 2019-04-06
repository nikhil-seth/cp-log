#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;

int main() {
  int n;
  cin >> n;
  long arr[n];
  for (auto &x : arr)
    cin >> x;
  sort(arr, arr + n);
  int am = 0, bm = 0, cm = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        if (arr[i] + arr[j] == arr[k])
          continue;
        else if (arr[i] + arr[j] > arr[k]) {
          if (arr[k] > am || (arr[k] == am && arr[j] > bm) ||
              (arr[k] == am && arr[j] == bm && arr[i] > cm)) {
            am = arr[k];
            bm = arr[j];
            cm = arr[i];
          }
        }
      }
    }
  }
  if (cm == 0 && bm == 0 && am == 0)
    cout << -1;
  else
    cout << cm << ' ' << bm << ' ' << am;
  return 0;
}
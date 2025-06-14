#include <bits/stdc++.h>

int main() {
  int target, arr[] = {};
  int count = sizeof(arr);

  for (int i = 0; i < count; i++) {
    if (arr[i] + arr[i + 1] == target)
      printf("[%d, %d]", i, i + 1);
  }
}

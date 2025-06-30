class Solution {
public:
  int threeSumClosest(vector<int> &nums, int target) {
    int ans = 0, N = nums.size();
    sort(nums.begin(), nums.end());
    int diff_min = 1e9;

    for (int i = 0; i < N - 2; i++) {
      int j = i + 1;
      int k = N - 1;

      while (j < k) {
        int sum = nums[i] + nums[j] + nums[k];
        int diff = abs(sum - target);

        if (diff < diff_min) {
          ans = sum;
          diff_min = diff;
        }

        if (sum < target)
          j++;
        else
          k--;
      }
    }

    return ans;
  }
};

class Solution {
public:
  vector<vector<int>> threeSum(vector<int> &nums) {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());

    int i = 0, N = nums.size();

    while (i < N) {
      int j = i + 1;
      int k = N - 1;

      while (j < k) {
        int sum = nums[i] + nums[j] + nums[k];

        if (sum > 0)
          k--;
        else if (sum < 0)
          j++;
        else {
          ans.push_back({nums[i], nums[j], nums[k]});
          j++;
          k--;

          while (j < k && nums[j] == nums[j - 1])
            j++;
          while (j < k && nums[k] == nums[k + 1])
            k--;
        }
      }
      i++;
      while (i < N && nums[i] == nums[i - 1])
        i++;
    }
    return ans;
  }
};

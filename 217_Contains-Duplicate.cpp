class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    unordered_set<int> s;

    for (auto num : nums) {
      s.insert(num);
    }

    return (size(nums) != size(s));
  }
};

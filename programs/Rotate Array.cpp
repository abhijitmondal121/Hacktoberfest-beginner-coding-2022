class Solution {
public:
  void rotate(vector<int>& nums, int k) {

    int size = nums.size();
    k %= size;

    rotate(nums, 0, size - 1);
    rotate(nums, 0, k - 1);
    rotate(nums, k, size - 1);

  }

private:
  void rotate(vector<int>& nums, int start, int end) {

    while(start < end) {

      int temp = nums[start];
      nums[start++] = nums[end];
      nums[end--] = temp;

    }
  }
};

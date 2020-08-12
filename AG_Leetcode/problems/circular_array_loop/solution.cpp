class Solution {
	int N = 0;
	inline int get_index(vector<int>& nums, int k) {
		return (k + nums[k] + N) % N;
	}
public:
	bool circularArrayLoop(vector<int>& nums) {
		N = nums.size();
		for (int& n : nums) {
			n %= N; // saved lots of effort for this
		}
		for (int i = 0; i < N; i++) {
			if (nums[i] == 0) {
				continue;
			}
			long sign = nums[i] > 0 ? 1 : -1;
			int j = i; // slow pointer
            int k = i; // fast pointer
			while (true) {
				k = get_index(nums, k);
				if (nums[k] * sign <= 0) { // either 0 or different sign, illegal
					break;
				}
				k = get_index(nums, k); // yes, cut and paste, on purpose
				if (nums[k] * sign <= 0) {
					break;
				}
				i = get_index(nums, i); // no need to check the sign of i, cause j has passed this point
				if (i == k) {
					return true;
				}
			}
			j = i; // re-use j. every node between [i, k] are illegal
			while (j != k) {
				int l = j;
				j = get_index(nums, j);
				nums[l] = 0;
			}
		}
		return false;
	}
};
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = -1;

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            reverse(nums.begin(), nums.end());
        } else {
            for (int i = n - 1; i > index; i--) {
                if (nums[i] > nums[index]) {
                    swap(nums[i], nums[index]);
                    break;
                }
            }
            reverse(nums.begin() + index + 1, nums.end());
        }

        for (auto val : nums) {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main() {
    vector<int> nums = {3, 2, 1};

    Solution obj;
    obj.nextPermutation(nums);

  
    return 0;
}


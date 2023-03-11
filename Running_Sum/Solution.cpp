//
// Created by andrey on 11.3.23.
//

#include "Solution.h"

std::vector<int> runningSumTask::Solution::runningSum(std::vector<int> &nums) {
    std::vector<int> ans(nums.size());
    ans[0] = nums[0];
    for (int i = 1; i < (int) nums.size(); ++i) {
        ans[i] = ans[i - 1] + nums[i];
    }
    return ans;
}

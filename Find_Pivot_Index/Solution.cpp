//
// Created by zWX1210739 on 13.03.2023.
//

#include "Solution.h"

int findPivotIndexTask::Solution::pivotIndex(std::vector<int> &nums) {
    int n = (int) nums.size();
    std::vector<int> pref(n + 1);
    pref[0] = 0;
    for (int i = 1; i < (int) nums.size() + 1; ++i) {
        pref[i] = pref[i - 1] + nums[i - 1];
    }
    int pivot = -1;
    for (int i = 0; i < (int) nums.size(); ++i) {
        if (pref[i] == pref[n] - pref[i + 1]) {
            pivot = i;
            break;
        }
    }
    return pivot;
}
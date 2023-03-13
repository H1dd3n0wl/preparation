//
// Created by zWX1210739 on 13.03.2023.
//

#include "Solution.h"
#include "main.h"

void findPivotIndexTask::testing() {
    Solution sol;
    std::map<std::vector<int>, int> tests = {
            {{1, 7, 3, 6, 5, 6}, 3},
            {{1, 2, 3},          -1},
            {{2, 1, -1},         0}
    };
    for (const auto &[test, ans]: tests) {
        assert(sol.pivotIndex(const_cast<std::vector<int> &>(test)) == ans);
    }
    std::cout << "All tests for the \"Find Pivot Index\" problem passed" << std::endl;
}
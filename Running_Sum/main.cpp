//
// Created by andrey on 11.3.23.
//

#include "Solution.h"
#include "main.h"

void runningSumTask::testing() {
    Solution sol;
    std::map<std::vector<int>, std::vector<int>> tests = {
            {{1, 2, 3, 4},    {1, 3, 6, 10}},
            {{1, 1, 1, 1, 1}, {1, 2, 3, 4, 5}}
    };
    for (const auto &[test, ans]: tests) {
        assert(sol.runningSum(const_cast<std::vector<int> &>(test)) == ans);
    }
    std::cout << "All tests for the \"Running Sum\" problem passed" << std::endl;
}

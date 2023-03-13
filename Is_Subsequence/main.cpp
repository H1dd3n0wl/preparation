//
// Created by andrey on 14.3.23.
//

#include "Solution.h"
#include "main.h"

void isSubsequenceTask::testing() {
    Solution sol;
    std::map<std::pair<std::string, std::string>, bool> tests = {
            {{"abc", "ahbgdc"}, true},
            {{"axc", "ahbgdc"}, false}
    };
    for (const auto& [test, ans]: tests) {
        assert(sol.isSubsequence(test.first, test.second) == ans);
    }
    std::cout << "All tests for the \"Is Subsequence\" problem passed" << std::endl;
}

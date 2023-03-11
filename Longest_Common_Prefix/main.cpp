//
// Created by andrey on 11.3.23.
//

#include "Solution.h"
#include "main.h"

void longestCommonPrefixTask::testing() {
    Solution sol;
    std::map<std::vector<std::string>, std::string> tests = {
            {{"flower", "flow",    "flight"}, "fl"},
            {{"dog",    "racecar", "car"},    ""}
    };
    for (const auto &[test, ans]: tests) {
        assert(sol.longestCommonPrefix(const_cast<std::vector<std::string> &>(test)) == ans);
    }
    std::cout << "All tests for the \"Longest Common Prefix\" problem passed" << std::endl;
}

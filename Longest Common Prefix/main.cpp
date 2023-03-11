//
// Created by andrey on 11.3.23.
//

#include "Solution.cpp"
#include <map>
#include <cassert>

using namespace longestCommonPrefixTask;

void longestCommonPrefixTask::testing() {
    std::cout<<"koko2";
    Solution sol;
    std::map<std::vector<std::string>, std::string> tests = {
            {{"flower", "flow",    "flight"}, "fl"},
            {{"dog",    "racecar", "car"},    ""}
    };
    for (const auto &[test, ans]: tests) {
        assert(sol.longestCommonPrefix(const_cast<std::vector<std::string> &>(test)) == ans);
    }
}

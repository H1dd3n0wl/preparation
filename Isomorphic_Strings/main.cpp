//
// Created by andrey on 13.3.23.
//

#include "Solution.h"
#include "main.h"

void isomorphicStringsTask::testing() {
    Solution sol;
    std::map<std::pair<std::string, std::string>, bool> tests = {
            {{"egg", "add"}, true},
            {{"foo", "bar"}, false},
            {{"paper", "title"}, true}
    };
    for (const auto &[test, ans]: tests) {
        assert(sol.isIsomorphic(test.first, test.second) == ans);
    }
    std::cout << "All tests for the \"Isomorphic Strings\" problem passed" << std::endl;
}

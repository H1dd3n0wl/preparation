//
// Created by andrey on 10.3.23.
//

#include "Solution.h"
#include "main.h"

void romanToIntTask::testing() {
    Solution sol;
    std::map<std::string, int> tests = {
            {"III",     3},
            {"LVIII",   58},
            {"MCMXCIV", 1994}
    };
    for (const auto &[test, ans]: tests) {
        assert(sol.romanToInt(test) == ans);
    }
    std::cout << "All tests for the \"Roman to Int\" problem passed" << std::endl;
}

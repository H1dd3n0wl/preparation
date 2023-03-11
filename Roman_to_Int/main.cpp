//
// Created by andrey on 10.3.23.
//

#include "Solution.h"
#include "main.h"

void romanToIntTask::testing() {
    Solution sol;
    std::map<std::string, int> tests = {{"III",     3},
                                        {"LVIII",   58},
                                        {"MCMXCIV", 1994}};
    for (auto &[test, ans]: tests) {
        assert(sol.romanToInt(test) == ans);
    }
}

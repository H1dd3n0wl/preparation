#include <cassert>
#include <map>
#include "Solution.h"

using namespace romanToIntTask;

void romanToIntTask::testing() {
    std::cout<<"koko1";
    Solution sol;
    std::map<std::string, int> tests = {{"III",     3},
                                        {"LVIII",   58},
                                        {"MCMXCIV", 1994}};
    for (auto &[test, ans]: tests) {
        assert(sol.romanToInt(test) == ans);
    }
}

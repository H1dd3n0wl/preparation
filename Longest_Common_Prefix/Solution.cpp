//
// Created by andrey on 11.3.23.
//

#include "Solution.h"

std::string longestCommonPrefixTask::Solution::lcm(std::string &a, std::string &b) {
    std::string ans;
    for (int i = 0; i < std::min((int) a.size(), (int) b.size()); ++i) {
        if (a[i] != b[i]) {
            break;
        } else {
            ans += a[i];
        }
    }
    return ans;
}

std::string longestCommonPrefixTask::Solution::longestCommonPrefix(std::vector<std::string> &strs) {
    std::string ans = strs[0];
    for (int i = 1; i < (int) strs.size(); ++i) {
        ans = lcm(ans, strs[i]);
    }
    return ans;
}

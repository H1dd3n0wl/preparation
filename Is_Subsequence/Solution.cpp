//
// Created by andrey on 14.3.23.
//

#include "Solution.h"

bool isSubsequenceTask::Solution::isSubsequence(std::string s, std::string t) {
    int n = (int) s.size();
    int m = (int) t.size();
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (s[i] == t[j]) {
            ++i;
        }
        ++j;
    }
    return (i == n);
}

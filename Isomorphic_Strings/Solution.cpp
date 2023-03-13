//
// Created by andrey on 13.3.23.
//

#include "Solution.h"

bool isomorphicStringsTask::Solution::isIsomorphic(std::string s, std::string t) {
    std::string new_s;
    std::string new_t;
    std::map<char, char> mp;
    int n = (int) s.size();
    for (int i = 0; i < n; ++i) {
        if (mp.find(s[i]) == mp.end()) {
            mp[s[i]] = t[i];
        }
        new_s += mp[s[i]];
    }
    mp.clear();
    for (int i = 0; i < n; ++i) {
        if (mp.find(t[i]) == mp.end()) {
            mp[t[i]] = s[i];
        }
        new_t += mp[t[i]];
    }
    return (new_s == t && new_t == s);
}

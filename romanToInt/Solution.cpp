//
// Created by andrey on 10.3.23.
//

#include "Solution.h"

#include <map>

int Solution::romanToInt(const std::string& s) {
    std::map<char, int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
    int ans = 0;
    int length = (int) s.size();
    int i = 0;
    while (i < length) {
        switch (s[i]) {
            case 'I':
                if (i == length - 1) {
                    ans += m[s[i]];
                } else {
                    if (s[i + 1] == 'V') {
                        ans += 4;
                        i += 2;
                        break;
                    } else if (s[i + 1] == 'X') {
                        ans += 9;
                        i += 2;
                        break;
                    } else {
                        ans += m[s[i]];
                    }
                }
                ++i;
                break;
            case 'X':
                if (i == length - 1) {
                    ans += m[s[i]];
                } else {
                    if (s[i + 1] == 'L') {
                        ans += 40;
                        i += 2;
                        break;
                    } else if (s[i + 1] == 'C') {
                        ans += 90;
                        i += 2;
                        break;
                    } else {
                        ans += m[s[i]];
                    }
                }
                ++i;
                break;
            case 'C':
                if (i == length - 1) {
                    ans += m[s[i]];
                } else {
                    if (s[i + 1] == 'D') {
                        ans += 400;
                        i += 2;
                        break;
                    } else if (s[i + 1] == 'M') {
                        ans += 900;
                        i += 2;
                        break;
                    } else {
                        ans += m[s[i]];
                    }
                }
                ++i;
                break;
            default:
                ans += m[s[i]];
                ++i;
                break;
        }
    }
    return ans;
}

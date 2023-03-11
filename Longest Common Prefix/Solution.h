//
// Created by andrey on 11.3.23.
//

#ifndef PREPARATION_SOLUTION_H
#define PREPARATION_SOLUTION_H

#include <iostream>
#include <vector>
namespace longestCommonPrefixTask {
    class Solution {
    private:
        std::string lcm(std::string &a, std::string &b);

    public:
        std::string longestCommonPrefix(std::vector<std::string> &strs);
    };

    void testing();
}

#endif //PREPARATION_SOLUTION_H

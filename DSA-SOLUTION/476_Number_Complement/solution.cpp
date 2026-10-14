// LeetCode 476. Number Complement
// Link: https://leetcode.com/problems/number-complement/
// Approach: build a mask that has the same number of bits as `num` (all 1s),
// then XOR `num` with the mask to flip all bits.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        if (num == 0) return 1; // edge case
        int mask = 1;
        while (mask <= num) mask <<= 1; // shift until mask is > num
        mask -= 1; // now mask has all 1s for the bit-length of num
        return num ^ mask;
    }
};

int main() {
    Solution sol;
    int n;
    // Read numbers from stdin and print their complements (useful for quick testing)
    while (cin >> n) {
        cout << sol.findComplement(n) << '\n';
    }
    return 0;
}

// 0292. Nim Game
// LeetCode: https://leetcode.com/problems/nim-game/
// C++ solution — O(1) time, O(1) space

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canWinNim(int n) {
        return (n % 4) != 0;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    Solution s;
    cout << (s.canWinNim(n) ? "true" : "false") << '\n';
    return 0;
}

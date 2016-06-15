class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int t = 0;
        while (m != n) {
            m = m >> 1;
            n = n >> 1;
            t++;
        }
        return m << t; // 最后要填回去
    }
};
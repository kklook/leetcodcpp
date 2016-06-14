class Solution {
public:
    bool isHappy(int n) {
        const int MAX = 10000;
        int time = 0;
        while (n != 1 and time < MAX)
        {
            time++;
            int sum = 0;
            while (n)
            {
                int t = n % 10;
                n = n / 10;
                sum += t * t;
            }
            n = sum;
        }
        if (n == 1)
            return true;
        else
            return false;
    }
};
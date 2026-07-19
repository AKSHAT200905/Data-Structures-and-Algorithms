#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        bool negative = (dividend < 0) != (divisor < 0);
        long absDividend = labs((long)dividend);
        long absDivisor = labs((long)divisor);
        long quotient = 0;
        while (absDividend >= absDivisor) {
            long temp = absDivisor;
            long multiple = 1;
            while (absDividend >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            absDividend -= temp;
            quotient += multiple;
        }
        if (negative)
            quotient = -quotient;
        if (quotient > INT_MAX)
            return INT_MAX;
        if (quotient < INT_MIN)
            return INT_MIN;
        return (int)quotient;
    }
};
int main() {
    Solution sol;
    int dividend = 43;
    int divisor = 5;
    int result = sol.divide(dividend, divisor);
    cout << "Dividend: " << dividend << endl;
    cout << "Divisor: " << divisor << endl;
    cout << "Quotient: " << result << endl;
    return 0;
}
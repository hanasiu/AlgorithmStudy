#include <iostream>

using namespace std;

bool IsPalindromeNumber(int x)
{
    if (x <= 0)
    {
        return x == 0;
    }

    const int num_digits = static_cast<int>(floor(log10(x))) + 1;
    int msd_mask = static_cast<int>(pow(10, num_digits - 1));
    for (int i = 0; i < (num_digits / 2); ++i)
    {
        if (x / msd_mask != x % 10)
        {
            return false;
        }
        x %= msd_mask;
        x /= 10;
        msd_mask /= 100;
    }
    return true;
}

int main() {
    cout << IsPalindromeNumber(43355334) << endl;
    return 0;
}
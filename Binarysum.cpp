#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int ans = 0;
    int power = 1;

    for (int i = 1; i <= 5; i++)
    {
        sum += i;
    }

    while (sum > 0)
    {
        int paritydigit = sum % 2;
        ans += paritydigit * power;
        power *= 10;
        sum /= 2;
    }

    cout << ans;

    return 0;
}
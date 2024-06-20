#include <iostream>
using namespace std;

int main()
{
    int i, n, c;
    for (n = 1; n <= 100; n++)
    {
        c = 0; // Reset the count for each number
        for(i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                c++;
            }
        }
        if (c == 2) // If there are exactly two divisors (1 and n), n is prime
        {
            cout << n << endl;
        }
    }
    return 0;
}

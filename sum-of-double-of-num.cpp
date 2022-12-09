#include <iostream>

using namespace std;

int main()
{
    int i = 0, num[i], remain = 0, tmp;
    unsigned long long int sum = 0;

    do
    {
        cin >> tmp;
        num[i] = tmp;

        while (num[i] > 0)
        {
            remain = (remain * 10) + (num[i] % 10);
            num[i] = num[i] / 10;
        }
        sum += remain * 2;
        remain = 0;
    } while (tmp > 0);

    cout << sum;
    return 0;
}
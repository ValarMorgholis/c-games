#include <iostream>

using namespace std;

int main()
{
    int n, m, count = 0;
    char num;

    cin >> n >> m;

    for (int i = n; i > 0; i--)
    {
        for (int j = m; j > 0; j--)
        {
            cin >> num;
            if (num == '*')
                count++;
        }
    }

    cout << count << endl;
    return 0;
}
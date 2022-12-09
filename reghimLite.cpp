#include <bits/stdc++.h>

using namespace std;

int main()
{
    int red = 0, yellow = 0, green = 0, i = 0;
    char ch[i];

    for (; i < 5; i++)
    {
        cin >> ch[i];
        // scanf("%c", &ch[i]);
        switch (ch[i])
        {
        case ('R'):
            red++;
            break;

        case ('Y'):
            yellow++;
            break;

        case ('G'):
            green++;
            break;
        }
    }
    if ((red >= 3 || yellow >= 5) || (red >= 2 && yellow >= 2))
        cout << "nakhor lite" << endl;

    else
        cout << "rahat baash" << endl;

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

string checkSum(int a, int b, int c)
{
    int ab = a + b;
    int bc = b + c;
    int ac = a + c;

    if (ab == c || ac == b || bc == a)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    int input;
    cin >> input;

    while (input--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        string ans = checkSum(a, b, c);
        cout << ans << endl;
    }

    return 0;
}

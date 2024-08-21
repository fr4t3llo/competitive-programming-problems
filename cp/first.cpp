#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int i;
    int n;
    cin >> i;cin.ignore();
    while (i != 0 )
    {
        cin >> n;
        if (n >= 0)
        {
            n+=2;
        }
        cout << n;
        if (i == 1)
            break;
        cout << " ";
        i--;
    }
}
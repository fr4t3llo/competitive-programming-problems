#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int i;
    int j;
    int res = 0;
    int test;
    cin >> i >> j;
    while (i != 0)
    {   
        cin >> test;
        if (test <= j)
            res++;
        else
            res+=2;
        i--;
    }
    cout << res;
}
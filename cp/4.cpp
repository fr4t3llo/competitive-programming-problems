

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
    int n;
    int n2;
    stack<int> s;
    cin >> i;
    while(i != 0)
    {
        cin >> n;
        if (n == 1)
        {
            cin >> n2;
            s.push(n2);
        }
        else if (n == 2 && !s.empty())
            s.pop();
        else if(n == 3)
        {
            if (s.empty())
                cout << "Empty!" << "\n";
            else 
                cout << s.top() << "\n";
        }
        i--;   
    }
}
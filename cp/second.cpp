#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    vector<int> v2;
    int i;
    int line;
    int j;
    int line2;
    cin >> i;cin.ignore();
    while (i != 0)
    {
        cin >> line;cin.ignore();
        v.push_back(line);
        i--;
    }
    cin >> j;
    while (j != 0)
    {
        cin >> line2;cin.ignore();
        v2.push_back(line2);
        j--;
    }

    vector<int> r;
    for(auto &element: v)
    {
        if (count(v2.begin(), v2.end(), element) <= 0)
            r.push_back(element);
    }
    cout << r.size() << endl;;
        for (auto itr : r){
    cout << itr << " ";}
}
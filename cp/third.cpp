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
    vector<int> v;
    while (i !=0)
    {
        cin >> n;cin.ignore();
        v.push_back(n);
        i--;
    }
    sort(v.begin(), v.end());
    for (auto itr : v){
        cout << itr << " ";
    }
}
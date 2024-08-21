#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <map>

#include <stack>
#include <algorithm>

using namespace std;


pair<string, int> findDup(const vector<string>& myv) {
    map<string, int> test;
    for (vector<string>::const_iterator it = myv.begin(); it != myv.end(); ++it) {
        test[*it]++;
    }

    int maxCount = 0;
    vector<string> dup_word;
    for (map<string, int>::const_iterator it = test.begin(); it != test.end(); ++it) {
        if (it->second > maxCount) {
            maxCount = it->second;
            dup_word.clear();
            dup_word.push_back(it->first);
        } else if (it->second == maxCount) {
            dup_word.push_back(it->first);
        }
    }

    if (dup_word.size() > 1) {
        sort(dup_word.begin(), dup_word.end(), greater<string>());
        return make_pair(dup_word[0], maxCount);
    } else {
        return make_pair(dup_word[0], maxCount);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int i;
    cin >> i;
    vector<string> v;

    string s;
    while (i != 0)
    {
        cin >> s;
        v.push_back(s);
        // it = mymap.find(s)!=mymap.end();
        // if(it!=mymap.end()){
        //     mymap[it]->second += 1;
        // }
        // else 
        //     mymap.insert({s, 1});
        i--;
    }
    // for (auto element : v) {
    //     cout << element << " ";
    // }
   pair<string, int> result = findDup(v);
    cout <<  result.first  << " " << result.second << endl; 
}
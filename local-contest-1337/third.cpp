#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;


int main() {
    int N, M;
    cin >> N >> M;

    vector<int> likaynin(M);
    for (int i = 0; i < M; i++)
    {
        cin >> likaynin[i];
    }

    sort(likaynin.begin(), likaynin.end());


    vector<int> li_khassin;

   
    int li_hadro = 1;
    for (int i = 0; i < M; i++) {
        if (likaynin[i] != li_hadro)
        {
            while (li_hadro < likaynin[i])
            {
                li_khassin.push_back(li_hadro);
                li_hadro++;
            }
        }
        li_hadro++;
    }

    while (li_hadro <= N) {
        li_khassin.push_back(li_hadro);
        li_hadro++;
    }


    if (li_khassin.empty()) {
        cout << "All students are present" << endl;
    } else {

        for (int student : li_khassin) {
            cout << student << " ";
        }
        cout << endl;
    }

    return 0;
}


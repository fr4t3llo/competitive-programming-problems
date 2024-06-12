#include <iostream>
#include <string>

using namespace std;

int ways(int N, int K, string S)
{
    int pos = 0;
    for (int i = 0; i <= N - K; i++) 
    {
        bool valid = true;
        for (int j = i; j < i + K; j++)
        {
            if (S[j] == '1')
            {
                valid = false;
                break;
            }
        }
        if (valid)
            pos++;
    }
    return pos;
}
int main()
{
    int n;
    int k;
    int i = 0;
    string line;
    scanf("%d %d", &n, &k);cin.ignore();
    getline(cin, line);
    cout << ways(n, k, line);

    return (0);
}
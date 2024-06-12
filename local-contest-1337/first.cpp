#include <iostream>
#include <string>

using namespace std;

bool contains_all_characters( const std::string &str, const std::string &prt )
{
    for ( char c : prt )
    {
        if ( str.find( c ) == std::string::npos )
        {
            return false;
        }
    }
    return true;
}

int main(int ac, char **av)
{
    int choices;
    int len;
    string ans = "ANSAMBLE";
    cin >> choices; cin.ignore();
    string s; 

    while (choices != 0)
    {
        
        cin >> len;cin.ignore();
        getline(cin, s);cin.ignore();
        if (!contains_all_characters(s, ans))
            cout << "TAKE IT" << endl;
        else 
            cout << "LEAVE IT" << endl;
        choices--;
    }

    return (0);
}
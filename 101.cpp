#include <bits/stdc++.h>

using namespace std;

vector <int> table[26];
int move_onto(int a, int b)
{
    if(table[a].size() != 0)
    {
       table[b].push_back(a);
    }

}

int main()
{
    int n, a, b;
    string command, place;

    cin >> n;

    while(cin >> command)
    {
        if(command == "quit")break;




    }
    return 0;
}

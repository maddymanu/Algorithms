#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cassert>
#include <algorithm>
using namespace std;

int n, m;

vector<string> strVector;

int findWays(int x, int y, std::string str)
{
    if (x <= n && y <= m)
    {   
        if (x == n && y == m)
        {
            //std::cout << "Path End : " << str << std::endl;
            strVector.push_back(str);
            return 1;
        }
        int right = findWays(x + 1, y, str+"H");
        int down = findWays(x, y + 1, str+"V");
        return (right + down);
    }
    else
    {
        return 0;
    }
}

int main()
{

    long long int T;
    int K;
    cin >> T;
    assert (T>=1 && T<=100000);
    while(T--) {
        strVector.clear();
        cin >> n >> m >> K;

        assert (n>=1 && n<=10);
        assert (m>=1 && m<=10);

        int count = findWays(0,0,"");
        sort(strVector.begin() , strVector.end());
        cout << strVector.at(K) << endl;
    }

    return 0;
}

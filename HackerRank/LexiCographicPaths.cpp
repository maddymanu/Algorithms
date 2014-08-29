#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int n, m;

vector<string> strVector;

int findWays(int x, int y, std::string str)
{
    if (x <= n && y <= m)
    {   
        if(!(x==0 && y==0)) {
            //str += "(";
            //str += std::to_string(x);
            //str += ", ";
            //str += std::to_string(y);
            //str +="), ";
        }
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
    // n = 2;
    // m = 2;
    // int count = findWays(0,0,"");
    // sort(strVector.begin() , strVector.end());
    // cout << strVector.at(2) << endl;
    // 
    long long int T;
    int K;
    cin >> T;
    while(T--) {
        strVector.clear();
        cin >> n >> m >> K;
        int count = findWays(0,0,"");
        sort(strVector.begin() , strVector.end());
        cout << strVector.at(K) << endl;
    }

    return 0;
}

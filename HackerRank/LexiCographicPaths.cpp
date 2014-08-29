#include <iostream>
#include <string>
#include <sstream>

int n, m;

int findWays(int x, int y, std::string str)
{
    if (x <= n && y <= m)
    {
        str += "(";
        str += std::to_string(x);
        str += ", ";
        str += std::to_string(y);
        str +="), ";
        if (x == n && y == m)
        {
            std::cout << "Path End : " << str << std::endl;
            return 1;
        }
        int right = findWays(x + 1, y, str);
        int down = findWays(x, y + 1, str);
        return (right + down);
    }
    else
    {
        return 0;
    }
}

int main()
{
    n = 2;
    m = 2;
    std::cout << "Paths :\n";
    int count = findWays(0,0,"");
    std::cout << " Total no of Paths : " << count << std::endl;
    return 0;
}

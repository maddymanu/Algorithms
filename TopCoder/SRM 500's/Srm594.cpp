#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Div2 250
class FoxAndClassroom
{
public:
	
int gcd(int a, int b)
{
    return ( (b == 0) ? a : gcd(b, a % b) );
}

string ableTo(int n, int m)
{
    return ( (gcd(n,m) == 1) ? "Possible" : "Impossible" );
}
	
};
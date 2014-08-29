#include <iostream>
using namespace std;

int sum = 0;

void print_each_digit(long long int x, long long int dup)
{
    if(x > 10)
       print_each_digit(x / 10 , dup);

    int digit = x % 10;

    //std::cout << digit << '\n';
    if(dup%digit == 0)
    	sum+=1;
}

int main() {
	int T;
	long long int N, copy ;  
	cin >> T;
	while(T--) {

		cin >> N;
		copy = N;
		
		print_each_digit(N , copy);
		cout << sum << endl;

	}
}
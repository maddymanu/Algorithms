#include <iostream>
#include <string>
#include <array>
using namespace std;

int main(int argc, char const *argv[])
{
	string str1, str2;
	cin>>str1 >> str2;


	int A[26],B[26];
	for(int i=0 ; i<26 ; i++) {
		A[i] = B[i] = 0;
	}
	for(int i=0 ; i< str1.length() ; i++) {
		A[str1.at(i)-'a']++;
	}
	for(int i=0 ; i< str2.length() ; i++) {
		B[str2.at(i)-'a']++;
	}
	int ans = 0;
	for (int i = 0; i < 26; ++i)
	{
		ans+= max(A[i] , B[i]) - min(A[i],B[i]);
	}
	cout << ans << endl;
	return 0;
}
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <assert.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <stack>
#include <string.h>

using namespace std;

//Twins -- 160A
// int main(int argc, char const *argv[])
// {
// 	int n ; 
// 	cin >>n;
// 	int arr[n];
// 	int sum = 0;
// 	for(int i=0 ; i<n ; i++){
// 		cin >> arr[i];
// 		sum += arr[i];
// 	}

// 	if(n==1) {

// 		cout << 1 << endl;
// 		return 0;
// 	}


// 	sort(arr , arr+n , greater<int>());
// 	int ctr = 0;
// 	int currSum = 0;
// 	int index = 0;
// 	while(currSum <= sum/2){
// 		currSum += arr[index];
// 		index++;
// 	}

// 	cout << index << endl;

// 	return 0;
// }




//AmusingJoke -- 141A

int main(int argc, char const *argv[])
{
	int arr1[26] , arr2[26];
	memset(arr1 , 0 , sizeof(arr1));
	memset(arr2 , 0 , sizeof(arr2));
	string s1,s2,s3;
	cin >> s1 >> s2 >> s3;
	for(int i=0 ; i<s1.size() ; i++) {
		arr1[s1[i]-'A']++;
	}
	for(int i=0 ; i<s2.size() ; i++) {
		arr1[s2[i] - 'A']++;
	}
	for(int i=0 ; i<s3.size() ; i++) {
		arr2[s3[i] - 'A']++;
	}

	for(int i=0 ; i<26 ; i++) {
		if(arr1[i] != arr2[i]) {
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;
	return 0;
}


































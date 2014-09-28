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

// int main(int argc, char const *argv[])
// {
// 	int arr1[26] , arr2[26];
// 	memset(arr1 , 0 , sizeof(arr1));
// 	memset(arr2 , 0 , sizeof(arr2));
// 	string s1,s2,s3;
// 	cin >> s1 >> s2 >> s3;
// 	for(int i=0 ; i<s1.size() ; i++) {
// 		arr1[s1[i]-'A']++;
// 	}
// 	for(int i=0 ; i<s2.size() ; i++) {
// 		arr1[s2[i] - 'A']++;
// 	}
// 	for(int i=0 ; i<s3.size() ; i++) {
// 		arr2[s3[i] - 'A']++;
// 	}

// 	for(int i=0 ; i<26 ; i++) {
// 		if(arr1[i] != arr2[i]) {
// 			cout << "NO" << endl;
// 			return 0;
// 		}
// 	}

// 	cout << "YES" << endl;
// 	return 0;
// }



//Business trip -- 149 A

// int main(int argc, char const *argv[])
// {
// 	int k;
// 	cin >> k;
// 	int arr[12];
// 	for(int i=0 ; i<12 ; i++) {
// 		cin >> arr[i];
// 	}
// 	sort(arr, arr+12 , greater<int>());
// 	int index = 0;
// 	int sum = 0;
// 	while((sum < k) && (index<12)) {
// 		sum += arr[index];
// 		index++;

// 	}
// 	if(sum < k) {
// 		cout << "-1" << endl;
// 		return 0;
// 	}
// 	cout << index << endl;
// 	return 0;
// }



//Dragons -- 320A



// int main()
// {
//     const int maxn = 1000;

// 	pair<int, int> arr[maxn];

//     int s, n; cin >> s >> n;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i].first >> arr[i].second;
//     }

//     sort(arr, arr + n);

//     for (int i = 0; i < n; i++)
//     {
//         if (s <= arr[i].first)
//         {
//             cout << "NO\n";
//             return 0;
//         }
//         else
//         {
//             s += arr[i].second;
//         }
//     }
//     cout << "YES\n";
// }

//459B Pashmak and Flowers

// int main(int argc, char const *argv[])
// {
// 	long long N;
// 	cin >>  N;
// 	long long arr[N];
// 	for(int i=0 ; i<N ; i++) {
// 		cin >> arr[i];
// 	}

// 	long long mx = *max_element(arr , arr+N);
// 	long long mn = *min_element(arr , arr+N);

// 	long long ct1 = count(arr,arr+N,mx);
// 	long long ct2 = count(arr,arr+N,mn);
// 	cout << mx-mn << " " ;//<< ct2*ct1 << endl;
// 	if(mx != mn) {
// 		cout << ct1*ct2 << endl;
// 	}else {
// 		cout << "1" << endl;
// 	}
// 	return 0;
// }



//439B Devu, the Dumb Guy

int main(int argc, char const *argv[])
{
	long long n, x;
	cin >> n >> x;
	long long arr[n];
	for(int i=0; i<n ; i++) {
		cin >> arr[i];
	}

	sort(arr , arr+n);
	long long ans = 0;
	for(int i=0 ; i<n ; i++) {
		ans += arr[i]*x;
		if(x>1) {
			x--;
		}
	}
	cout << ans << endl;

	return 0;
}





























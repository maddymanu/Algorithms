#include <iostream>
#include <algorithm>    
using namespace std;

int main() {
	long long int i,n,k,min=999999999,temp;
	cin >> n >> k;
	long long int arr[n];
	for(i=0 ; i<n ; i++) {
		cin>>arr[i];
	}
	sort(arr, arr+n);

	for(i=0 ; i<=n-k ; i++) {
		temp = arr[i+k-1]-arr[i];
		if(temp < min)
			min=temp;
	}
	cout << min << endl;
	return 0;
}

//Staring Palantir. 

//Compleetd Palantir, was pretty good. 
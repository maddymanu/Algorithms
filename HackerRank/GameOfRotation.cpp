#include <iostream>
using namespace std;

int main() {
	long long int n,i;
    cin>>n;
    long long int arr[n];
    for(i=0 ; i<n ; i++) {
    	cin >> arr[i];
    }
    long long sum_arr=0, prod_arr;
    for(i=0 ; i<n ; i++) {
    	sum_arr += arr[i];
    	prod_arr += (i+1)*arr[i];
    }
    long long int output = prod_arr;

    for (i = 0; i < n; ++i){
    	prod_arr = prod_arr + sum_arr;
    	prod_arr = prod_arr - arr[n-1-i]*n;
    	if(prod_arr > output)
    		output = prod_arr;
    }
    cout << output << endl;
    return 0;
}
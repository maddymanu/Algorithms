#include <iostream>
#include <stdio.h>
#include <assert.h> 
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> L; 

void printAllSubArrays() {
	

}

int main() {
	int T ; 
	cin >> T;
	int ans = 0;
	while(T--) {
		int N;
		cin >> N;
		int arr[N];
		

		for(int i=0 ; i<N ; i++) {
			cin>>arr[i];
		}

		int currentSubset = pow(2,N) - 1;; 
		int tmp; 
		while (currentSubset) {
			printf("("); 
			tmp = currentSubset;
			for (int i=0 ; i<N ; i++) {
				if(tmp & 1) {
					ans = ans xor arr[i];
					//cout << ans << endl;
				    printf("%d ", arr[i]); 
				}
				tmp >>= 1; 
			}
			printf(")\n"); 
			currentSubset--; 
		}

		// for(int i=0 ; i<N ; i++) {
		// 	cout<<arr[i]<<endl;
		// }
	}
	cout << ans << endl;
}
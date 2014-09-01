#include <iostream>
#include <algorithm>
using namespace std;

void print(int a[],int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i];
	cout<<endl;
}

int minimum(int a[],int n)
{
	int min=a[0];
	for(int i=1;i<n;i++)
		if(a[i]>0 && min>a[i] )
			min=a[i];
	return min;
}

int main(int argc, char const *argv[])
{
	int n, cnt, m, i, min;
	cin >> n;
	int arr[n+1];
	i=0;
	while(i<n) {
		cin >> arr[i++];
	}
	sort(arr , arr+n);
	m=0;
	while(m<n) {
		cnt = 0;
		min=arr[m];
		for (i = m; i < n; ++i)
		{
			if(arr[i]  > 0) {
				arr[i]-=min;
				cnt++;
				if(arr[i]==0)
					m++;
			}
		}
		cout << cnt << endl;
	}


	return 0;
}
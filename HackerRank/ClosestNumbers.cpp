#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n;
    long long int min[2];
    long long int mi;

    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    mi=a[1]-a[0];
    for(long long int i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]<mi)
        {
            min[0]=a[i];
            min[1]=a[i+1];
            mi=a[i+1]-a[i];
        }
    }
    for(long long int i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]==mi)
        {
            cout<<a[i]<<" "<<a[i+1] << " ";
        }
    }
    return 0;
}
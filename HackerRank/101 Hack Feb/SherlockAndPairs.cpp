#include<stdio.h>
#include<assert.h>
#include<string.h>
typedef long long int ll;
int bucket[1000001];
int main()
{
    ll ans;
    int test,N,x;
    scanf("%d",&test);
    assert(test<=10);
    while(test--){
        ans=0;
        memset(bucket,0,sizeof(bucket));
        scanf("%d",&N);
        assert(N>=1 && N<=100000);
        while(N--){
            scanf("%d",&x);
            assert(x>=1 && x<=1000000);
            bucket[x]++;
        }
        for(int i=1;i<=1000000;i++){
            if(bucket[i]>=2){
                ans+=(ll)bucket[i]*(ll)(bucket[i]-1);
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
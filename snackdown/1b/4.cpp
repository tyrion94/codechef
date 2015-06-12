//ashish192

#include<bits/stdc++.h>

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define all(a) a.begin(),a.end()

using namespace std;
typedef long long int LL;
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector< PII > VPII;

long long int gcd(long long int m, long long int n){if(n == 0) return m;return gcd(n, m % n);}  
long long int fastpow(long long int a, long long int b,long long int m){long long int r = 1;while (b > 0){if (b % 2 == 1)r = (r * a) % m;b = b >> 1;a = (a * a) % m;}return r;}
int prime(long long int x){if(x==1)return 0;if(x<=3)return 1;if(x%6==1||x%6==5){long long int y=sqrt(x),i;for(i=2;i<=y;i++)if(x%i==0)return 0;return 1;} return 0;}

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

        long long int b[1000010],c[1000010];
int main()
{
    int test; scanf("%d",&test);
    while(test--)
    {
        for(long long int i = 0 ; i<1000000 ; i++)
        {
            b[i] = 0;
            c[i] = 0;
        }
        long long int n,max=0,min=0; 
        scanf("%lld",&n);
        for(long long int i = 0 ;i < n ; i++)
        {
            long long int x;
            scanf("%lld",&x);
            b[x] = 1;
            c[x] = 1;
        }
        for(long long int i = 1; i<=1000000; i++)
        {
            if(c[i] == 1 && c[i+1] == 1)
            {
                c[i] = 0;
                c[i+1] = 0;
                max++;
            }
            else if(c[i] == 1)
            {
                c[i] = 0;
                max++;
            }
        }
        for(long long int i = 1 ; i<=1000000 ; i++)
        {
            if(b[i-1] == 1 && b[i+1] == 1 && b[i] == 1)
            {
                b[i] = b[i-1] = b[i+1] = 0;
                min ++;
            }
            
        }
        for(long long int i = 1 ; i<=1000000 ; i++)
        {
            if(b[i] == 1 && b[i+1]== 1)
            {
                b[i] = 0;
                b[i+1] = 0;
                min++;
            }
            else if(b[i] == 1)
            {
                b[i] = 0;
                min++;
            }
        }
        cout<<min<<" "<<max<<endl;


    } 

    return 0;
}


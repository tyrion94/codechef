//ashish192

#include<bits/stdc++.h>
#include<iostream>
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define all(a) a.begin(),a.end()

using namespace std;
        long long int b[1000010],c[1000010];
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        for(long long int i = 0 ; i<1000000 ; i++)
        {
            b[i] = 0;
            c[i] = 0;
        }
        long long int n,max=0,min=0; 
        cin >> n;
        for(long long int i = 0 ;i < n ; i++)
        {
            long long int x;
            cin >> x;
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


///////////////////////////////////////
//    Author : Dhruv Khattar        //
/////////////////////////////////////

#include<bits/stdc++.h>

#define mod 1000000007
#define rep(i,j,N) for( int i=j ; i<N ; i++ )
#define rrep(i,N,j) for( int i=N-1 ; i>=j ; i-- )
#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)
#define pi(i) printf("%d",i)
#define pl(i) printf("%lld",i)
#define pin(i) printf("%d\n",i)
#define pln(i) printf("%lld\n",i)
#define ps printf(" ")
#define pn printf("\n")
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sz(a) int((a).size())
#define tr(c,i) for(typeof((c).begin())i = (c).begin(); i != (c).end(); i++) 
#define all(a) (a).begin(),(a).end()
#define present(a,x) (find(all(a),x) != (a).end())
#define cpresent(c,x) ((c).find(x) != (c).end()) 

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector <ll> vll;
typedef pair<int,int> ii;
typedef vector<ii> vii;

int main()
{
    int n,k;
    si(n);si(k);
    if( k > (n*n)/2+n%2 )
        printf("NO\n");
    else
    {
        printf("YES\n");
        char a[105][105];
        rep(i,0,n)
        {
            rep(j,0,n)
            {
                if( k>0 )
                {
                    if(i%2==0 && j%2==0)
                    {
                        printf("L");
                        k--;
                    }
                    else if(i%2==1 && j%2==1)
                    {
                        printf("L");
                        k--;
                    }
                    else
                        printf("S");
                }
                else
                    printf("S");
            }
            pn;
        }
    }
    return 0;
}

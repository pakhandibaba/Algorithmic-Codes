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
#define rall(a) (a).rbegin(),(a).rend()
#define present(a,x) (find(all(a),x) != (a).end())
#define cpresent(c,x) ((c).find(x) != (c).end()) 

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector <ll> vl;
typedef pair<int,int> ii;
typedef vector<ii> vii;

int main()
{
    int n;
    int a[102];
    int sum = 0;
    si(n);
    rep(i,0,n)
    {
        si(a[i]);
        sum += a[i];
    }
    int yo = 2*sum/n;
    int f[102] = {0};
    rep(i,0,n-1)
    {
        if (!f[i])
        {
            rep(j,i+1,n)
            {
                if (!f[j])
                {
                    if (a[i]+a[j] == yo)
                    {
                        pi(i+1);ps;pin(j+1);
                        f[i] = 1;
                        f[j] = 1;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
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
    si(n);

    ll x1,x2;
    sl(x1);sl(x2);

    set<pair<ll,ll> > a;

    ll x,y;

    ll yo1,yo2;
    rep(i,0,n)
    {
        sl(x);sl(y);
        yo1 = x*x1+y;
        yo2 = x*x2+y;

        a.insert(mp(yo1,yo2));
    }

    yo2=-10000000000000000;

    tr(a,it)
    {
        if(yo2 > it->ss)
        {
            printf("YES\n");
            return 0;
        }

        yo2=it->ss;
    }

    printf("NO\n");

    return 0;
}

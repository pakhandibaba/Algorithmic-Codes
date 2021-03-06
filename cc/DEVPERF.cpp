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
    int t,n,m;
    char a[1003][1003];

    si(t);

    while( t-- )
    {
        int lh,mh,lw,mw;
        si(n);si(m);
        
        lh = n;
        lw = m;
        mh = mw = -1;
        
        rep(i,0,n)
        {
            getchar();
            rep(j,0,m)
            {
                scanf("%c",&a[i][j]);
                if( a[i][j] == '*' )
                {
                    lh = min(lh,i);
                    lw = min(lw,j);
                    mh = max(mh,i);
                    mw = max(mw,j);
                }
            }
        }

        int ans = 10000;

        rep(i,0,n)
            rep(j,0,m)
            ans = min(ans,max(i-lh,max(j-lw,max(mh-i,mw-j))));

        if( mh == -1 )
            pin(0);
        else
            pin(1+ans);
    }
    return 0;
}

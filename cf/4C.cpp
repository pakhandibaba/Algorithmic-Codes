///////////////////////////////////////
//    Author : Dhruv Khattar        //
/////////////////////////////////////

#include<bits/stdc++.h>

#define rep(j,N) for( int i=j ; i<N ; i++ )
#define rrep(N,j) for( int i=N-1 ; i>=j ; i-- )
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
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define all(a) (a).begin(),(a).end()
#define present(a,x) (find(all(a),x) != (a).end()) 

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector <ll> vll;
typedef pair<int,int> ii;
typedef vector<ii> vii;

int main()
{
    int n;
    si(n);

    map<string,set< int > > m;
    rep(0,n)
    {
        string a;
        cin>>a;
        if( m.find(a)==m.end() )
        {
            printf("OK\n");
            m[a].insert(0);
        }
        else
        {
            cout<<a<<sz(m[a])<<endl;
            m[a].insert(sz(m[a]));
        }
    }
    return 0;
}

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
    char a[100005] ;

    scanf("%s",a);

    int l = strlen(a);
    int flag = 0;
    int con = 0;
    vector<char> v;
    rep(i,0,l)
    {
        if (flag == 1)
            v.pb(a[i]);
        else if (a[i] != 'a')
        {
            v.pb(a[i]-1);
            con = 1;
        }
        else if (con == 1)
        {
            flag = 1;
            v.pb(a[i]);
        }
        else
        {
            v.pb(a[i]);
        }
    }
    if (con != 1)
    {
        v[l-1] = 'z';
    }
    rep(i,0,l)
        printf("%c",v[i]);
    pn;
    return 0;
}

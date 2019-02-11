#include<bits/stdc++.h>
using namespace std;

/*----------------------------------------------<-<-<-thanx vai->->->--------------------------------------------------*/


#define loop(n)          for(int i=0; i<(int)(n); ++i)
#define FORI(i, s, n)   for(int i=(int)(s); i<(int)(n); ++i)
#define RFORI(i, s, n)   for(int i=(int)(s); i>=(int)(n); --i)
#define F0RIJ(i, a)     for(int i=0; i<(int)(a); i++)
#define FORP(x)         for(__typeof__((x).begin()) it=(x).begin(); it!=(x).end(); ++it)

#define all(V)          V.begin(),V.end()
#define FF              first
#define SS              second
//#define sz(V)           ((int) (V).size())
#define pb              push_back
#define pii             pair<int, int>
#define ll              long long
#define sz              size()
#define ull             unsigned long long
#define ui              unsigned int
#define memclr(A)       memset(A, 0, sizeof(A))
#define memset(A)       memset(A, 1, sizeof(A))
#define lg              length()

#define All(V,n)          V,V+n
#define clr(A,B)        memset(A,B,sizeof A)

#define gcd(n,m)        __gcd(n,m)
#define input           freopen("input.txt", "r", stdin);
#define output          freopen("output.txt", "w", stdout);
#define sync            ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define dbg(args...)    {string sss(#args);sss+=',';cout<<"-->";debugger::call(all(sss), args);cout<<"\n";}
#define dbgA(A, n)      {cout<<"-->"<<#A<<"=(";FOR(n)cout<<A[i]<<" ";cout<<")\n";}
#define dbgA2(A, n, m)  {cout<<"-->"<<#A<<"=\n";FOR(n){FORI(j, 0, m){cout<<A[i][j]<<" ";}cout<<"\n";}cout<<"\n";}

#define int_input(a)    scanf("%d",&a)
#define float_input(a)  scanf("%f",&a)
#define int_input2(a,b) scanf("%d %d",&a,&b)


#define case(i,n)       cout<<"Case "<<i<<": "<<n<<endl;
#define print(n)        cout<<n<<endl
#define yes             cout<<"Yes"<<endl;
#define no              cout<<"No"<<endl;
#define YES             cout<<"YES"<<endl;
#define NO              cout<<"NO"<<endl;

#define dt              int
#define inf             (1ll<<60)
#define infi            (1<<30)

struct debugger {
    typedef string::iterator si;
    static void call(si it, si ed) {}
    template<typename T, typename ... aT>
    static void call(si it, si ed, T a, aT... rest) {
        string b;
        for(; *it!=','; ++it) if(*it!=' ')b+=*it;
        cout << b << "=" << a << " ";
        call(++it, ed, rest...);
    }
};

int arr[100001];
int t,n,m;


bool check(ll mid)
{
    ll cnt[m];
    loop(m){
        cnt[i]=mid;
    }
    int j = 0;
    int i = 0;
    for(;i<n;i++)
    {
        if(cnt[j]>=arr[i]){
            cnt[j]-=arr[i];
        }else{
            if(j<m-1){
                j++;
            }else{
                break;
            }
            i--;
        }
    }
    //dbg(j,i);
    if((j==m-1)&&(i!=n)){
        return false;
    }
    return true;

}


int main()
{
    cin>>t;
    for(int j=1;j<=t;j++){
        cin>>n>>m;
        loop(n)
        {
            cin>>arr[i];
        }

        ll lo=0,hi=1000000000;
        ll ans = 1000000000;
        while(lo<=hi){
            ll mid = (lo+hi)/2;
            if(check(mid)){
                ans = min(ans,mid);
                //dbg(ans);
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        case(j,ans);
    }
}

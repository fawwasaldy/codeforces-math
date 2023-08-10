#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long

#define deb(x)  if(SHOW)  cout << #x << "=" << x << endl
#define deb2(x, y) if(SHOW)   cout << #x << "=" << x << "," << #y << "=" << y << endl
#define debArr(a,n) for(int z=0;z<n;z++){ cout<<a[z]<<" "; } cout<<endl;
#define deb2DArr(a,m,n) for(int z=0;z<m;z++){for(int y=0;y<n;y++){ cout<<a[z][y]<<" "; } cout<<endl;}

#define deb3(x, y, z)  if(SHOW)        cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" |\
"<<#z<<": "<<z<<endl
#define deb4(a, b, c, d)        if(SHOW)  cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" |\
"<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define deb5(a, b, c, d, e)     if(SHOW)  cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" |\
"<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define deb6(a, b, c, d, e, f)  if(SHOW)  cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<< c<<" |\
"<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
#define SHOW true


#define line cout<<"\n__________________________________________\n";
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

typedef pair<int, int>	pii;
typedef pair<ll, ll>	pll;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pll>		vpll;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

ll ipow(ll base, ll exp)
{
    ll result = 1ll;
    while(exp != 0ll){
        if (exp % 2ll == 1ll)
            result = (result * base) % 1000000007ll;
        exp >>= 1ll;
        base = (base * base) % 1000000007ll;
    }
    return result;
}

void enterSet(int &counter, int &max){
    if(counter == max-1) cout << endl;
    else cout << " ";
    counter++;
}

void solve() {
	int i, j, n, a, one = 0, two = 0, enter = 0;
	cin >> n;
	fo(i,n){
        cin >> a;
        if(a == 1)  one++;
        else two++;
    }
    if(one == 0){
        fo(i,two){
            cout << 2; enterSet(enter, n);
        }
    }
    else if(two == 0){
        fo(i,one){
            cout << 1; enterSet(enter, n);
        }
    }
    else{
        cout << 2; enterSet(enter, n);
        cout << 1; enterSet(enter, n);
        fo(i,two-1){
            cout << 2; enterSet(enter, n);
        }
        fo(i,one-1){
            cout << 1; enterSet(enter, n);
        }
    }
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}
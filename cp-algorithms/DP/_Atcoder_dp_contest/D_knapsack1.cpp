/* **************************************************** */
/*                      Author : rakati                 */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (int)(b); i++)
#define RV(i,a,b) for(int i = (a); i > (int)(b); i--)
#define SHOW(v,d) {RP(i,0,v.size()) cout << v[i] << d;cout << '\n';}
#define ALL(x) x.begin(),x.end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
#define F first
#define S second

const double EPS = 1e-9;
const double PI = 2 * acos(0.0);
const int INF = 1e9;

using ll    = long long;
using ull   = unsigned long long;
using vi    = vector<int>;
using vl    = vector<ll>;
using vb    = vector<bool> ;
using vc    = vector<char>;
using vii   = vector<vi>;
using vll   = vector<vl>;
using pii   = pair<int, int>;
using pll   = pair<ll, ll>;
using vpii  = vector<pii>;
using vpll  = vector<pll>;
int search(vector<int>& nums, int target) {
        int l = 0, h = nums.size() - 1;
        while (l <= h){
            int mid = (l + h) / 2;
            if (nums[mid] == target) return mid;
            if (nums[l] <= nums[mid]){
                if (target < nums[mid] && target >= nums[l]) h = mid - 1;
                else l = mid + 1;
            }else{
                if (target > nums[mid] && target <= nums[h]) l = mid + 1;
                else h = mid - 1;
            }
        }
        return -1;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    vi arr = {4,5,6,7,0,1,2};
    cout << search(arr, 0) << endl;
    return 0;
}
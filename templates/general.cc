//for pbds include:
#include <bits/extc++.h>
using namespace __gnu_pbds;
using namespace std;

//To use order statistic tree instead of using fenwick tree:
//Policy-Based Data Structures of GNU g++ will help us! :)
typedef	tree<int, null_type, less<int>, rb_tree_tag,
				tree_order_statistics_node_update> ost;

//ost tree; *tree.find_by_order(idx); tree.order_of_key(key); tree.insert(key);

#define ll long long
#define isOn(S, j) (S & (1 << j))
#define setBit(S, j) (S |= (1<<j))
#define clearBit(S, j) (S &= ~(1<<j))
#define toggleBit(S, j) (S ^= (1<<j))
#define lowBit(S) (S & (-S))
#define setAll(S, n) (S = (1<<n)-1)

#define modulo(S, N) ((S) & (N-1))   // returns S % N, where N is a power of 2
#define isPowerOfTwo(S) (!(S & (S-1)))
#define nearestPowerOfTwo(S) (1<<lround(log2(S)))
#define turnOffLastBit(S) ((S) & (S-1))
#define turnOnLastZero(S) ((S) | (S+1))
#define turnOffLastConsecutiveBits(S) ((S) & (S+1))
#define turnOnLastConsecutiveZeroes(S) ((S) | (S-1))

//Fast gcd using Euclidian algorithm, with recursion
ll gcd(ll a, ll b) {return !b? a : gcd(b, a%b);} //Cost is O(log(min(a,b)))
//The fastest way to calculate de lcm is:
ll lcm(ll a, ll b) {return abs(a*b)/gcd(a,b);}

//PI = M_PI
//EULER = M_E
const double EPS = 1e-9; //epsilon
//To avoid precision errors, compare doubles like this:
// if ((d1 - d2) <= EPS) then they are equal

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	
	//better use printf & scanf
}

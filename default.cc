// Dark Side of Elephant
// Askar

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <cstring>
#include <algorithm>
#include <utility>
#include <tuple>
#include <complex>
#include <cmath>

using namespace std;

#define FOR(i, N) for(auto i=(N)-(N); i<(N); ++i)
#define FOR1(i, N) for(auto i=(N)-(N)+1; i<=(N); ++i)
#define FOREACH(it, a) for(auto it=a.begin(); it!=a.end(); ++it)
#define beginend(a) a.begin(), a.end()
#define pf printf
#define sf scanf
#define mp make_mair
#define mt make_tuple
#define pass
#define sqr(x) (x)*(x)
typedef long long ll;
typedef pair<long long, long long> pll;
typedef pair<int, int> pii;
const long long INF = 1e9;
const double EPS = 1e-9;

#define dbg if(false)
#ifdef EBUG
    #undef dbg
    #define dbg if(1)
#endif

#define dpf(...) dbg fprintf(stderr, __VA_ARGS__)
#define db(x) dpf("%s: %i\n", #x, (x))
#define assert(x, ...) if(!(x)){                                            \
fprintf(stderr, "L: %i, F: %s: (%s) failed!\n", __LINE__, __FUNCTION__, #x);\
error_exit(__VA_ARGS__);                                                    \
}
#define WA 0
#define EXC 1
#define TLE 2
void error_exit(const int exit_type=0){
    switch(exit_type){
        // WA
        case 0: exit(0); break;
        // EXC
        case 1: exit(47); break;
        // TLE
        case 2: {while(true) cerr << "Na"; cerr << "BATMAN!\n";}; break;
    }
}


int main(){

}

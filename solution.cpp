/*
ID: abdur.d1
TASK: 
LANG: C++20                
*/


//
//             _ . -=- .                  _ . -=- .
//          .+°~   _._   ~=╥_    .∙.   .+°~         ~=▬_
//        .    . .#$$$#.    ^g,      .    .+°^°+.      ^#╖   .sÇ$S┐
//            `  `╩$Ç$╩' °∙  `$,         `        _.,·  `g$┐  ∙|$$|
//        _▬g##o▬,  ~ ,▬,  `  ╘$;         _.,▬⌐y#$≡=-· .s#$#L, `?$$Yi#g┬_
//       jO$$ÿÿ$$OL· j$$$ÿ¬,  `$b  .▬⌐y#S$$$$$$$$#≡=∙ j$$$$$$$b `$$$$ÿ$$$b
//      :$$?~ ~\$$$| |¢$$$$O\ ·?$.∙%ÿ$$$$$$S≡╩ⁿ°"`^~ J$$ª"~"ª$$\ ∙¥   ~?$$┤
//      ∙$6f   ∙$$$O∙·|$$$Γ$$i ]$1·:╧"]$$$'      _. ∙O$/     \$$L :    |S$'
//   .   `?$┐._ ~"º$| :$$$:?$$ ╞$╡   ·¢$$$·  ⌐%S$$· l%! .sSs, ]$$·∙  _▬ÿ$'   .
//    ,    `²╩≡╩"~.$¢··$$$1 $$┬$$1 · :$$$$∙  ^ª!$$∙ :=l d$$$b ∙$$|  ~^°~
//     ∙        s#$$$··$$$$ `¥$$$° : ·$$$$:   ∙l$$| ∙;∙ ?$$$ƒ ·$$|         .'
//      ~─_    ·$$$$| :$$$$  └$$ÿ' ∙  ?$$$!    :$$│· ·∙  "ª"  d$g·      _─~
//         ~"^ :$$$Ç∙∙|$$$!   `º'  '  `?$$$    ·ª$$:  ·     ./$$f .⌐+═`~
//             J$$$: jS≡╩°  `. _ _. .   ~^ªL, #S$$$O#s┬▬ ·∙:=C$/
//        -V  j≡╩°~     .     ~-║∙-~    .     `^╩*S$ÿ$F'·∙:%CG' . O R G
//                       ~─_    T    _─~             ~'  ~²"~
//                          ~"═=|=═"~
//                              ∙
//                              ∙
//



//#include<bits/stdc++.h>

#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <cstdio>
#include <math.h>
#include <ranges>
#include <climits>
#include <string>
#include <typeinfo>
#include <stdlib.h>
#include <iterator>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007 //1e9+7
#define MOD1 998244353 //998,244,353 == 1e9-1,755,647
#define INF 1e18
#define nl "\n"
#define pb push_back
#define pob pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

ofstream err ("/Users/abdurrehman/Documents/CompCode/Error.in");
#ifndef ONLINE_JUDGE
#define debug(x) err << #x <<": "; _print(x); err << endl;
#else
#define debug(x)
#endif

void _print(ll t) {err << t;}
void _print(int t) {err << t;}
void _print(string t) {err << "\""<< t << "\"";}
void _print(char t) {err << "\'" << t << "\'";}
void _print(lld t) {err << t;}
void _print(double t) {err << t;}
void _print(ull t) {err << t;}

//decs
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T> void _print(unordered_set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(unordered_map <T, V> v);
template <class T> void _print(multiset <T> v);
//imps
template <class T, class V> void _print(pair <T, V> p) {err << "{"; _print(p.ff); err << ", "; _print(p.ss); err << "}";}
template <class T> void _print(vector <T> v) {err << "[ "; for (T i : v) {_print(i); err << " ";} err << "]";}
template <class T> void _print(set <T> v) {err << "[ "; for (T i : v) {_print(i); err << " ";} err << "]";}
template <class T> void _print(unordered_set <T> v) {err << "[ "; for (T i : v) {_print(i); err << " ";} err << "]";}
template <class T> void _print(multiset <T> v) {err << "[ "; for (T i : v) {_print(i); err << " ";} err << "]";}
template <class T, class V> void _print(map <T, V> v) {err << "[ "; for (auto i : v) {_print(i); err << " ";} err << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {err << "[ "; for (auto i : v) {_print(i); err << " ";} err << "]";}

//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//GLOBAL SCOPE:

bool comp(pair<ll, ll> a, pair<ll,ll> b){
        if(a.first == b.first) 
                return a.second < b.second;

        return a.first > b.first;
}

ll min(ll a, ll b){
        return a>b ? b : a;
}

ll max(ll a, ll b){
        return a<b ? b : a;
}

ll gcd(ll a, ll b){
        if(b == 0)
                return a;
        return gcd(b, a%b);
}

ll lcm(ll a, ll b){
        return (a / gcd(a, b)) *b;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void __SOLVE_t__() {
        int tt;
        cin >> tt;
        while(tt--) 
        {

        }
        return;
}

//***********************************************************************************************************************************

void __SOLVE_1__() {  


        err << "\n";
        return;
}

//*********************************************************************************************************************************** 
void test(); 

int main()
{
        fastio();
        __SOLVE_t__();
        //__SOLVE_1__();   
        //test();
        return 0;
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


void test() {

        return;
}





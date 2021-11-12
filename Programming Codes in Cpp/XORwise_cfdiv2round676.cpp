/*
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define uint unsigned int
#define ull unsigned long long


#define fi first
#define sd second

#define f(i,a,b) for(ll i=a;i<b;i++)
#define fr(i,a,b) for(ll i=b-1;i>=a;i--)


int main(){
ll t;
ll a,b;
cin>>t;
f(i,0,t){
    cin>>a>>b;
cout<<(a^b)<<endl;
}
return 0;
}


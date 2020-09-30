
#include<bits/stdc++.h>
#include<map>
#include<unordered_map>

using namespace std;
//http://codeforces.com/contest/808/problem/D
int main()
{
/*map<char,int> M;
unordered_map<char,int> U;

string s="King Rishab Dugar";
//add(key,value)--> log N (OM) ,O(1)(UOM)
//erase(key) -->log N (OM) ,O(1)(UOM)

for(char c : s) M[c]++; //O(NlogN) where N=|s| size of your string

for(char c : s) U[c]++; //O(N) because Unordered maps can get and set values in just O(1) time*/
int n;
cin>>n;
vector<int>A(n+5,0);//initailized with all 0s
long long S=0;
for(int i=0;i<n;i++) cin>>A[i],S+=A[i];
//using unodered_map it speeds up solution
map<long long,int> first,second;//We need two maps
first[A[0]]=1;
for(int i=1;i<n;i++) second[A[i]]++; // not=1 since array can have duplicates

long long sdash=0;

for(int i=0;i<n;i++)
{

    sdash+=A[i];//Sum of the first i numbers
    if(sdash==S/2){
        cout<<"YES\n";
        return 0;
        }

        if(sdash<S/2){
            long long x=S/2-sdash;
            //delete element from second half , and insert into first half
            if(second[x]>0){
                cout<<"YES\n";
                return 0;
            }
        }
        else//if sdash is greater
            {
            long long y=sdash-S/2;
            if(first[y]>0){
                cout<<"YES\n";
                return 0;
            }
        }
        //i+1 added to first and removed from second
        first[A[i+1]]++;
        second[A[i+1]]--;
}

cout<<"NO\n";
}

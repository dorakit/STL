#include<bits/stdc++.h>
using namespace std;
void count_freq(int arr[],int n)
{
    unordered_map <int,int> m;
    for(int i=0;i<n;i++)
        m[arr[i]]++;
    for(auto x: m)
    cout<<x.first<<" "<<x.second<<endl;
    cout<<"Original Order"<<" "<<endl;
    for(int i=0;i<n;i++)
    {
        if(m[arr[i]]!=-1)
            cout<<arr[i]<<"  "<<m[arr[i]]<<endl;
        m[arr[i]]=-1;
    }
}
int main()
{
    int arr[] = { 110, 10, 10, 20, 5, 20 };
    int n = sizeof(arr) / sizeof(arr[0]);
    count_freq(arr, n);
    return 0;
}

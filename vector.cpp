#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>

bool f(int x, int y)//comparator function return true/false declared in global space
{
    return x>y;
}
using namespace std;
int main()
{
    //C++ STL
    vector<int>A={11,2,3,14};

    cout<<A[1]<<endl;

    sort(A.begin(),A.end());//O(NlogN)

    //2,3,11,14
    //O(logN) Binary Search
    bool present=binary_search(A.begin(),A.end(),3);//true

    cout<<present<<endl; // 1

    present=binary_search(A.begin(),A.end(),4);//false

    cout<<present<<endl; //0

    A.push_back(100);
    present=binary_search(A.begin(),A.end(),100);//true

    cout<<present<<endl;//1

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    //2,3,11,14,100,100,100,100,100,123

   /* vector<int>::iterator */ auto it=lower_bound(A.begin(),A.end(),100);//pointing the iterator to the 1st occurence of >= points to 1st 100
   /* vector<int>::iterator */auto it2=upper_bound(A.begin(),A.end(),100);//pointing the iterator to the 1st number strictly > than 100 i.e. it points to 123

    cout<<*it<< " "<<*it2<<endl;
    cout<<it2-it<<endl;//iterators in vectors are random in O(1) time // 9-4=5 //Gives the count of occurence of 100 s

    //sorting in descending order
    sort(A.begin(),A.end(),f);//overloaded function by passing a comparator function f

    //Printing the elements of the vector

      /* vector<int>::iterator it3;
     for(it3=A.begin();it3!=A.end();it3++)
    {
        cout<<*it3<<" ";

    } */
    for(int &x:A)//"&" helps iterating by reference
    {
     x++;//Now after adding '&' any changes made to x will be applied to particular vector element
    }
// All elements will be incremented by 1
    for(int &x:A)//"&" helps iterating by reference
    {
        cout<<x<<" ";
    }
    cout<<endl;
}

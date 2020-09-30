#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector> // Vectors
#include<set> //Sets
#include <map>//Maps
#include<utility>

using namespace std;
bool f(int x, int y)//comparator function return true/false declared in global space
{
    return x>y;
}
void vector_demo()//Array needs to be sorted again and again after inserting new numbers which takes Nlog N time
{

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

    A.push_back(100);;
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

void set_demo()
{
    set <int> S;
    S.insert(1);
    S.insert(2);
    S.insert(-1);
    S.insert(-10);//log N

    for(int x:S)
        cout<<x<<" ";//automatically sorted (in logN time)
      cout<<endl;
      //-10 -1 1 2

      auto it=S.find(-1);
      if(it==S.end())
      {
          cout<<"Element not present\n";
      }
      else
       {
           cout<<"Element Present\n";
           cout<<*it<<endl;

       }

       auto it2=S.lower_bound(-1);// Iterator to the 1st element in the set which is >= -1
       auto it3=S.upper_bound(-1);// strictly greater than the given number , strictly greater than -1 is 1
       auto it4=S.upper_bound(0);// strictly greater than 0 is 1

       cout<<*it3<<" "<<*it4<<endl;//1 1

       auto it5=S.upper_bound(2);// No element greater than 2 points to S.end()
       if(it5==S.end())
       {
           cout<<"OOps can't find anything like that\n";
       }

    // you can also erase any number from the set in log(N) time eg. S.erase(1)

}

void mapDemo()
{
    map<int,int> A;
    A[1]=100;
    A[2]=-1;
    A[3]=200;
    A[100000232]=1;

    map<char,int> cnt;
    string x="King Rishab Dugar";

    for(char c:x)
    {
        cnt[c]++;
    }
    cout<<cnt['a']<<" "<<cnt['z']<<endl;  //You can also find/delete a key in map or not in just log(N) time  A.find(key) and A.erase(key)
//counts the number of occurences of 'a' and 'z' in the given string
}
void Powerofstl()
{
    //[x,y]
    /* add[2,3]
    add[10,20]
    add[30,400]
    add[401,450]//not overlapping each other
    give me the interval 401*/


    /*Set is always ordered in ascending order So in set of pairs we have,

    Pair {a,b} is smaller than {c,d} iff a<c but iff a==c then iff b<d

    */
    set <pair<int,int>>S;
    S.insert({401,450});
    S.insert({10,20});
    S.insert({30,400});
    S.insert({2,3});
    //2,3
    //10,20
    //30,400
    //401,450

    int point;
    cin>>point;
    auto it=S.upper_bound({point,INT_MAX});
   
   \\\Find if a point is lying in a given interval
   
   
    if(current.first<=point && point<=current.second)
    {
        cout<<"Yes It's present:"<<current.first<<" "<<current.second<<endl;
    }

    else{
        cout<< "the given point is not lying in any interval..\n";
    }
}

/////main function missing

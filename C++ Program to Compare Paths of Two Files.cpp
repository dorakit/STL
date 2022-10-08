Using iteration(for & while loop) :

    To store paths use string as data type
    Use for or while loop and compare each character of them one by one.

Syntax:

while(path1[i] != '\0' || path2[i] != '\0'){
    //compare the character
    //increment value of i
}

OR

for(int i = 0; path1[i] != '\0' || path2[i] != '\0'; i++){
    //compare the character
}

Below is the implementation of the above approach:

// C++ Program to Compare Paths of Two Files
// using for loop
 
#include <iostream>
using namespace std;
 
// function to compare two paths
void pathCompare(string p1, string p2)
{
    // for loop to compare the paths
    for (int i = 0; p1[i] != '\0' || p2[i] != '\0'; i++) {
        // compare the character
        if (p1[i] != p2[i]) {
            cout << p1 << " is not equal to " << p2 << endl;
            return;
        }
    }
    cout << p1 << " is equal to " << p2 << endl;
}
 
// Driver code
int main()
{
    string p1 = "/a/b/c";
    string p2 = "/a/b/";
    string p3 = "/a/b";
    string p4 = "/a/b";
    string p5 = "/a/b";
    string p6 = "/a/b.";
    pathCompare(p1, p2); // function call
    pathCompare(p3, p4); // function call
    pathCompare(p5, p6); // function call
    return 0;
}
 
// This code is contributed by Susobhan Akhuli
Output

/a/b/c is not equal to /a/b/
/a/b is equal to /a/b
/a/b is not equal to /a/b.

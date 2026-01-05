// You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.

// Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.

// You are given an API bool isBadVersion(version) which returns whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.

// Input: n = 5, bad = 4
// Output: 4
// Explanation:
// call isBadVersion(3) -> false
// call isBadVersion(5) -> true
// call isBadVersion(4) -> true
// Then 4 is the first bad version.


#include<bits/stdc++.h>
using namespace std;


int badversion(int bad, int first, int last){

    if(last <= first) return first;

    int mid = first + ((last - first) / 2);

    if(mid < bad){
        return badversion(bad,mid + 1,last);
    }else{
        return badversion(bad,first,mid);
    }

    return -1;
}


int main(){

    cout << badversion(1,1,1) << endl;
    return 0;
}
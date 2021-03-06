// 168. Excel Sheet Column Title
// Given a positive integer, return its corresponding column title as appear in an Excel sheet.

// For example:

//     1 -> A
//     2 -> B
//     3 -> C
//     ...
//     26 -> Z
//     27 -> AA
//     28 -> AB 
//     ...

// Example 1:

// Input: 1
// Output: "A"

// Example 2:

// Input: 28
// Output: "AB"

// Example 3:

// Input: 701
// Output: "ZY"

class Solution {
public:
    string convertToTitle(int n) {
        string s="";
        while(n){
            int x=n%26;
            if(x==0){
                s.insert(s.begin(),'Z');
                n=n/26;n--;
            }
            else{
                s.insert(s.begin(),x+64);
                n=n/26;
            }
        }
        return s;
    }
};
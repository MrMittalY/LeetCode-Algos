// 1109. Corporate Flight Bookings
// There are n flights, and they are labeled from 1 to n.

// We have a list of flight bookings.  The i-th booking bookings[i] = [i, j, k] means that we booked k seats from flights labeled i to j inclusive.

// Return an array answer of length n, representing the number of seats booked on each flight in order of their label.

 

// Example 1:

// Input: bookings = [[1,2,10],[2,3,20],[2,5,25]], n = 5
// Output: [10,55,45,25,25]

 

// Constraints:

//     1 <= bookings.length <= 20000
//     1 <= bookings[i][0] <= bookings[i][1] <= n <= 20000
//     1 <= bookings[i][2] <= 10000


class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ref(n+1,0),res(n,0);
        for(int i=0;i<bookings.size();i++){
            ref[bookings[i][0]-1]+=bookings[i][2];
            ref[bookings[i][1]]-=bookings[i][2];
        }
        res[0]=ref[0];
        for(int i=1;i<n;i++){
            res[i]=res[i-1]+ref[i];
        }
        return res;
    }
};
// class Solution {
// public:
//     // Helper function to check if we can make m bouquets on a given day
//     bool canMake(vector<int>& bloomDay, int m, int k, int day) {
//         int bouquets = 0;
//         int flowers = 0;

//         for (int i = 0; i < bloomDay.size(); ++i) {
//             if (bloomDay[i] <= day) {
//                 flowers++;  // flower bloomed
//                 if (flowers == k) {
//                     bouquets++;  // made one bouquet
//                     flowers = 0; // reset for next bouquet
//                 }
//             } else {
//                 flowers = 0; // not bloomed, reset counter
//             }
//         }

//         return bouquets >= m;
//     }

//     int minDays(vector<int>& bloomDay, int m, int k) {
//         long long total = 1LL * m * k;
//         if (total > bloomDay.size()) return -1; // impossible

//         int low = *min_element(bloomDay.begin(), bloomDay.end());
//         int high = *max_element(bloomDay.begin(), bloomDay.end());
//         int result = -1;

//         while (low <= high) {
//             int mid = low + (high - low) / 2;

//             if (canMake(bloomDay, m, k, mid)) {
//                 result = mid;       // possible, try to find smaller day
//                 high = mid - 1;
//             } else {
//                 low = mid + 1;      // not possible, increase days
//             }
//         }

//         return result;
//     }
// };

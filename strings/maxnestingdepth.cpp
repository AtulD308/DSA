// class Solution {
// public:
//     int maxDepth(string s) {
//         // if(s.size()==1) return 0;
//         int cnt=0,maxi=0;
//         for(char &ch:s){
//             if(ch=='('){
//                 cnt++;
//                 maxi=max(cnt,maxi);
//             }
//             else if(ch==')') cnt--;
//         }
//         return maxi;
//     }
// };
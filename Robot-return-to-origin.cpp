class Solution {
public:
    bool judgeCircle(string moves) {
       int ud_case=0;
       int lr_case=0;

       for(auto it:moves){
           if(it=='U'){
               ud_case++;
           }
           else if(it=='D'){
               ud_case--;
           }
           else if (it=='R'){
              lr_case++;
           }
           else{
               lr_case--;
           }
       } 
       if(lr_case==0&&ud_case==0){
           return true;
       }
       return false; 
       }
};

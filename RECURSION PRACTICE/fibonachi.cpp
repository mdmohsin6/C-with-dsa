//2 number se nxt number bnta hai

//8TH PLACE FIBONACHI NUMBER FIND KRO

//f(n)= f(n-1)+ f(n-2);
//f(n) bna isse;

class Solution {
public:
    int fib(int n) {

        //base case
        //1st index ka
        if( n==0)
            return 0;
            if(n==1)
                return 1;

//base case de hi dya hai baki apne app kro solve
                int ans = fib(n-1)+ fib(n-2);
                return ans;
            
        
        
    }
};
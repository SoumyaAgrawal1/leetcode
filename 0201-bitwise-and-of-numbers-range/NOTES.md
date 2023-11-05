class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
      int ct = 0;
        while(left != right){
            left >>= 1;
            right >>= 1;
            ct++;
        }
        return left << ct;
    }
};
/*
14 - 01110
15 - 01111
16 - 10000
17 - 10001
18 - 10010
19 - 10011
20 - 10100

Observations:
1. If in the range of these two numbers any bit is flipped(at least once) then AND for that index will be zero.

2. If ith index bit has been flipped means all the bits in right form this index has been also flipped so from cur_indx to all the right index bits will be 0 in our answer value .
proof: suppose bin_num = 000
Now start generating the number. num0 = 000, num1 = 001, num2 = 010, num3 = 011, here for index 0 and 1 all the combinations have been generated means both the bits have been flipped at least once.
So if you want to generage new value 4 then you have to flip the bit at 2nd index only then you can generate number 4 and and once you have flipped any index bit all the indexes in right from this index in answer will be 0.


eg1:suppose left = 16 and right = 20

bin_num16 = 10000, bin_num20 = 10100
In the 16-20 journey, only the first 3 indices (0, 1, 2, right-to-left) have flipped, the remaining indexes (3, and 4) have not flipped and the bits of this index are the same in both the numbers.

Final conclusion: Now both values will be shifted right until both values are equal. And we will also keep counting how many times we shifted the right.

dry-run: 
0. 10000, 10100
1. 1000, 1010
2. 100, 101
3. 10, 10(equal)
we have shifted the bit for two times
the final equal value is 10
now two time left shift this value = 10<<2 = 1000(final answer)
*/ 

​

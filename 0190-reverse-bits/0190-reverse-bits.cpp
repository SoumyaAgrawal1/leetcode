class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        for(int i=0;i<32;i++){
uint32_t lsb = n & 1;   // Check what is the bit
ans = ans | (lsb << (31 - i));  // Put that bit in the position in which it should be in the reverse bits
n = n >> 1; // Right shift the integer n by one bit (to check the next bit)
        }
        return ans;
    }
};
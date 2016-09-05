class Solution {
public:
	uint32_t reverseBits(uint32_t n) {
		uint32_t num[32];
		uint32_t result = 0;
		for (int i = 0; i < 32; i++) {
			num[i] = (n >> i) & 1;
			result += (num[i])*pow(2, 31-i);
		}
		return result;
	}
}; 
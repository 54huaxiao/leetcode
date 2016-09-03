class Solution {
public:
	int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
		int area = (C - A) * (D - B) + (G - E) * (H - F);
		int r1 = min(C, G);
		int l1 = max(E, A);
		int r2 = min(D, H);
		int r3 = max(B, F);
		if ((l1 - r1) < 0 || (r3 - r2) < 0) return area;
		return area - (l1 - r1) * (r3 - r2);
	}
};
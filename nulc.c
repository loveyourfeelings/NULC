// LUN, 30 NOV 3:31, 2020 - ABEL ROMERO PÉREZ.
/* NOT UNIQUE LOGICAL COMPARATOR */
int nulc (int n, int d) {
	int ni = 0, nc = 0, di = 0, dc = 0, ret = 0;
	for (ni = 0; ni <= (2 * d); ++ni) {
		nc += n;
	}
	for (di = 0; di <= (2 * n); ++di) {
		dc += d;
	}
	ret = dc == nc;
	return ret;
}
// ; END OF COIDE! TY VM.
// ; BEST REGARDS.
// ; I <3 U.

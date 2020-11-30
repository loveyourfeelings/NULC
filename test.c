#include <stdio.h>
#include <nulc.h>
int main(void) {

	int ret = 0;

	printf("Is 0 == 0 ? %d\n", nulc(0, 0));
	printf("Is 1 == 1 ? %d\n", nulc(1, 1));
	printf("Is 0 == 1 ? %d\n", nulc(0, 1));
	printf("Is 1 == 0 ? %d\n", nulc(1, 0));

	fflush(stdout);

	printf("Is 1234567890 == 0? %d\n", nulc(1234567890, 0));
	printf("Is 1234567890 == 1? %d\n", nulc(1234567890, 1));
	printf("Is 1234567890 == 1234567890? %d\n", nulc(1234567890, 1234567890));

	fflush (stdout);

	printf("Is 2 == 7? %d\n", nulc(2, 7));

	fflush(stdout);

	return ret;
}

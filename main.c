#include <stdio.h>
#include <nulc.h>
int main(void) {

	int ret = 0;

	printf("Testing... (signed from -127 to 0 and 0 to 127):\n");

	for (int n = -127; n <= 0; ++n) {
		for (int d = 0; d <= 127; ++d) {
			ret = nulc_signed(n, d);
			if (ret == 1) {
				printf("%d == %d is %d\r", n, d, ret);
			}
			fflush(stdout);
		}
	}

	printf("\n");
	printf("Test finished.\n");
	printf("Starting next test... unsigned from 0 to 127 and 127 to 254...\n");

	for (unsigned char n = 0; n <= 127; ++n) {
                for (unsigned char d = 127; d <= 254; ++d) {
			ret = nulc_unsigned(n, d);
                        if (ret == 1) {
				printf("%u == %u is %u\r", n, d, ret);
                        }
                        fflush(stdout);
                }
        }

	printf("\n");
        printf("Test finished.\nStarting next test... double from -128.0 to 128.0 and -256.0 to -256.0...\n");

	for (double n = -128.0; n <= 128.0; ++n) {
                for (double d = -256.0; d <= 0; ++d) {
			double ret = nulc_double(n, d);
                        if (ret == 1) {
				printf("%.09f == %.09f is %.09f\r", n, d, ret);
                        }
                        fflush(stdout);
                }
        }

	printf("\n");
        printf("Test finished, nothing else to see.\n");

	return ret;
}

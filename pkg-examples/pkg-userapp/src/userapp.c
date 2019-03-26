#include <stdio.h>

int main(void)
{
#if defined(HW_MODEL_WLRGFM_101)
//#error hardware model is: WLRGFM-101
	printf("hardware model is: WLRGFM-101\n");

#elif defined(HW_MODEL_WLRRTMS_104)
//#error hardware model is: WLRRTMS-104
	printf("hardware model is: WLRRTMS-104\n");

#else
#error please select a hardware model in `make menuconfig`.

#endif

	return 0;
}

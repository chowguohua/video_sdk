#include <stdlib.h>
#include "platform.h"


void *ont_platform_malloc(size_t size)
{
	return malloc(size);
}

void ont_platform_free(void *ptr)
{
	free(ptr);
}

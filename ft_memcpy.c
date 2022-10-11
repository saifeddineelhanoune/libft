#include<stdlib.h>
void *memcpy(void *dst, const void *src, size_t n)
{
    //type casting from void* to char*
    char *destination = (char*)dst;
    char *source = (char*)src;
    //copying n bytes from memory area src to memory area dst
    while(n > 0)
    {
        *destination = *source;
        destination++;
        source++;
        n--;
    }
    return dst;
}
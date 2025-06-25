#include <stdio.h>
#include <time.h>
#include <string.h>

int count = 0;
clock_t last_ticks = 0;
char src_str[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
int test_loop(char* src)
{
    char des[10];
    memcpy(des, src, 10);
    printf("%c\n", des[3]);
}

int main() {
    last_ticks = clock();
    while(1) {
	    test_loop(src_str); 
	    printf("Time %ld\n", clock() - last_ticks);
	    last_ticks = clock();
    }
    return 0;
}


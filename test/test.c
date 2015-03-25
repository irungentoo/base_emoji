#include "../lib/base_emoji.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

long long unsigned int counter;
void test_encode_decode()
{
    unsigned i;
    uint8_t test_arr[rand() % 98 + 1];
    for (i = 0; i < sizeof(test_arr); ++i) {
        test_arr[i] = rand();
    }

    uint8_t string[10000];
    unsigned int length = bytes_to_emoji_string(string, sizeof(string), test_arr, sizeof(test_arr));

    uint8_t test_out[sizeof(test_arr)];
    unsigned int len = emoji_string_to_bytes(test_out, sizeof(test_out), string, length);


    if (memcmp(test_out, test_arr, sizeof(test_out)) != 0 || len != sizeof(test_arr)) {
        printf("ERROR %lu %u %llu %u\n", sizeof(test_arr), len, counter, length);
        for (i = 0; i < sizeof(test_arr); ++i) {
            printf("%02X", test_arr[i]);
        }
        printf("\n");
        for (i = 0; i < sizeof(test_out); ++i) {
            printf("%02X", test_out[i]);
        }
        printf("\n");
    } else {
        if (counter % 10000 == 0) {
            printf("%llu\n", counter);
        }
    }

    ++counter;
}

int main(int argc, char *argv[])
{
    srand((unsigned) time(NULL));

    while (1) {
        test_encode_decode();
    }
}

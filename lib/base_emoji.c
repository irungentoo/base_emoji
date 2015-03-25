#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>


static uint32_t emoji_table[10000];
static uint32_t number_emoji = 0;

static void next_emoji(uint32_t *emo)
{
    if ((*emo & 0xFF) > 0xBF) {
        *emo += (64 + 0x80);
    }
}

static void build_emoji_table()
{
    /* Misc pictograms */
    uint32_t first_e = 0xf09f8c80;

    number_emoji = 0;
    unsigned int i;
    for (i = 0; i < 45; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    first_e += 3;

    for (i = 0; i < 78; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    first_e += 2;

    for (i = 0; i < 79; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    first_e += 5;

    for (i = 0; i < 36; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    first_e += 8;

    for (i = 0; i < 255; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    first_e += 1;

    for (i = 0; i < 75; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    first_e += 5;

    for (i = 0; i < 42; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    first_e += 1;

    for (i = 0; i < 41; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    first_e += 1;

    for (i = 0; i < 91; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    /* Smilies */
    first_e = 0xf09f9880;

    for (i = 0; i < 67; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    first_e += 2;

    for (i = 0; i < 11; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    /* Transportation symbols */
    first_e = 0xf09f9a80;

    for (i = 0; i < (5 * 16); ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    first_e += 16;

    for (i = 0; i < 13; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    first_e += 3;

    for (i = 0; i < 4; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    /* Playing cards */
    first_e = 0xf09f82a0;

    for (i = 0; i < 15; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    first_e += 2;

    for (i = 0; i < 15; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    first_e += 1;

    for (i = 0; i < 15; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    first_e += 1;

    for (i = 0; i < 37; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    /* Misc symbols. */
    first_e = 0xe29880;

    for (i = 0; i < 256; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    /* arrows */
    first_e = 0xe28690;

    for (i = 0; i < 112; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    /* suplemental arrows A */
    first_e = 0xe29fb0;

    for (i = 0; i < 16; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    /* suplemental arrows B */
    first_e = 0xe2a480;

    for (i = 0; i < 128; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    /* Math operators */
    first_e = 0xe28880;

    for (i = 0; i < 256; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    /* Suplemental Math operators */
    first_e = 0xe2a880;

    for (i = 0; i < 256; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    /* Letterlike symbols */
    first_e = 0xe28480;

    for (i = 0; i < 80; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    /* Misc math symbols A block */
    first_e = 0xe29f80;

    for (i = 0; i < 48; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    /* Misc math symbols B block */
    first_e = 0xe2a680;

    for (i = 0; i < 128; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    /* Misc techincal block */
    first_e = 0xe28c80;

    for (i = 0; i < 251; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    /* Geometic shapes block */
    first_e = 0xe296a0;

    for (i = 0; i < 96; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    /* Misc symbols and arrows. */
    first_e = 0xe2ac80;

    for (i = 0; i < 116; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    first_e += 2;

    for (i = 0; i < 32; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    first_e += 2;

    for (i = 0; i < 34; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    first_e += 3;

    for (i = 0; i < 12; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }

    first_e += 1;

    for (i = 0; i < 8; ++i) {
        next_emoji(&first_e);
        emoji_table[number_emoji] = first_e;
        ++first_e;
        ++number_emoji;
    }
}

/* returns the out put number length */
static uint32_t long_divide(uint32_t *out, size_t out_len, uint32_t *remainder, uint32_t *num, size_t num_len, uint32_t div_num)
{
    if (out_len < num_len)
        return 0;

    unsigned int i, o_l = 0;
    uint64_t old = 0;
    for (i = 0; i < num_len; ++i) {
        uint64_t temp = num[i];
        temp += (old << 32);
        old = temp % div_num;
        temp = temp / div_num;

        if (temp || o_l) {
            out[o_l] = temp;
            ++o_l;
        }
    }

    *remainder = old;
    return o_l;
}
#if defined(_WIN32) || defined(__WIN32__) || defined (WIN32)
#include <winsock2.h>
#else
/* ntohl and htonl */
#include <arpa/inet.h>
#endif

static unsigned int uint8_array_to_base(uint32_t *out, size_t out_len, const uint8_t *in, size_t in_len, unsigned int base)
{
    size_t len = (in_len / 4) + !!(in_len % 4);
    uint32_t array[len];

    if (len > out_len) {
        return 0;
    }

    unsigned int off = (in_len % 4);
    unsigned int i;
    for (i = 0; i < len; ++i) {
        uint32_t temp = 0;
        if (off) {
            if (!i) {
                memcpy(((uint8_t *)&temp) + (4 - off), in, off);
            } else {
                memcpy(&temp, in + ((i - 1) * 4) + off, 4);
            }
        } else {
            memcpy(&temp, in + (i * 4), 4);
        }

        temp = ntohl(temp);
        array[i] = temp;
    }


    uint32_t temp_out[out_len];
    uint32_t length = len;
    uint32_t rem = 0;
    for (i = 0; i < out_len; ++i) {
        length = long_divide(array, length, &rem, array, length, base);
        temp_out[i] = rem;

        if (length == 0) {
            length = (i + 1);
            break;
        }
    }

    if (i == out_len) {
        return 0;
    }

    for (i = 0; i < length; ++i) {
        out[i] = temp_out[length - (i + 1)];
    }

    return length;
}

static uint32_t long_mult(uint32_t *out, size_t out_len, uint32_t *num, size_t num_len, uint32_t mult_num, uint32_t add_num)
{
    unsigned int i;
    if (out_len < num_len || !num_len) {
        return 0;
    }

    uint32_t temp_out[out_len];
    uint64_t old = 0;
    for (i = 0; i < num_len; ++i) {
        if (!i) {
            old += add_num;
        }

        old += (uint64_t)num[num_len - (i + 1)] * (uint64_t)mult_num;
        temp_out[i] = (old & (uint64_t)0xFFFFFFFF);
        old >>= 32;
    }

    if (old) {
        if (i >= out_len) {
            return 0;
        }

        temp_out[i] = old;
        ++i;
    }

    uint32_t length = i;

    for (i = 0; i < length; ++i) {
        out[i] = temp_out[length - (i + 1)];
    }

    return length;
}

static unsigned int base_to_uint8_array(uint8_t *out, size_t expected_out_len, uint32_t *in, size_t in_len, unsigned int base)
{
    size_t len = (expected_out_len / 4) + !!(expected_out_len % 4);
    uint32_t array[len];
    array[0] = 0;

    uint32_t length = 1;
    unsigned int i;
    for (i = 0; i < in_len; ++i) {
        length = long_mult(array, len, array, length, base, in[i]);
    }

    uint8_t temp_out[len * 4];

    for (i = 0; i < length; ++i) {
        uint32_t temp = htonl(array[i]);
        memcpy(temp_out + i * 4, &temp, 4);
    }

    unsigned int start = 0, zeroes = 0;

    if (expected_out_len < (length * 4)) {
        start = (length * 4) - expected_out_len;
    } else {
        zeroes = expected_out_len - (length * 4);
    }

    for (i = 0; i < expected_out_len; ++i) {
        if (start) {
            out[i] = temp_out[i + start];
        } else if (zeroes) {
            if (i < zeroes) {
                out[i] = 0;
            } else {
                out[i] = temp_out[i - zeroes];
            }
        } else {
            out[i] = temp_out[i];
        }
    }

    return expected_out_len;
}



static unsigned int print_number(uint8_t *bytes, unsigned int number)
{
    uint8_t test[4];
    uint32_t temp = htonl(emoji_table[number]);
    memcpy(test, &temp, 4);
    if (!test[0]) {
        memcpy(bytes, test + 1, 3);
        return 3;
    } else {
        memcpy(bytes, test, 4);
        return 4;
    }
}

int get_char_number(uint32_t character)
{
    character = ntohl(character);

    unsigned int i;
    for (i = 0; i < number_emoji; ++i) {
        if (character == emoji_table[i]) {
            return i;
        }
    }

    return -1;
}

static unsigned int number_from_bytes(unsigned int *number, const uint8_t *bytes, size_t bytes_length)
{
    if (!bytes_length)
        return 0;

    int num = -1;

    unsigned int len = 0;
    if (*bytes == 0xe2) {
        len = 3;
        if (bytes_length < len) {
            return 0;
        }

        uint32_t character = 0;
        memcpy(((uint8_t *)&character) + 1, bytes, 3);
        num = get_char_number(character);

    } else if (*bytes == 0xf0) {
        len = 4;
        if (bytes_length < len) {
            return 0;
        }

        uint32_t character = 0;
        memcpy(&character, bytes, 4);
        num = get_char_number(character);
    } else {
        return 0;
    }

    if (num == -1) {
        return 0;
    }

    *number = num;

    return len;
}

unsigned int bytes_to_emoji_string(uint8_t *string, size_t string_length, const uint8_t *bytes, size_t bytes_length)
{
    if (!number_emoji) {
        build_emoji_table();
    }

    uint32_t out[bytes_length];
    unsigned int len = uint8_array_to_base(out, bytes_length, bytes, bytes_length, number_emoji);

    unsigned int i;

    uint8_t *s = string;
    for (i = 0; (i < len) && (((s - string) + 5) < string_length); ++i) {
        s += print_number(s, out[i]);
    }

    return s - string;
}

unsigned int emoji_string_to_bytes(uint8_t *bytes, size_t expected_bytes_length, const uint8_t *string, size_t string_length)
{
    if (!number_emoji) {
        build_emoji_table();
    }

    uint32_t numbers[string_length];
    unsigned int length_num = 0;
    while (string_length) {
        unsigned int ret = number_from_bytes(numbers + length_num, string, string_length);
        if (ret == 0)
            return 0;

        string_length -= ret;
        string += ret;
        ++length_num;

        if (length_num > (sizeof(numbers) / 4))
            return 0;
    }

    return base_to_uint8_array(bytes, expected_bytes_length, numbers, length_num, number_emoji);
}
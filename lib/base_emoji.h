#ifndef BASE_EMOJI_LIB_H
#define BASE_EMOJI_LIB_H

#include <stdint.h>
#include <stdlib.h>

/* Encode bytes of bytes_length to string of maximum string_length.
 *
 * return 0 on failure.
 * return length of bytes written to string on success.
 */
unsigned int bytes_to_emoji_string(uint8_t *string, size_t string_length, const uint8_t *bytes, size_t bytes_length);

/* Decode string of string_length to bytes of maximum expected_bytes_length.
 *
 * return 0 on failure.
 * return length of bytes written on success.
 */
unsigned int emoji_string_to_bytes(uint8_t *bytes, size_t expected_bytes_length, const uint8_t *string, size_t string_length);

#endif

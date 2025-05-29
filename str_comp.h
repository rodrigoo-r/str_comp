/*
* This code is distributed under the terms of the GNU General Public License.
 * For more information, please refer to the LICENSE file in the root directory.
 * -------------------------------------------------
 * Copyright (C) 2025 Rodrigo R.
 * This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
 * This is free software, and you are welcome to redistribute it
 * under certain conditions; type `show c' for details.
*/

#ifndef FLUENT_LIBC_STR_COMP_LIBRARY_H
#define FLUENT_LIBC_STR_COMP_LIBRARY_H

#if defined(__cplusplus)
extern "C"
{
#endif

 // Define true/false values
#ifndef FLUENT_LIBC_RELEASE
#   include <std_bool.h>
#else
#   include <fluent/std_bool/std_bool.h>
#endif

/**
 * Compares two null-terminated strings for equality.
 *
 * This function iterates through the characters of the two strings
 * and checks if they are identical. The comparison stops when a
 * null terminator is encountered in either string or when a mismatch
 * is found.
 *
 * @param pivot A pointer to the first null-terminated string.
 * @param target A pointer to the second null-terminated string.
 * @return TRUE (1) if the strings are identical, FALSE (0) otherwise.
 *
 * Behavior:
 * - Returns FALSE if the strings have different lengths or if any
 *   character does not match.
 * - Assumes both input strings are valid null-terminated strings.
 */
static inline bool str_comp(const char* pivot, const char* target)
{
    // Iterate through all characters
    while (*pivot)
    {
        // Get the characters
        const char pivot_char = *pivot;
        const char target_char = *target;

        // Break if we have found the end of the target
        if (target_char == '\0')
        {
            break;
        }

        // Compare the characters
        if (pivot_char != target_char)
        {
            // Return FALSE immediately
            return FALSE;
        }

        // Move to the next character
        pivot++;
        target++;
    }

    // Get the characters finally
    const char pivot_char = *pivot;
    const char target_char = *target;

    // See if we finish one before the other
    if (
        (pivot_char == '\0' && target_char != '\0') ||
        (pivot_char != '\0' && target_char == '\0')
    )
    {
        // Return FALSE immediately
        return FALSE;
    }

    return TRUE;
}

#if defined(__cplusplus)
}
#endif

#endif //FLUENT_LIBC_STR_COMP_LIBRARY_H
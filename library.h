/*
* This code is distributed under the terms of the GNU General Public License.
 * For more information, please refer to the LICENSE file in the root directory.
 * -------------------------------------------------
 * Copyright (C) 2025 Rodrigo R.
 * This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
 * This is free software, and you are welcome to redistribute it
 * under certain conditions; type `show c' for details.
*/

#ifndef STR_COMP_LIBRARY_H
#define STR_COMP_LIBRARY_H

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
int str_comp(const char *pivot, const char *target);

#endif //STR_COMP_LIBRARY_H
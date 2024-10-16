/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validationTest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 22:47:23 by jaiane            #+#    #+#             */
/*   Updated: 2024/10/16 00:39:54 by jaiane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* To run the tests you must have your lib implemented.
   So you can just copy and paste this command on the root of your lib:

    > cc validationTest.c -L. libft.a -o myTest
    > ./myTest
*/
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>

void    ft_isalpha_test()
{
    printf("\n--- ft_isalpha ---\n");
    printf("Testing alphabetic characters\n");
    assert(ft_isalpha('a') == 1 && "Error: 'a' should be alphabetic");
    assert(ft_isalpha('Z') == 1 && "Error: 'Z' should be alphabetic");
    
    printf("Testing non-alphabetic characters\n");
    assert(ft_isalpha('1') == 0 && "Error: '1' should not be alphabetic");
    assert(ft_isalpha('@') == 0 && "Error: '@' should not be alphabetic");
    printf("ft_isalpha passed all tests!\n");
    printf("------------------\n");
}

void    ft_isdigit_test()
{
    printf("\n--- ft_isdigit ---\n");
    printf("Testing digit characters\n");
    assert(ft_isdigit('2') == 1 && "Error: '2' should be a digit");
    
    printf("Testing non-digit characters\n");
    assert(ft_isdigit('a') == 0 && "Error: 'a' should not be a digit");
    assert(ft_isdigit('+') == 0 && "Error: '+' should not be a digit");
    printf("ft_isdigit passed all tests!\n");
    printf("------------------\n");
}

void    ft_isalnum_test()
{
    printf("\n--- ft_isalnum ---\n");
    printf("Testing alphanumeric characters\n");
    assert(ft_isalnum('2') == 1 && "Error: '2' should be alphanumeric");
    assert(ft_isalnum('a') == 1 && "Error: 'a' should be alphanumeric");

    printf("Testing non-alphanumeric characters\n");
    assert(ft_isalnum('\n') == 0 && "Error: newline should not be alphanumeric");
    assert(ft_isalnum('%') == 0 && "Error: '%' should not be alphanumeric");
    printf("ft_isalnum passed all tests!\n");
    printf("------------------\n");
}

void    ft_isascii_test()
{
        printf("\n--- ft_isascii ---\n");
    for (int ch = 0x7c; ch <= 0x82; ch++)
        {
        printf("Testing character: %#04x\n", ch);
        if (ch <= 0x7F)
        {
            assert(ft_isascii(ch) == 1 && "Error: character should be ASCII");
        }
        else
        {
            assert(ft_isascii(ch) == 0 && "Error: character should not be ASCII");
        }
    }
    printf("ft_isascii passed all tests!\n");
    printf("------------------\n");
}

void    ft_isprint_test()
{
    printf("\n--- ft_isprint ---\n");
    printf("Testing printable characters\n");
    assert(ft_isprint('k') == 1 && "Error: 'k' should be printable");
    assert(ft_isprint(' ') == 1 && "Error: space should be printable");

    printf("Testing non-printable characters\n");
    assert(ft_isprint('\t') == 0 && "Error: tab should not be printable");
    assert(ft_isprint('\n') == 0 && "Error: newline should not be printable");
    printf("ft_isprint passed all tests!\n");
    printf("------------------\n");
}

void    ft_strlen_test()
{
    printf("\n--- ft_strlen ---\n");
    printf("Testing string length calculation\n");
    assert(ft_strlen("BANANA") == 6 && "Error: 'BANANA' should have length 6");
    assert(ft_strlen("") == 0 && "Error: empty string should have length 0");
    printf("ft_strlen passed all tests!\n");
    printf("------------------\n");
}

void    ft_memset_test()
{
    printf("\n--- ft_memset ---\n");
    int numbuffer[] = {1, 2, 3, 4};
    char buffer[] = "This is a test of the memset function";
    
    printf("Testing memory set with '*' for 10 bytes\n");
    printf("Before: %s\n", buffer);
    ft_memset(buffer, '*', 10);
    printf("After: %s\n", buffer);
    assert(strncmp(buffer, "**********", 10) == 0 && "Error: first 10 characters should be '*'");

    printf("Testing memory set for int array\n");
    ft_memset(numbuffer, '2', sizeof(numbuffer)); // This will overwrite the buffer with '2' bytes
    for (int i = 0; i < 4; ++i)
    {
        printf("%i ", numbuffer[i]);
        // Expected output depends on how '2' is interpreted in int memory (hexadecimal value '0x32323232')
    }
    printf("\nft_memset passed all tests!\n");
    printf("------------------\n");
}

void    ft_bzero_test()
{
    printf("\n--- ft_bzero ---\n");
    char b_zeroBuffer[] = "Delete me, now I am free!";
    printf("Before bzero: %s\n", b_zeroBuffer);
    ft_bzero(b_zeroBuffer, 10);
    printf("After bzero: %s\n", b_zeroBuffer);
    printf("Memory after 10 bytes: %s\n", b_zeroBuffer + 10);
    assert(strcmp(b_zeroBuffer + 10, " now I am free!") == 0 && "Error: first 10 bytes should be zeroed");
    printf("ft_bzero passed all tests!\n");
    printf("------------------\n");

    printf("\nAll tests passed successfully!\n");
}

void	ft_strlcpy_test()
{
	printf("\n--- ft_strlcpy ---\n");

	char dest[20];
	const char *src = "Hello, World!";
	size_t	src_len;
    
	printf("Test 1: Copy full string with buffer = sizeof(dest)\n");
    	src_len = ft_strlcpy(dest, src, sizeof(dest));
    	printf("Source length: %zu, Destination: %s\n", src_len, dest);
    	assert(src_len == strlen(src) && "Error: Length should be equal to the length of source string");
    	assert(strcmp(dest, src) == 0 && "Error: Destination should match source string");

    	printf("Test 2: Truncated copy with size = 6\n");
    	size_t small_buf_size = 6; 
    	src_len = ft_strlcpy(dest, src, small_buf_size);
    	printf("Source length: %zu, Destination: %s\n", src_len, dest);
    	assert(src_len == strlen(src) && "Error: Length should be equal to the length of source string");
    	assert(strncmp(dest, src, small_buf_size - 1) == 0 && "Error: Destination should match truncated source string");
    	assert(dest[small_buf_size - 1] == '\0' && "Error: Destination should be null-terminated");

    	printf("Test 3: Buffer size is zero\n");
    	src_len = ft_strlcpy(dest, src, 0);
    	printf("Source length: %zu, Destination: %s\n", src_len, dest);
    	assert(src_len == strlen(src) && "Error: Length should be equal to the length of source string");
    	assert(dest[0] != '\0' && "Error: Destination should not be modified when buffer size is 0");

    	printf("Test 4: Copy empty source string\n");
    	const char *empty_src = "";
    	src_len = ft_strlcpy(dest, empty_src, sizeof(dest));
    	printf("Source length: %zu, Destination: %s\n", src_len, dest);
    	assert(src_len == 0 && "Error: Length should be 0 for empty source string");
    	assert(strcmp(dest, empty_src) == 0 && "Error: Destination should match empty source string");

    	printf("\nAll ft_strlcpy tests passed!\n");
}

int main(void)
{
    ft_isalpha_test();
    ft_isdigit_test();
    ft_isascii_test();
    ft_isprint_test();
    ft_strlen_test();
    ft_memset_test();
    ft_bzero_test();
    ft_strlcpy_test();
    return 0;
}


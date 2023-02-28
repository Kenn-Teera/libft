## libft is library with many function

list what i have to do ( but you need to do with yourself na)

### Memory manipulation :

- [x] memset 	is a function that is used to set a block of memory to a specified value.

- [x] bzero 	it's similar to 'memset' but is specific to setting memory to 0.

- [x] memcpy  	is a function that is used to copy a block of memory from one location to another. 
``` 
Ex. dest, src, n 
cp src >> dest
```
- [x] memmove is a function that is used to copy a block of memory from one location to another, even if the source and destination memory blocks overlap.

- [x] memchr function locates the first occurrence of c (converted to an unsigned char) in string s.

- [x] memcmp function compares byte string s1 against byte string s2. Both strings are assumed to be n bytes long.

- [x] calloc function contiguously allocates enough space for count objects that are size bytes of memory each and returns a    pointer to the allocated memory.  The allocated memory is filled with bytes of value zero.

### String manipulation :

- [x] strlen is used to find the length of a null-terminated string.

- [x] strlcpy is used to copy a null-terminated string into a destination buffer of a specified size, while ensuring that the destination buffer is always null-terminated.

- [x] strlcat is used to concatenate a null-terminated string onto the end of another null-terminated string, while ensuring that the destination buffer is always null-terminated and that the resulting string is not truncated.

- [x] strchr is used to find the first occurrence of a character in a null-terminated string.

- [x] strrchr is used to search for the last occurrence of a character in a null-terminated string.

- [x] strncmp is used to compare the first n characters of two null-terminated strings.

- [x] strnstr is a function that is similar to the 'strstr', but it allows you to specify the maximum number of characters to search in the input string.

- [x] strdup is a function that creates a new copy of a string by allocating memory for the new string and copying the contents of the original string to the new string.

### Character :

- [x] isalpha is a function that is used to check whether a given character is an alphabet or not.

- [x] isdigit is a function that is used to check whether a given character is a digit or not.

- [x] isalnum is a function that is used to check whether a given character is an alphanumeric character or not.

- [x] isprint is a function that is used to check whether a given character is a printable character or not.

- [x] toupper is a function that is used to convert a given lowercase letter to its corresponding uppercase letter.

- [x] tolower  is a function that is used to convert a given uppercase letter to its corresponding lowercase letter.

### Another :

- [x] atoi (ASCII to integer) is a function that is used to convert a string of characters representing an integer into an actual integer value.

## TESTER :

Tripouille: https://github.com/Tripouille/libftTester

War-machine: https://github.com/0x050f/libft-war-machine

Unit: https://github.com/alelievr/libft-unit-test

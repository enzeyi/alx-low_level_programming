char *_strncpy(char *dest, char *src, int n) {
    char *dest_start = dest;

    while (*src && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    // If the length of src is less than n, pad the remaining characters with null terminators
    while (n > 0) {
        *dest = '\0';
        dest++;
        n--;
    }

    return dest_start;
}

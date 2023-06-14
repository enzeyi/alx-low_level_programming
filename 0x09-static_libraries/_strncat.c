char *_strncat(char *dest, char *src, int n) {
    char *dest_start = dest;

    // Move the dest pointer to the end of the destination string
    while (*dest) {
        dest++;
    }

    // Append at most n characters from src to dest
    while (*src && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    // Add null terminator to the end of the concatenated string
    *dest = '\0';

    return dest_start;
}

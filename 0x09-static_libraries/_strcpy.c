char *_strcpy(char *dest, char *src) {
    char *dest_start = dest;

    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }

    // Add null terminator to the end of the destination string
    *dest = '\0';

    return dest_start;
}

char *_strcat(char *dest, char *src) {
    char *dest_start = dest;

    // Move the dest pointer to the end of the destination string
    while (*dest) {
        dest++;
    }

    // Append the src string to the end of the dest string
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }

    // Add null terminator to the end of the concatenated string
    *dest = '\0';

    return dest_start;
}

char *_strchr(char *s, char c) {
    while (*s) {
        if (*s == c) {
            return s;  // Found the character
        }
        s++;
    }

    if (c == '\0') {
        return s;  // Return a pointer to the null terminator if c is '\0'
    }

    return ;  // Character not found
}

char *_strstr(char *haystack, char *needle) {
    while (*haystack) {
        char *h = haystack;
        char *n = needle;

        while (*haystack && *n && (*haystack == *n)) {
            haystack++;
            n++;
        }

        if (!*n) {
            return h;  // Found the needle in the haystack
        }

        haystack = h + 1;  // Move to the next character in the haystack
    }

    return ;  // Needle not found in the haystack
}

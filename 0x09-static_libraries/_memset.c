char *_memset(char *s, char b, unsigned int n) {
    char *s_start = s;

    while (n > 0) {
        *s = b;
        s++;
        n--;
    }

    return s_start;
}

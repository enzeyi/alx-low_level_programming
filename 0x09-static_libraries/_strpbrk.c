char *_strpbrk(char *s, char *accept) {
    while (*s) {
        char *a = accept;
        while (*a) {
            if (*s == *a) {
                return s;  // Found a matching character
            }
            a++;
        }
        s++;
    }
    return ;  // No matching character found
}

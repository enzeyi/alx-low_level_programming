void _puts(char *s) {
    while (*s) {
        _putchar(*s);
        s++;
    }
    _putchar('\n');  // Print a newline character at the end
}

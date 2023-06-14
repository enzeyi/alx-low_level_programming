int _isalpha(int c) {
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        return 1;  // Character is an alphabet
    } else {
        return 0;  // Character is not an alphabet
    }
}

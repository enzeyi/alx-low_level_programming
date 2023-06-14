int _atoi(char *s) {
    int result = 0;
    int sign = 1;
    int i = 0;

    // Check for sign
    if (s[0] == '-') {
        sign = -1;
        i++;
    } else if (s[0] == '+') {
        i++;
    }

    // Convert digits to integer
    while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9') {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return sign * result;
}

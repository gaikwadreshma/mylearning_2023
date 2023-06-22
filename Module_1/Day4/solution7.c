#include <stdio.h>

int stringToInt(const char* str) {
    int result = 0;
    int sign = 1;
    int i = 0;
    
    // Check if the number is negative
    if (str[0] == '-') {
        sign = -1;
        i = 1;
    }
    
    // Iterate through each character of the string
    while (str[i] != '\0') {
        // Convert character to digit
        int digit = str[i] - '0';
        
        // Update the result by multiplying it by 10 and adding the current digit
        result = result * 10 + digit;
        
        i++;
    }
    
    // Apply the sign to the result
    result = result * sign;
    
    return result;
}

int main() {
    const char str[] = "-12345";
    int num = stringToInt(str);
    
    printf("String: %s\n", str);
    printf("Integer: %d\n", num);
    
    return 0;
}
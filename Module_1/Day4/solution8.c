#include <stdio.h>

int calculateTotalSeconds(const char* timeString) {
    int hours, minutes, seconds;
    
    sscanf(timeString, "%d:%d:%d", &hours, &minutes, &seconds);
    
    int totalSeconds = hours * 3600 + minutes * 60 + seconds;
    
    return totalSeconds;
}

int main() {
    const char timeString[] = "12:30:45";
    
    int totalSeconds = calculateTotalSeconds(timeString);
    
    printf("Time: %s\n", timeString);
    printf("Total seconds: %d\n", totalSeconds);
    
    return 0;
}

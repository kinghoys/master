#include <stdio.h>
#include <string.h>

int main() {
    char data[100]; // Represents the data to be transmitted
    int count;

    printf("Enter data to be transmitted: ");
    fgets(data, sizeof(data), stdin);

    // Calculate character count (excluding newline)
    count = strlen(data) - 1;

    printf("Character count: %d\n", count);

    // Simulate sending the frame with character count
    printf("Sending frame: [%d]%s", count, data);

    return 0;
}
#include <stdio.h>
#include <string.h>

// Function to reverse the string in-place
void reverseString(char s[], int n) {
    int start = 0;
    int end = n - 1;
    char temp;

    while (start < end) {
        // Swap characters
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char s[100];
    
    printf("Enter the string: ");
    scanf("%s", s);  // For simplicity, no spaces

    int n = strlen(s);

    reverseString(s, n);

    printf("Reversed string: %s\n", s);

    return 0;
}

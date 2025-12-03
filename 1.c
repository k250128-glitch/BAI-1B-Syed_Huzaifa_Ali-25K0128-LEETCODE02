#include <stdio.h>

void moveZeroes(int nums[], int n) {
    int pos = 0;  // position to place the next non-zero element

    // Move all non-zero elements forward
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[pos] = nums[i];
            pos++;
        }
    }

    // Fill remaining positions with 0
    for (int i = pos; i < n; i++) {
        nums[i] = 0;
    }
}

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    moveZeroes(nums, n);

    printf("Array after moving zeros to the end:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}

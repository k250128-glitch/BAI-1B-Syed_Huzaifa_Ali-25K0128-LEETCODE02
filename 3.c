#include <stdio.h>

// Function to remove duplicates in-place
int removeDuplicates(int nums[], int n) {
    if (n == 0) return 0;

    int k = 1;  // index for next unique element

    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[k - 1]) {
            nums[k] = nums[i];  // place unique element at k
            k++;
        }
    }

    return k;  // number of unique elements
}

int main() {
    int n;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter elements of the array in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int k = removeDuplicates(nums, n);

    printf("Number of unique elements: %d\n", k);
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int rotationcount(int nums[], int n)
{
int low = 0, high = n - 1;
while (nums[low] > nums[high])
{
int mid = (low + high) / 2;
if (nums[mid] > nums[high])
{
low = mid + 1;
}
else
{
high = mid;
        }
    }

    return low;
}

int main() {
    int nums[] = {8, 9, 10, 2, 5, 6};
    int n = sizeof(nums) / sizeof(nums[0]);

    printf("The array is rotated %d times\n", find_rotation_count(nums, n));

    int nums2[] = {2, 5, 6, 8, 9, 10};
    n = sizeof(nums2) / sizeof(nums2[0]);

    printf("The array is rotated %d times\n", find_rotation_count(nums2, n));

    return 0;
}

class Solution {
    void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp;

    int i = left;      // starting index of left half
    int j = mid + 1;   // starting index of right half

    // Compare elements and store smaller one
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Copy remaining elements from left half
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    // Copy remaining elements from right half
    while (j <= right) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy sorted elements back to original array
    for (int k = 0; k < temp.size(); k++) {
        arr[left + k] = temp[k];
    }
}

// Merge Sort function
void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right)
        return;

    int mid = (left + right) / 2;

    // Sort left half
    mergeSort(arr, left, mid);

    // Sort right half
    mergeSort(arr, mid + 1, right);

    // Merge both halves
    merge(arr, left, mid, right);
}
public:
    void sortColors(vector<int>& nums) {
            mergeSort(nums, 0, nums.size() - 1);
         
    }
};
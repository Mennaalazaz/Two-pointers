#include <vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1; // Two pointers at the start and end
        int max_area = 0;

        while (l < r) {
            // Calculate the area between the two pointers
            int area = (r - l) * min(height[l], height[r]);
            max_area = max(max_area, area);

            // Maximize the length ( maximize the min value of heights)
            // Move the pointer pointing to the smaller height
            if (height[l] < height[r]) { // if height[l] is smaller ..change it
                l++;
            } else {             // if height[r] is smaller ..change it
                r--;
            }
        }

        return max_area;
    }
};

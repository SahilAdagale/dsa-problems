class Solution {
public:
    int countDays(vector<int>& weights, int capacity) {
        int days = 1;
        int load = 0;

        for (int i =0; i<weights.size(); i++) {
            if(load + weights[i] > capacity) {
                days++;
                load =weights[i];
            }else {
                load =load + weights[i];
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int left = weights[0];
        int right = 0;

        for (int i=0; i<weights.size(); i++) {
            if (weights[i]> left) {
                left= weights[i];
            }
            right=right + weights[i];
        }

        while (left < right) {

            int mid=(left + right) / 2;

            int neededDays=countDays(weights, mid);

            if (neededDays <= days) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};
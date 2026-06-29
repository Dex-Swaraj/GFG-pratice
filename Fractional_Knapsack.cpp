class Solution {
public:
    struct Item {
        int value;
        int weight;
    };

    static bool cmp(Item &a, Item &b) {
        double r1 = (double)a.value / a.weight;
        double r2 = (double)b.value / b.weight;

        return r1 > r2;
    }

    double fractionalKnapsack(vector<int>& val,
                              vector<int>& wt,
                              int capacity) {

        int n = val.size();

        vector<Item> items(n);

        for (int i = 0; i < n; i++) {
            items[i] = {val[i], wt[i]};
        }

        sort(items.begin(), items.end(), cmp);

        double ans = 0.0;

        for (int i = 0; i < n; i++) {

            if (capacity >= items[i].weight) {

                ans += items[i].value;
                capacity -= items[i].weight;

            } else {

                ans += ((double)capacity / items[i].weight)
                       * items[i].value;

                break;
            }
        }

        return ans;
    }
};
#include <vector>
#include <climits>
using namespace std;

int secondlargest(vector<int> &a, int nums) {
    int largest = a[0];
    int slargest = -1;
    for (int i = 1; i < nums; i++) {
        if (a[i] > largest) {
            slargest = largest;
            largest = a[i];
        } else if (a[i] < largest && a[i] > slargest) {
            slargest = a[i];
        }
    }
    return slargest;
}

int secondsmallest(vector<int> &a, int nums) {
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for (int i = 1; i < nums; i++) {
        if (a[i] < smallest) {
            ssmallest = smallest;
            smallest = a[i];
        } else if (a[i] != smallest && a[i] < ssmallest) {
            ssmallest = a[i];
        }
    }
    return ssmallest;
}

class Solution {
public:
    int secondLargestElement(vector<int> &a, int nums) {
        int slargest = secondlargest(a, nums);
        int ssmallest = secondsmallest(a, nums);
     
        return slargest; 
};

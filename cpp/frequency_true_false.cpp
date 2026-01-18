#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    for (int n : nums) {
        if (seen.find(n) != seen.end()) {
            return true;
        }
        seen.insert(n);
    }
    return false;
}

int main() {
    int n, element;
    vector<int> user_array;

    cout << "Enter array of number : ";
    cin >> n;

    cout << "Enter " << n << " number of array = ";
    for (int i = 0; i < n; i++) {
        cin >> element;
        user_array.push_back(element);
    }

    if (containsDuplicate(user_array)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
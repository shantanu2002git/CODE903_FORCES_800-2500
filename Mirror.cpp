#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool has_mirror_representation(int n) {
    vector<int> bits;
    while (n > 0) {
        bits.push_back(n % 2);
        n /= 2;
    }
    int len = bits.size();
    for (int i = 0; i < len / 2; i++) {
        if (bits[i] != bits[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int count_mirror_numbers(int limit) {
    int count = 0;
    for (int i = 1; i <= limit; i++) {
        if (has_mirror_representation(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int num_cases;
    //cout << "Enter the number of test cases: ";
    cin >> num_cases;
    while (num_cases--) {
        int limit;
        //cout << "Enter the limit: ";
        cin >> limit;
        int count = count_mirror_numbers(limit);
        //cout << "There are " << count << " natural numbers up to " << limit << " with mirror binary representation." << endl;
        cout<<count;
    }
    return 0;
}

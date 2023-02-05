#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

int main() {
    vector<int> sequence;
    int input;

    cout << "Enter a set of integers (0 to end): ";
    while (true) {
        cin >> input;
        if (input == 0) break;
        sequence.push_back(input);
    }

    auto start = chrono::high_resolution_clock::now();

    int min_val = sequence[0], max_val = sequence[0];
    for (int i = 1; i < sequence.size(); i++) {
        if (sequence[i] < min_val) min_val = sequence[i];
        if (sequence[i] > max_val) max_val = sequence[i];
    }

    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);

    cout << "Minimum value: " << min_val << endl;
    cout << "Maximum value: " << max_val << endl;
    cout << "Running time: " << duration.count() << " microseconds" << endl;

    return 0;
}

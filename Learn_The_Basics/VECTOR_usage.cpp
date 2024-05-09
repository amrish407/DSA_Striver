#include <iostream>
#include <vector>       //Vector works like a FIFO
using namespace std;

int main() {
    vector<int> ans;
    
    // Populate the vector 'ans' with elements from 1 to 5 using a range-based for loop
    for (int i = 1; i <= 5; ++i) {
        ans.push_back(i); // Add 'i' to the end of the vector
    }
    
    // Iterate over each element in the vector 'ans' using a range-based for loop
    for (auto num : ans) {
        std::cout << num << " "; // Print each element
    }
    
    return 0;
}

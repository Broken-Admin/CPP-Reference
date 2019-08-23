#include <vector>
#include <iostream>

int main( )
{
    std::vector<int> c{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    for (auto &i : c) { // Output
        std::cout << i << " ";
    }
    // 0 1 2 3 4 5 6 7 8 9
 
    std::cout << '\n'; // Endline
 
    c.erase(c.begin()); // Erase first number
 
    for (auto &i : c) { // Output
        std::cout << i << " ";
    }
    // 1 2 3 4 5 6 7 8 9
    
    std::cout << '\n'; // Endline
    
    c.erase(c.begin()+2, c.begin()+5); // Erase 3nd to 6th numbers

    for (auto &i : c) { // Output
        std::cout << i << " ";
    }
    // 1 2 6 7 8 9 

    std::cout << '\n'; // Endline
 
    for (auto it = c.begin(); it != c.end(); ) { // Erase all even numbers
        if (*it % 2 == 0) {
            it = c.erase(it);
        } else {
            ++it;
        }
    }
 
    for (auto &i : c) { // Output
        std::cout << i << " ";
    }
    // 1 7 9

    std::cout << '\n'; // Endline
}

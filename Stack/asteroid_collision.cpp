// //Problem Statement
// You are given an array/list 'asteroids' representing
// asteroids in a row.
// For each element of the given array, its absolute value
// denotes the size of that asteroid, and its sign denotes
// the direction it moves in(+ve meaning right and -ve
// meaning left).
// An asteroid with a weight of O denotes a massless
// asteroid that moves in the right direction.
// All asteroids are moving at the same speed. Whenever
// two asteroids collide, the smaller asteroid gets
// destroyed.
// If both asteroids are the same size, then both asteroids
// get destroyed. Two asteroids moving in the same
// direction never collide.
// You are supposed to find the state of the asteroids after
// all the collisions have taken place.

// input  [3,-2,4]

// output : [3,4]

// input : [6,7,-9,7]
//output : -9,7

//input : 3,4,5,-2,7
//output : 3,4,5,7

// steps
// 1. create a stack
// 2. iterate over the array
// 3. if stack is empty or top of stack is positive and current element is positive then push
// 4. if stack is empty or top of stack is negative and current element is negative then push
// 5. if stack is empty or top of stack is negative and current element is positive then push
// 6. if stack is empty or top of stack is positive and current element is negative then pop
// 7. if stack is empty or top of stack is positive and current element is negative then pop
// 8. if stack is empty or top of stack is negative and current element is positive then push
// 9. if stack is empty or top of stack is positive and current element is negative then pop
// 10. if stack is empty or top of stack is negative and current element is positive then push
// 11. if stack is empty or top of stack is positive and current element is negative then pop
// 12. if stack is empty or top of stack is negative and current element is positive then push
// 13. if stack is empty or top of stack is positive and current element is negative then pop


#include <bits/stdc++.h>
using namespace std;


std::vector<int> asteroidCollision(std::vector<int>& asteroids) {
    std::stack<int> stack; // Initialize a stack to simulate asteroid collisions
    
    for (int asteroid : asteroids) {
        if (stack.empty() || asteroid > 0) {
            // If the stack is empty or the current asteroid is moving to the right,
            // simply push the asteroid onto the stack
            stack.push(asteroid);
        } else {
            // If the current asteroid is moving to the left, check for collisions with
            // asteroids already on the stack
            while (!stack.empty() && stack.top() > 0) {
                if (stack.top() == abs(asteroid)) {
                    // If the sizes are equal, both asteroids get destroyed, so pop the top asteroid
                    stack.pop();
                    break;
                } else if (stack.top() < abs(asteroid)) {
                    // If the asteroid on top of the stack is smaller, pop it
                    stack.pop();
                } else {
                    // If the asteroid on top of the stack is larger, the current asteroid gets destroyed
                    break;
                }
            }
            if (stack.empty() || stack.top() < 0) {
                // If no collisions occurred, or if the current asteroid survives,
                // push the current asteroid onto the stack
                stack.push(asteroid);
            }
        }
    }

    // Convert the stack to a vector and reverse it to maintain the original order
    std::vector<int> result;
    while (!stack.empty()) {
        result.push_back(stack.top());
        stack.pop();
    }
    std::reverse(result.begin(), result.end());
    
    return result;
}

int main() {
    std::vector<int> asteroids1 = {3,4,5,-2,7};
    std::vector<int> result1 = asteroidCollision(asteroids1);
    for (int num : result1) {
        std::cout << num << " ";
    }
    // std::cout << std::endl;

    // std::vector<int> asteroids2 = {6, 7, -9, 7};
    // std::vector<int> result2 = asteroidCollision(asteroids2);
    // for (int num : result2) {
    //     std::cout << num << " ";
    // }
    // std::cout << std::endl;

    // std::vector<int> asteroids3 = {3, 4, 5, -2, 7};
    // std::vector<int> result3 = asteroidCollision(asteroids3);
    // for (int num : result3) {
    //     std::cout << num << " ";
    // }
    // std::cout << std::endl;

    return 0;
}

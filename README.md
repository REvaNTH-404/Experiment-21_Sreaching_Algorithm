# 🔍 Implementation of Fundamental Searching Algorithms in C++

This repository contains C++ implementations of two fundamental searching techniques: **Linear Search** (also known as Sequential Search) and the more efficient **Binary Search**.

***

## 🏷️ Title of the Experiment
Implementation of Searching Algorithms: Linear Search (Sequential Search) and Binary Search.

***

## 🛠️ Tools Used
* **C++ Compiler:** Any C++ compiler (e.g., GCC/G++).
* **IDE/Editor:** VS Code (Visual Studio Code), or a simple text editor.
* **Online Platforms:** Online C++ environments.

***

## 💡 Theory & Algorithms

### 1. Linear Search (Sequential Search)

**Theory:**
Linear Search checks every element in a list one by one until the desired element is found or the end of the list is reached. It is simple to implement but performs poorly on large datasets ($\mathcal{O}(n)$ complexity). It does **not** require the data to be sorted.

**Algorithm:**
1. Start a loop from the beginning of the list (index $i=0$).
2. Compare the current element `arr[i]` with the `target` value.
3. If `arr[i]` equals the `target`, return the index $i$ and stop.
4. If the loop completes without finding a match, return $-1$ (or a similar indicator that the element is not present).

***

### 2. Binary Search

**Theory:**
Binary Search is a highly efficient algorithm ($\mathcal{O}(\log n)$ complexity) that works exclusively on **sorted** arrays. It divides the search interval in half with each iteration by comparing the target value to the middle element. This eliminates half of the remaining elements quickly.

**Algorithm:**
1. Initialize `low` to the first index (0) and `high` to the last index ($\text{size} - 1$).
2. Start a loop that continues while `low` is less than or equal to `high`.
3. Calculate the `mid` index: $\text{mid} = \text{low} + (\text{high} - \text{low}) / 2$.
4. **Compare:**
    * If `arr[mid]` equals the `target`, return `mid` (found).
    * If `arr[mid]` is less than the `target`, set $\text{low} = \text{mid} + 1$ (search the right half).
    * If `arr[mid]` is greater than the `target`, set $\text{high} = \text{mid} - 1$ (search the left half).
5. If the loop terminates without finding the element, return $-1$.

***

## 🎯 Conclusion

This experiment successfully implemented and demonstrated the two fundamental search algorithms. **Linear Search** proves flexible for unsorted data, while **Binary Search** highlights efficiency but depends strictly on the input data being **sorted**.

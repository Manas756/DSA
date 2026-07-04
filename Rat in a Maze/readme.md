# Rat in a Maze using Backtracking (C++)

## Overview

This project solves the classic **Rat in a Maze** problem using the **Backtracking** algorithm.

A rat starts from the **top-left corner `(0,0)`** of an `N × N` maze and must reach the **bottom-right corner `(N-1,N-1)`**.

The rat can move only through cells containing `1`.

Blocked cells contain `0`.

The program finds **all possible paths** from the source to the destination.

---

## Problem Statement

Given a square matrix where:

- `1` → Open path
- `0` → Blocked path

Find every possible path from the top-left cell to the bottom-right cell.

Allowed movements:

- **D** → Down
- **U** → Up
- **L** → Left
- **R** → Right

A cell cannot be visited more than once in the same path.

---

## Example

Input Matrix

```text
1 0 0 0
1 1 0 1
0 1 0 0
1 1 1 1
```

Output

```text
DRDDRR
```

---

# Algorithm Used

The solution uses **Depth First Search (DFS)** with **Backtracking**.

At every cell:

1. Check if the current cell is valid.
2. Mark it as visited.
3. Explore all possible directions.
4. Store the path if the destination is reached.
5. Backtrack by unmarking the current cell.

---

# Backtracking

Backtracking means:

- Choose a path.
- Explore it completely.
- If it doesn't lead to a solution,
  undo the choice and try another path.

Example

```
Start

↓

Go Down

↓

Dead End

↓

Backtrack

↓

Go Right

↓

Destination Found
```

---

# Function Explanation

## helper()

```cpp
void helper(vector<vector<int>> &mat,
            int r,
            int c,
            string path,
            vector<string> &ans,
            vector<vector<bool>> &vis)
```

### Parameters

| Parameter | Description |
|-----------|-------------|
| mat | Maze matrix |
| r | Current row |
| c | Current column |
| path | Current path string |
| ans | Stores all valid paths |
| vis | Keeps track of visited cells |

---

### Base Case 1

```cpp
if(r<0 || c<0 || r>=n || c>=n)
```

Stops recursion if indices go outside the maze.

---

### Base Case 2

```cpp
mat[r][c]==0
```

Stops recursion if the cell is blocked.

---

### Base Case 3

```cpp
vis[r][c]==true
```

Prevents revisiting a cell and avoids infinite loops.

---

### Destination

```cpp
if(r==n-1 && c==n-1)
```

Destination reached.

Current path is stored inside the answer vector.

---

### Mark as Visited

```cpp
vis[r][c]=true;
```

Marks the current cell before exploring.

---

### Recursive Calls

```cpp
helper(... r+1 ... path+"D");
helper(... r-1 ... path+"U");
helper(... c+1 ... path+"R");
helper(... c-1 ... path+"L");
```

Explore every possible direction.

---

### Backtracking Step

```cpp
vis[r][c]=false;
```

Removes the current cell from the visited array so another path can use it.

This is the most important step in backtracking.

---

## findPath()

```cpp
vector<string> findPath(vector<vector<int>> &mat)
```

Responsibilities:

- Creates the visited matrix.
- Creates the answer vector.
- Starts DFS from `(0,0)`.
- Returns all possible paths.

---

## main()

Creates the maze matrix.

Calls

```cpp
findPath(mat);
```

Prints every valid path.

---

# Dry Run

Maze

```text
1 0 0 0
1 1 0 1
0 1 0 0
1 1 1 1
```

Traversal

```
(0,0)

↓

Down

↓

(1,0)

↓

Right

↓

(1,1)

↓

Down

↓

(2,1)

↓

Down

↓

(3,1)

↓

Right

↓

(3,2)

↓

Right

↓

(3,3)
```

Path generated

```
DRDDRR
```

---

# Time Complexity

Let

```
N = size of matrix
```

Worst Case

```
O(4^(N²))
```

Reason:

Each cell can explore up to four directions.

Backtracking explores every possible valid path.

---

# Space Complexity

Visited Matrix

```
O(N²)
```

Recursive Stack

```
O(N²)
```

Total

```
O(N²)
```

---

# Concepts Used

- Recursion
- Backtracking
- Depth First Search (DFS)
- 2D Arrays
- Vectors
- Strings
- Matrix Traversal

---

# Edge Cases Handled

✔ Starting cell blocked

✔ Destination blocked

✔ Single cell matrix

✔ Multiple valid paths

✔ No valid path

✔ Cycles avoided using visited array

---

# Learning Outcomes

After completing this project you will understand:

- How recursion works
- How DFS explores a graph
- How backtracking undoes decisions
- How to avoid infinite recursion
- How to solve path-finding problems
- How visited arrays work
- How recursive state is maintained

---

# Sample Output

```
DRDDRR
```

---

# Future Improvements

- Return paths in lexicographical order.
- Count total number of paths.
- Visualize the traversal.
- Use BFS to find the shortest path.
- Extend to larger mazes.
- Allow diagonal movement.
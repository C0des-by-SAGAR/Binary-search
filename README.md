# Binary-search

This README provides documentation for a C program that performs binary search on a sorted array. The code takes user input to create an array, sorts it, and then searches for a specified element using the binary search algorithm. This documentation explains the purpose, functionality, and usage of the code.

## Table of Contents
- [Introduction](#introduction)
- [Prerequisites](#prerequisites)
- [Usage](#usage)
- [Code Explanation](#code-explanation)

## Introduction

Binary search is an efficient search algorithm that works on sorted arrays. It repeatedly divides the search interval in half until the desired element is found or the search interval becomes empty. This C program takes an array of integers as input, sorts it, and then performs binary search to find a specified element within the array.

## Prerequisites

Before using this code, ensure that you have the following prerequisites:
- A C compiler installed on your system (e.g., GCC)
- Basic knowledge of C programming
- A terminal or command prompt for running the code

## Usage

1. Compile the code using a C compiler. For example, using GCC in the terminal:

   ```shell
   gcc binary_search.c -o binary_search
   ```

2. Run the compiled executable:

   ```shell
   ./binary_search
   ```

3. Follow the on-screen prompts to enter the length of the array, its elements, and the element to be searched.

4. The program will display the result, indicating whether the element was found in the sorted array or not.

## Code Explanation

The provided C code can be divided into the following key sections:

1. **Input:** The code starts by prompting the user to input the length of the array and its elements.

2. **Sorting:** The array is then sorted in ascending order using a simple bubble sort algorithm.

3. **Binary Search:** The binary search algorithm is used to find the specified element within the sorted array. It first calculates the middle index and compares the element at that index to the target element. Depending on whether the target element is greater or smaller than the middle element, it continues the search in the appropriate half of the array. The search continues until the element is found or the search interval becomes empty.

4. **Output:** The program outputs the sorted array and whether the specified element was found along with its position in the array.

5. **Getch Function:** The `getch` function is used to hold the console window open until a key is pressed, allowing the user to view the results.

Please note that this code uses the `<conio.h>` library for the `getch` function, which is not part of the standard C library and is primarily used in older DOS-based compilers. To run this code on modern systems, you may need to replace the `getch` function with a suitable alternative for input buffering.

This code can be modified and improved for better efficiency and robustness, but it serves as a basic example of binary search in C.

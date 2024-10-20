- ### Topics Overview

- Array 
- Creation of AArray
- Index in Array
- Input/Output in Array
- Loops in Array
- min and max Value find
- Linear Search
- Reverse of Array

#  Data Structure

Data structure are the structures in our code when we are programming which are used to store data

we are learning programming bcz we want to build real  life systems one day

every system runs on data

Data is the fuel for development/coding/programming. So  we need to learn how to handle data.

During coding when we have to store information/data we store that in the of different data structures.

# Algorithms

Algorithms are the methods to perform different efficient operations on data.

searching,sorting etc

---

##  Array Syntax

`int marks[5]`
- size of array with no elements
    `int price[100]; ` 100 elements/int size array created in memory
- size of array with elements
    `int marks[5] = {99,100,55,88,66};`
- array with elements without size
    `int itemsPrice[] = {99,100,55}; ` //size 3

- each block of array occupy  memory of 1 int
- array resolve multiple variable problems

### Size of Array

`int arraySize = sizeof(array)/sizeof(int);`

## Properties of Array

- Store same type data
- Contiguous in memory(data aik sath store hota hae) => data store in continuous manner.
- Linear (straight line structure)

---

## Pass By Value
(Pass copy of variable/Value)

- When we pass primitive data types variable as an argument in any function  
-eg. In main function we have `x=10` if main function call another function and pass x as an argument like `changeX(x)` hten changeX function will have copy of X not original X
- any change in copy of X (in Changex function) will not be reflected in main function

## Pass By Reference

- Reference == Address
- Pass by reference means passing address of something.
- And when we have address we can make changes in original copy 
- Array always pass by reference in a function (implicitly)
-  Array name is a pointer (implicitly)  =>  it store starting address
- When we change the value wich is passed by reference then the original value also change because it is not the copy but its original value

---

## Array Methods

### Min(), Max()

- min() syntax `min(array[i],smVal)` => return smallest of two
- max() syntax `man(array[i],smVal)` =>  return max of two

---

## Linear Search Algorithm:

- Go to each index and search target
- Check one by one linearly for target (0-(size-1))
- Time complexity O(n) 
- This is linear time complexity
- This Algorithm is called linear search Algo bcz its time complexity is linear

---

## Reverse An Array

### 2 Pointer Approach

- Starting Position, Ending Position

By Swapping 

- There is swap function in cpp
- swap(val1,val2)
- Time complexity O(n)

---

## HOMEWORK PROBLEAMS

### 1- WAF to calculate sum & product of all numbers in an array.

### 2- WAF to swap the max & min number in an array.

### 3- WAF to print the  unique values in an array.

### 4- WAF to print intersection of two array
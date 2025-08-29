
# Applicatios-of-pointers

## Aim:

To study and implement pointer operations in C++ using call by value and call by reference methods.

---

## Software Required:

* Visual Studio (or any C++ compiler)

---

## Theory:

In C++, data can be passed to functions in two primary ways:

### 1. Call by Value:

* A copy of the actual parameter is passed to the function.
* Changes made inside the function do not affect the original variable.
* Memory is allocated separately for formal parameters.

#### Advantages:

* Ensures data safety by preserving the original values.
* Prevents unintended side effects in the calling function.

#### Disadvantages:

* Additional memory is used for copies.
* Inefficient for large data types.
* Not suitable for operations requiring actual data modification.

---

### 2. Call by Reference:

* The address of the actual parameter is passed to the function.
* Any change made inside the function directly affects the original variable.
* Both formal and actual parameters refer to the same memory location.

#### Advantages:

* Efficient memory usage.
* Enables functions to modify original data.
* Suitable for large data structures.

#### Disadvantages:

* Higher risk of unintended data changes.
* Requires careful handling of pointers and addresses.
* Can introduce issues in multi-threaded or complex programs.

---

## Implementation Overview:

### Case 1: Call by Value

Demonstrates that swapping values within the function does not affect the original variables.

### **Case 2: Call by Reference**

Illustrates successful swapping of values using pointers by directly modifying original data.

### **Case 3: Salary Increment Using Call by Reference**

Evaluates employee eligibility for salary increment based on predefined conditions and updates salary directly via reference.

---

## Algorithms:

### Swap Using Call by Value

1. Start
2. Define a function that swaps two numbers using value parameters.
3. Call the function from `main`.
4. Observe that original values remain unchanged.
5. End



### Swap Using Call by Reference

1. Start
2. Define a function that swaps two numbers using pointer parameters.
3. Call the function by passing addresses.
4. Observe that original values are changed.
5. End



### Salary Increment Eligibility and Calculation

1. Start
2. Take employee inputs: current salary, years of experience, profit, project status, and total projects.
3. Check eligibility based on set conditions.
4. If eligible, increase salary by 20% using a reference.
5. Display new salary or inform ineligibility.
6. End



## Conclusion:

Call by reference allows direct data modification using pointers, while call by value maintains original data integrity.

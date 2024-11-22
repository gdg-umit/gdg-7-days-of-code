## **GDG 7 Days of Code - Day 4 Challenge**

**Problem Title**:  **Exams in University**

## **Problem Statement**

In a certain university, there are \( X \) colleges, and each colleges has \( Y \) students. The year-end exam results are in, and a total of \( Z \) students passed the exams.

Your task is to determine whether the number of students who passed in uni was **strictly greater than 50%** of the total students. If yes, print `"YES"`. Otherwise, print `"NO"`.

You may print each character of the output string in **uppercase** or **lowercase** (e.g., `"YES"`, `"yes"` will be treated as identical).

Preferred Language(s): C, C++, Python, Java
No external libraries are to be used.
---

## **Input Format**

1. Each of the following lines contains three space-separated integers \( X, Y, Z \):
   - \( X \): Number of schools.
   - \( Y \): Number of students in each school.
   - \( Z \): Number of students who passed the exams.

---

## **Output Format**

For each test case, output on a new line:  
- `"YES"` if the number of students who passed was strictly greater than 50% of the total students.
- `"NO"` otherwise.

---

## **Examples**

### **Sample Input**
```
2 10 12
1 5 3
3 6 9
```

### **Sample Output**
```
YES
YES
NO
```


---

## **Explanation**

### **Test Case 1**  
- Total students = \( 2 \* 10 = 20 \)  
- Students passed = \( 12 \)  
- Percentage passed = \(12/20 \* 100 = 60\% \)  
- Since \( 60\% > 50\% \), output is `"YES"`.

### **Test Case 2**  
- Total students = \( 1 \* 5 = 5 \)  
- Students passed = \( 3 \)  
- Percentage passed = \( 3/5 \* 100 = 60\% \)  
- Since \( 60\% > 50\% \), output is `"YES"`.

### **Test Case 3**  
- Total students = \( 3 \* 6 = 18 \)  
- Students passed = \( 9 \)  
- Percentage passed = \( 9/18 \* 100 = 50\% \)  
- Since \( 50\% \) is **not strictly greater than 50%**, output is `"NO"`.

---

## **Edge Cases**
1. \( Z = 0 \): All students failed. Output should be `"NO"`.
2. \( Z = X \* Y \): All students passed. Output should be `"YES"`.
3. \( Z = 0.5 \* X \times Y \): Output should be `"NO"` as it is **not strictly greater** than 50%.

**Happy Coding!!** 🚀

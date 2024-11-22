### **GDG 7 Days of Code - Day 2 Challenge**

**Problem Title**: Pattern Printing**

---

#### **Problem Statement:**
Write a program to print a pyramid pattern based on the input value N. Each level of the pyramid contains a specific number of stars * such that the number of stars at each level increases by  2 as you move down, starting from 1 star at the topmost level. 
The width of the pyramid base depends on the input N. The stars are centered, with spaces added before the stars to maintain the pyramid shape.

---

#### **Example Input and Output**

##### **Example 1**  
**Input**:  
```
3
```

**Output**:  
```
  *
 ***
*****
```

---

##### **Example 2**  
**Input**:  
```
6
```

**Output**:  
```
     *
    ***
   *****
  *******
 *********
***********
```

---

#### **Explanation**  
For \( N = 3 \):
- The first level has \( 1 \) star, preceded by \( 2 \) spaces.
- The second level has \( 3 \) stars, preceded by \( 1 \) space.
- The third level has \( 5 \) stars, preceded by \( 0 \) spaces.

For \( N = 6 \):
- The levels follow the same logic, starting with \( 5 \) spaces before the first star and reducing the number of spaces by \( 1 \) at each subsequent level.

---

#### **Instructions**
Use loops to print the pyramid pattern.
The value of N should be entered by the user as input.
Make sure to add spaces before stars to align the pyramid correctly.
**Good luck!!** 😊

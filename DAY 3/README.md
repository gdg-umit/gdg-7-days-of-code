# **Foo Bar Baz Problem**

## **Problem Statement**
You need to implement a program that prints one of the words `"Foo"`, `"Bar"`, `"FooBar"`, or `"Baz"` for every integer within a given range. The output depends on the properties of the number as follows:

1. Print `"FooBar"` if the number is a multiple of **both 5 and 7**.  
2. Print `"Foo"` if the number is a multiple of **5** (but not 7).  
3. Print `"Bar"` if the number is a multiple of **7** (but not 5).  
4. Print `"Baz"` if the number is **neither a multiple of 5 nor 7**.  

The program takes two non-negative integers, a and b, as input, representing the start and end of the range. It then evaluates each number in this range and prints the appropriate result.

---

## **Input Format**
- Two integers, \( a \) and \( b \), where \( a < b \).

## **Output Format**
- \( n \) lines of strings, where \( n \) is the number of integers between \( a \) and \( b \) (inclusive). Each line corresponds to one of the words `"FooBar"`, `"Foo"`, `"Bar"`, or `"Baz"` based on the rules above.

---

## **Example Input and Output**

### **Sample Input 1**
```
31
36
```

### **Sample Output 1**
```
Baz
Baz
Baz
Baz
FooBar
Baz
```
### **Explanation**
1. **31** is neither a multiple of 5 nor 7 → `"Baz"`.  
2. **32** is neither a multiple of 5 nor 7 → `"Baz"`.  
3. **33** is neither a multiple of 5 nor 7 → `"Baz"`.  
4. **34** is neither a multiple of 5 nor 7 → `"Baz"`. 
5. **35** is a multiple of 5 and 7 → `"FooBar"`. 
6. **36** is neither a multiple of 5 nor 7 → `"Baz"`.  

### **Sample Input 2**
```
2
7
```

### **Sample Output 2**
```
Baz
Baz
Baz
Foo
Baz
Bar
```
---
### **Explanation**
1. **2** is neither a multiple of 5 nor 7 → `"Baz"`.  
2. **3** is neither a multiple of 5 nor 7 → `"Baz"`.  
3. **4** is neither a multiple of 5 nor 7 → `"Baz"`.  
4. **5** is multiple of 5 →  
5. **6** is neither a multiple of 5 nor 7 → `"Baz"`. 
6. **7** is a multiple of 7 → `"Bar"`.  

---

## **Additional Notes**
- Ensure the input satisfies \( a < b \). If not, handle errors gracefully or prompt for correct input.
- Test the program with edge cases, such as \( a = 1, b = 2 \), or larger values within the constraints.

Happy Coding!! 🚀

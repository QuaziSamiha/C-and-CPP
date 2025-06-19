Let's analyze the `swap` function and evaluate each statement (S1 to S5) with **examples and reasoning**.

---

### 🔍 Function:

```cpp
void swap(int *px, int *py)
{
   *px = *px - *py;
   *py = *px + *py;
   *px = *py - *px;
}
```

This function swaps the values pointed to by `px` and `py` **without using a temporary variable** using arithmetic (subtraction/addition) operations.

---

## ✅ Working Principle (How the Swap Works)

Let’s assume:

```cpp
int a = 10, b = 20;
swap(&a, &b);
```

Step-by-step:

- `*px = 10`, `*py = 20`
- `*px = 10 - 20 = -10`
- `*py = -10 + 20 = 10`
- `*px = 10 - (-10) = 20`

Now:
`*px = 20` and `*py = 10` → ✅ Values swapped!

---

## Now, let’s analyze the statements:

---

### **S1: Will generate a compilation error**

❌ **Incorrect**

Explanation:

- The code uses only valid pointer dereferencing and arithmetic operations on integers.
- There is no syntax or type mismatch.
- So, it will compile **successfully** if `px` and `py` are valid `int*`.

---

### **S2: May generate a segmentation fault at runtime depending on the arguments passed**

✅ **Correct**

Explanation:

- If **null or invalid pointers** are passed, dereferencing them (`*px`, `*py`) will lead to **segmentation fault**.

Example:

```cpp
int* p = NULL;
int a = 5;
swap(p, &a); // ❌ Segmentation fault: p is NULL
```

So, yes, runtime errors **may occur** depending on the arguments.

---

### **S3: Correctly implements the swap procedure for all input pointers referring to integers stored in memory locations accessible to the process**

✅ **Correct**

Explanation:

- If `px` and `py` point to **valid and distinct memory locations**, the swap works correctly for all such values.
- Handles both positive and negative integers.

But note:

- If `px` and `py` point to **same address**, it will zero out the value:

Example:

```cpp
int a = 5;
swap(&a, &a); // *px and *py refer to same location
```

Step-by-step:

- `*px = 5 - 5 = 0`
- `*py = 0 + 0 = 0`
- `*px = 0 - 0 = 0`

Result: `a = 0` → ❌ Incorrect swap

So, it's correct only if `px != py`.

Thus, **S3 is wrong if interpreted as "all valid pointers" including same address**.

Hence, ❌ **Incorrect**

---

### **S4: Implements the swap procedure correctly for some but not all valid input pointers**

✅ **Correct**

Explanation:

- Works **if**:

  - `px` and `py` are valid.
  - `px != py`.

- Fails (no-op or corrupts value) if:

  - `px == py`
  - `px` or `py` is NULL

So, this statement **correctly reflects** the limitations.

---

### **S5: May add or subtract integers and pointers**

❌ **Incorrect**

Explanation:

- No pointers are **added or subtracted**.
- All arithmetic is on **dereferenced values** (`*px`, `*py`) which are `int`, not `int*`.

Example:
It does `*px = *px - *py;` (int - int) ✅
Not `px - py` or `px + 1` ❌

So no illegal pointer arithmetic here.

---

## ✅ Summary Table

| Statement | Validity     | Explanation                                                 |
| --------- | ------------ | ----------------------------------------------------------- |
| **S1**    | ❌ Incorrect | No compilation error                                        |
| **S2**    | ✅ Correct   | Segmentation fault may occur if invalid pointers are passed |
| **S3**    | ❌ Incorrect | Fails if `px == py`                                         |
| **S4**    | ✅ Correct   | Works for some, but not all valid pointer combinations      |
| **S5**    | ❌ Incorrect | No pointer arithmetic is done                               |

---

Let me know if you want a **version of `swap` that works in all cases**, including when `px == py`.

# SWAP

C function to Swap strings
Last Updated : 18 Apr, 2023
Let us consider the below program.

#include<stdio.h>
void swap(char *str1, char *str2)
{
char *temp = str1;
str1 = str2;
str2 = temp;
}
​
int main()
{
char *str1 = "geeks";
char \*str2 = "forgeeks";
swap(str1, str2);
printf("str1 is %s, str2 is %s", str1, str2);
getchar();
return 0;
}

Output
str1 is geeks, str2 is forgeeks
Output of the program is str1 is geeks, str2 is forgeeks. So the above swap() function doesn’t swap strings. The function just changes local pointer variables and the changes are not reflected outside the function. Let us see the correct ways for swapping strings:

Method 1(Swap Pointers) If you are using character pointer for strings (not arrays) then change str1 and str2 to point each other’s data. i.e., swap pointers. In a function, if we want to change a pointer (and obviously we want changes to be reflected outside the function) then we need to pass a pointer to the pointer.

#include<stdio.h>
​
/_ Swaps strings by swapping pointers _/
void swap1(char **str1_ptr, char **str2_ptr)
{
char *temp = *str1_ptr;
*str1_ptr = *str2_ptr;
*str2_ptr = temp;
}
​
int main()
{
char *str1 = "geeks";
char \*str2 = "forgeeks";
swap1(&str1, &str2);
printf("str1 is %s, str2 is %s", str1, str2);
getchar();
return 0;
}

Output
str1 is forgeeks, str2 is geeks
This method cannot be applied if strings are stored using character arrays.

Method 2(Swap Data) If you are using character arrays to store strings then preferred way is to swap the data of both arrays.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
​
/_ Swaps strings by swapping data_/
void swap2(char *str1, char *str2)
{
char _temp = (char _)malloc((strlen(str1) + 1) \* sizeof(char));
strcpy(temp, str1);
strcpy(str1, str2);
strcpy(str2, temp);
free(temp);
}
​
int main()
{
char str1[10] = "geeks";
char str2[10] = "forgeeks";
swap2(str1, str2);
printf("str1 is %s, str2 is %s", str1, str2);
getchar();
return 0;
}

Output
str1 is forgeeks, str2 is geeks
This method cannot be applied for strings stored in read-only block of memory.

Time Complexity: O(N)
Auxiliary Space: O(N)

- [quiz](https://www.geeksforgeeks.org/quizzes/pointers-gq/)

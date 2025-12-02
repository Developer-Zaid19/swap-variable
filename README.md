# Swap Variables – C, C++, Python Examples

In this repo, I've simply demonstrated how easy or complex it is to swap variables in different programming languages.
Especially in Python, this process is very short and clean.

---

## 📌 Purpose

This repo is primarily designed for beginners so they can compare how swapping works in C and C++ and how easy it is in Python.
If you're in the learning phase, these examples will be very useful.

---

## 🧩 Swap in C

```c
#include <stdio.h>

int main() {
    int a = 10, b = 20, temp;

    temp = a;
    a = b;
    b = temp;

    printf("a = %d, b = %d", a, b);
    return 0;
}
```
## 🧩 Swap in C++
```c++
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, temp;

    temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << ", b = " << b;
    return 0;
}
```
## 🧩 Swap in Python
```py
a = 10
b = 20

a, b = b, a

print(a, b)
```
## 🎥 Video Link

If you haven't seen my video, please check it out:

👉 **[Swap Variables Explained – Watch Video](https://youtube.com/shorts/M2XU3Wzz9CQ)**


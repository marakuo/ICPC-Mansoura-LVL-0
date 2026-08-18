
# Frequency Arrays in C++

## What is a Frequency Array?

A **frequency array** is an array used to count how many times each value appears in another array.

Instead of repeatedly searching through the original array, we store the number of occurrences of each value.

### Example

Suppose we have:

```cpp
int arr[] = {1, 2, 2, 3, 1, 2};
```

The frequencies are:

```text
1 → 2 times
2 → 3 times
3 → 1 time
```

We can store this information in:

```cpp
freq[1] = 2
freq[2] = 3
freq[3] = 1
```

---

## Basic Idea

For every number in the original array:

```cpp
freq[arr[i]]++;
```

That's the entire idea.

### Example

```cpp
#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 2, 3, 1, 2};

    int freq[10] = {};

    for (int i = 0; i < 6; i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            cout << i << " appears "
                 << freq[i] << " times\n";
        }
    }

    return 0;
}
```

### Output

```text
1 appears 2 times
2 appears 3 times
3 appears 1 times
```

---

# How Does It Work?

Initially:

```text
freq = [0, 0, 0, 0, 0, ...]
```

We read:

```text
1
```

So:

```cpp
freq[1]++;
```

Now:

```text
freq = [0, 1, 0, 0, 0, ...]
```

Then we read:

```text
2
```

```cpp
freq[2]++;
```

Now:

```text
freq = [0, 1, 1, 0, 0, ...]
```

We read another `2`:

```cpp
freq[2]++;
```

Now:

```text
freq = [0, 1, 2, 0, 0, ...]
```

So `freq[2]` tells us:

> **How many times did 2 appear?**

---

# Why Use Frequency Arrays?

Imagine this problem:

> Given an array, find how many times each number appears.

Without a frequency array, you might repeatedly search the array.

With a frequency array:

```cpp
freq[arr[i]]++;
```

We process every element **once**.

### Time Complexity

If the array contains `n` elements:

```text
O(n)
```

The frequency array gives us very fast access:

```cpp
freq[x]
```

This tells us the frequency of `x` in **O(1)** time.

---

# Important: The Values Must Fit

A frequency array works when the possible values are within a manageable range.

For example, if:

```text
0 ≤ arr[i] ≤ 100
```

we can easily use:

```cpp
int freq[101] = {};
```

Because we need indices:

```text
0 → 100
```

---

# Example With User Input

```cpp
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];
    int freq[101] = {};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    for (int i = 0; i <= 100; i++) {
        if (freq[i] > 0) {
            cout << i << " -> " << freq[i] << '\n';
        }
    }

    return 0;
}
```

If the input is:

```text
7
5 2 5 3 2 5 3
```

The frequency array contains:

```text
2 → 2
3 → 2
5 → 3
```

---

# Frequency of One Specific Number

You don't always need to print everything.

If we want to know how many times `x` appears:

```cpp
cout << freq[x];
```

Example:

```cpp
int x;
cin >> x;

cout << freq[x];
```

If:

```text
arr = {1, 2, 2, 3, 2}
x = 2
```

Then:

```text
freq[2] = 3
```

---

# Character Frequency

Frequency arrays are not only for integers.

Characters have integer ASCII values, so we can count characters too.

```cpp
string s;
cin >> s;

int freq[256] = {};

for (char c : s) {
    freq[c]++;
}
```

For example:

```text
s = "banana"
```

We get:

```text
b → 1
a → 3
n → 2
```

Then:

```cpp
cout << freq['a'];
```

prints:

```text
3
```

---

# Lowercase English Letters

If the string contains only lowercase letters:

```text
a → z
```

we only need an array of size `26`.

```cpp
int freq[26] = {};

for (char c : s) {
    freq[c - 'a']++;
}
```

### Why `c - 'a'`?

Characters have integer ASCII values.

```text
'a' - 'a' = 0
'b' - 'a' = 1
'c' - 'a' = 2
...
'z' - 'a' = 25
```

So:

```cpp
freq[c - 'a']++;
```

maps every letter to an index from `0` to `25`.

Example:

```text
"banana"
```

becomes:

```text
b → 1
a → 0
n → 13
a → 0
n → 13
a → 0
```

Therefore:

```text
freq[0]  = 3   // a
freq[1]  = 1   // b
freq[13] = 2   // n
```

---

# A Very Common ICPC Pattern

You may encounter problems like:

> Given a string, determine whether every character occurs at most once.

Frequency array:

```cpp
int freq[26] = {};

for (char c : s) {
    freq[c - 'a']++;

    if (freq[c - 'a'] > 1) {
        cout << "Repeated";
        return 0;
    }
}

cout << "Unique";
```

---

# Another Common Pattern: Most Frequent Element

```cpp
int freq[101] = {};

for (int i = 0; i < n; i++) {
    freq[arr[i]]++;
}

int mostFrequent = 0;

for (int i = 1; i <= 100; i++) {
    if (freq[i] > freq[mostFrequent]) {
        mostFrequent = i;
    }
}

cout << mostFrequent;
```

---

# Frequency Array vs Original Array

Think of them as two different things:

```text
Original array:

arr
 ↓
[1, 2, 2, 3, 1, 2]


Frequency array:

index:  0  1  2  3  4 ...
freq:   0  2  3  1  0 ...
```

The **index itself represents the value**.

So:

```cpp
freq[2]
```

means:

> How many times does the number `2` appear?

---

# The Pattern to Memorize

For integers:

```cpp
int freq[MAX] = {};

for (int x : arr) {
    freq[x]++;
}
```

For lowercase letters:

```cpp
int freq[26] = {};

for (char c : s) {
    freq[c - 'a']++;
}
```

To query:

```cpp
freq[x]
```

or:

```cpp
freq[c - 'a']
```

---

# The Main Idea

You can think of a frequency array as a **counter for every possible value**.

Instead of asking:

> "How many times does `5` appear?"

every time by searching the entire array,

we simply ask:

```cpp
freq[5]
```

And that's why frequency arrays are such a common technique in **ICPC/problem solving**.

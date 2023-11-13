---
description: >-
  https://leetcode.com/problems/h-index/description/?envType=study-plan-v2&envId=top-interview-150
---

# LC274. h-index

Given an array of integers `citations` where `citations[i]` is the number of citations a researcher received for their `ith` paper, return _the researcher's h-index_.

According to the [definition of h-index on Wikipedia](https://en.wikipedia.org/wiki/H-index): The h-index is defined as the maximum value of `h` such that the given researcher has published at least `h` papers that have each been cited at least `h` times.

&#x20;

**Example 1:**

<pre><code><strong>Input: citations = [3,0,6,1,5]
</strong><strong>Output: 3
</strong><strong>Explanation: [3,0,6,1,5] means the researcher has 5 papers in total and each of them had received 3, 0, 6, 1, 5 citations respectively.
</strong>Since the researcher has 3 papers with at least 3 citations each and the remaining two with no more than 3 citations each, their h-index is 3.
</code></pre>

**Example 2:**

<pre><code><strong>Input: citations = [1,3,1]
</strong><strong>Output: 1
</strong></code></pre>

&#x20;

**Constraints:**

* `n == citations.length`
* `1 <= n <= 5000`
* `0 <= citations[i] <= 1000`

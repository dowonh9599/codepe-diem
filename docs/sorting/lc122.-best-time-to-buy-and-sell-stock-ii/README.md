---
description: >-
  https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/?envType=study-plan-v2&envId=top-interview-150
---

# LC122. Best Time to Buy and Sell Stock II

You are given an integer array `prices` where `prices[i]` is the price of a given stock on the `ith` day.

On each day, you may decide to buy and/or sell the stock. You can only hold **at most one** share of the stock at any time. However, you can buy it then immediately sell it on the **same day**.

Find and return _the **maximum** profit you can achieve_.

&#x20;

**Example 1:**

<pre><code><strong>Input: prices = [7,1,5,3,6,4]
</strong><strong>Output: 7
</strong><strong>Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
</strong>Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
Total profit is 4 + 3 = 7.
</code></pre>

**Example 2:**

<pre><code><strong>Input: prices = [1,2,3,4,5]
</strong><strong>Output: 4
</strong><strong>Explanation: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.
</strong>Total profit is 4.
</code></pre>

**Example 3:**

<pre><code><strong>Input: prices = [7,6,4,3,1]
</strong><strong>Output: 0
</strong><strong>Explanation: There is no way to make a positive profit, so we never buy the stock to achieve the maximum profit of 0.
</strong></code></pre>

&#x20;

**Constraints:**

* `1 <= prices.length <= 3 * 104`
* `0 <= prices[i] <= 104`

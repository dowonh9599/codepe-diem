---
description: >-
  https://leetcode.com/problems/best-time-to-buy-and-sell-stock/?envType=study-plan-v2&envId=top-interview-150
---

# LC121. Best Time to Buy and Sell Stock

You are given an array `prices` where `prices[i]` is the price of a given stock on the `ith` day.

You want to maximize your profit by choosing a **single day** to buy one stock and choosing a **different day in the future** to sell that stock.

Return _the maximum profit you can achieve from this transaction_. If you cannot achieve any profit, return `0`.

&#x20;

**Example 1:**

<pre><code><strong>Input: prices = [7,1,5,3,6,4]
</strong><strong>Output: 5
</strong><strong>Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
</strong>Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
</code></pre>

**Example 2:**

<pre><code><strong>Input: prices = [7,6,4,3,1]
</strong><strong>Output: 0
</strong><strong>Explanation: In this case, no transactions are done and the max profit = 0.
</strong></code></pre>

&#x20;

**Constraints:**

* `1 <= prices.length <= 105`
* `0 <= prices[i] <= 104`

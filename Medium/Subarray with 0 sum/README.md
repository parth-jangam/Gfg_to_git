<h2><a href="https://www.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1?page=5&sortBy=submissions">Subarray with 0 sum</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array of integers. Find if there is a <strong style="user-select: auto;">subarray </strong>(of size at-least one) with <strong style="user-select: auto;">0 sum</strong>. You just need to return true/false&nbsp;</span><span style="font-size: 18px; user-select: auto;">depending upon whether there is a subarray present with 0-sum or not. Printing will be taken care by the driver code.</span></p>
<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:</span></strong>
<span style="font-size: 18px; user-select: auto;">n = 5
arr = {4,2,-3,1,6}
<strong style="user-select: auto;">Output: 
</strong>Yes<strong style="user-select: auto;">
Explanation: 
</strong>2, -3, 1 is the subarray with sum 0.</span></pre>
<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:</span></strong>
<span style="font-size: 18px; user-select: auto;">n = 5
arr = {4,2,0,1,6}
<strong style="user-select: auto;">Output:</strong> 
Yes
<strong style="user-select: auto;">Explanation:</strong> 
0 is one of the element in the array so there exist a subarray with sum 0.</span>
</pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">You only need to complete the function <strong style="user-select: auto;">subArrayExists()&nbsp;</strong>that takes<strong style="user-select: auto;"> array </strong>and<strong style="user-select: auto;"> n</strong> as <strong style="user-select: auto;">parameters </strong>and <strong style="user-select: auto;">returns </strong>true or false.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(n).<br style="user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(n).</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">1 &lt;= n&nbsp;&lt;= 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">-10<sup style="user-select: auto;">5</sup> &lt;= a[i] &lt;= 10<sup style="user-select: auto;">5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<code>Adobe</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>sliding-window</code>&nbsp;<code>Hash</code>&nbsp;<code>Map</code>&nbsp;<code>STL</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;
<h2><a href="https://www.geeksforgeeks.org/problems/shortest-source-to-destination-path3544/1?page=2&difficulty=Medium&status=unsolved&sortBy=submissions">Shortest Source to Destination Path</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;">Given a&nbsp;2D binary matrix A(0-based index) of dimensions NxM. Find the minimum number of steps required to reach from (0,0) to (X, Y).<br style="user-select: auto;">Note: You can only move left, right, up and down, and only through cells that <strong style="user-select: auto;">contain 1</strong>.</span></p>
<p style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N=3, M=4
A=[[1,0,0,0], 
   [1,1,0,1],<br style="user-select: auto;">   [0,1,1,1]]
X=2, Y=3 
<strong style="user-select: auto;">Output:</strong>
5
<strong style="user-select: auto;">Explanation:</strong>
The shortest path is as follows:
(0,0)-&gt;(1,0)-&gt;(1,1)-&gt;(2,1)-&gt;(2,2)-&gt;(2,3).</span></pre>
<p style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N=3, M=4
A=[[1,1,1,1],
   [0,0,0,1],<br style="user-select: auto;">   [0,0,0,1]]
X=0, Y=3
<strong style="user-select: auto;">Output:</strong>
3
<strong style="user-select: auto;">Explanation:</strong>
The shortest path is as follows:
(0,0)-&gt;(0,1)-&gt;(0,2)-&gt;(0,3).</span></pre>
<p style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">shortestDistance()</strong> which takes the integer N, M, X, Y, and the 2D binary matrix A as input parameters and returns the minimum number of steps required to go from (0,0) to (X, Y).If it is impossible to go from (0,0) to&nbsp;(X, Y),then function returns -1. If value of the cell (0,0) is 0&nbsp;(i.e&nbsp; A[0][0]=0)&nbsp;then return -1.</span></p>
<p style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>O(N*M)<br style="user-select: auto;"><strong style="user-select: auto;">Expected Auxillary Space:</strong>O(N*M)</span></p>
<p style="user-select: auto;"><span style="font-size: 14pt; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">1 &lt;= N,M &lt;= 250<br style="user-select: auto;"></span><span style="font-size: 14pt; user-select: auto;">0 &lt;= X &lt; N<br style="user-select: auto;"></span><span style="font-size: 14pt; user-select: auto;">0 &lt;= Y &lt; M<br style="user-select: auto;">0 &lt;= A[i][j] &lt;= 1</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Samsung</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>DFS</code>&nbsp;<code>Matrix</code>&nbsp;<code>Graph</code>&nbsp;<code>BFS</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;
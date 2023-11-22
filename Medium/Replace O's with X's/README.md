<h2><a href="https://www.geeksforgeeks.org/problems/replace-os-with-xs0052/1?page=3&difficulty=Medium&status=unsolved&sortBy=submissions">Replace O's with X's</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a matrix <strong style="user-select: auto;">mat</strong> of size <strong style="user-select: auto;">N x M</strong> where every element is either 'O' or 'X'. Replace all 'O' or a group of 'O' with 'X' that are surrounded by 'X'. </span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">A 'O' (or a set of 'O') is considered to be surrounded by 'X' if there are 'X' at locations just below, just above, just left and just right of it.</span></p>
<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> <br style="user-select: auto;">n = 5, m = 4
mat = {{'X', 'X', 'X', 'X'}, 
&nbsp;      {'X', 'O', 'X', 'X'}, 
&nbsp;      {'X', 'O', 'O', 'X'}, 
&nbsp;      {'X', 'O', 'X', 'X'}, 
&nbsp;      {'X', 'X', 'O', 'O'}}
<strong style="user-select: auto;">Output:</strong> <br style="user-select: auto;">ans = {{'X', 'X', 'X', 'X'}, 
&nbsp;      {'X', 'X', 'X', 'X'}, 
&nbsp;      {'X', 'X', 'X', 'X'}, 
&nbsp;      {'X', 'X', 'X', 'X'}, 
&nbsp;      {'X', 'X', 'O', 'O'}}
<strong style="user-select: auto;">Explanation:</strong> <br style="user-select: auto;">Following the rule the above matrix is the resultant matrix. </span>
</pre>
<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>
<p style="user-select: auto;">&nbsp;</p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> <br style="user-select: auto;">n = 5, m = 4
mat = {{'X', 'O', 'X', 'X'}, 
&nbsp;      {'X', 'O', 'X', 'X'}, 
&nbsp;      {'X', 'O', 'O', 'X'}, 
&nbsp;      {'X', 'O', 'X', 'X'}, 
&nbsp;      {'X', 'X', 'O', 'O'}}
<strong style="user-select: auto;">Output:</strong> <br style="user-select: auto;">ans = {{'X', 'O', 'X', 'X'}, 
&nbsp;      {'X', 'O', 'X', 'X'}, 
&nbsp;      {'X', 'O', 'O', 'X'}, 
&nbsp;      {'X', 'O', 'X', 'X'}, 
&nbsp;      {'X', 'X', 'O', 'O'}}
<strong style="user-select: auto;">Explanation:</strong> <br style="user-select: auto;">Following the rule the above matrix is the resultant matrix.</span></pre>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">You do not need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">fill()</strong> which takes <strong style="user-select: auto;">N</strong>, <strong style="user-select: auto;">M</strong> and <strong style="user-select: auto;">mat</strong> as input parameters ad returns a 2D array representing the resultant matrix.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(n*m)<br style="user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(n*m)</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">1 ≤ n, m ≤ 500</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Recursion</code>&nbsp;<code>Matrix</code>&nbsp;<code>Graph</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;
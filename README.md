<h1 align="center">Interview questions</h1>
<h3>Question 1</h3>
Rahman has N coins; let's denote the value of coin i by vi. Since today is Eid, Rahman is going to give 
one coin to each of his two children. He wants the absolute value of the difference between the values of 
coins given to the two children to be as small as possible, so that he would be as fair as possible.
Help Rahman by telling him the minimum possible difference between the values of the coins given to 
the two children. Of course, Rahman cannot give the same coin to both children.<br><br>
Input<br>
The first line of the input contains a single integer T denoting the number of test cases. The description 
of T test cases follows.<br>
• The first line of each test case contains a single integer N.<br>
• The second line contains N space-separated integers v1,v2,…,vN.<br><br>
Output<br>
For each test case, print a single line containing one integer — the minimum possible difference.<br>
Constraints<br>
• 1≤T≤100<br>
• 2≤N≤105<br><br>
Example Input<br>
2<br>
3<br>
1 4 2<br>
3<br>
1 3 3<br><br>
Example Output<br>
1<br>
0<br><br>
Explanation<br>
Example case 1: Chef gives the coin with value 1 to his first child and the coin with value 2 to the second 
child, so the answer is 2−1=1.<br>
Example case 2: Chef gives each of his children a coin with value 3, so the difference is 0<br>
<h3>Question 2</h3>
Chef is a really nice and respectful person, in sharp contrast to his little brother, who is a very nasty and 
disrespectful person. Chef always sends messages to his friends in all small letters, whereas the little 
brother sends messages in all capital letters.<br><br>
You just received a message given by a string s. You don't know whether this message is sent by Chef or 
his brother. Also, the communication channel through which you received the message is erroneous and 
hence can flip a letter from uppercase to lowercase or vice versa. However, you know that this channel 
can make at most K such flips.<br><br>
Determine whether the message could have been sent only by Chef, only by the little brother, by both or 
by none.<br><br>
Input<br>
• The first line of the input contains a single integer T denoting the number of test cases. The 
description of T test cases follows.<br>
• The first line of each test case contains two space-separated integers N and K denoting the length of 
the string s and the maximum number of flips that the erroneous channel can make.<br>
• The second line contains a single string s denoting the message you received.<br><br>
Output<br>
For each test case, output a single line containing one string — "chef", "brother", "both" or "none".<br><br>
Constraints<br>
• 1 ≤ T ≤ 1000<br>
• 1 ≤ N ≤ 100<br>
• 0 ≤ K ≤ N<br>
• s consists only of (lowercase and uppercase) English letters<br><br>
Example
Input<br>
4<br>
5 1<br>
frauD<br>
5 1<br>
FRAUD<br>
4 4<br>
Life<br>
10 4<br>
sTRAWBerry<br><br>
Output<br>
chef<br>
brother<br>
both<br>
none<br>
<h3>Question 3</h3>
Harry Potter is on a mission to destroy You-Know-Who's Horcruxes. The first Horcrux that he 
encountered in the Chamber of Secrets is Tom Riddle's diary. The diary was with Ginny and it 
forced her to open the Chamber of Secrets. Harry wants to know the different people who had 
ever possessed the diary to make sure they are not under its influence.<br><br>
He has names of n people who possessed the diary in order. You need to tell, for each person, if 
he/she possessed the diary at some point before or not. <br><br>
Formally, for a name si in the i-th line, output "YES" (without quotes) if there exists an index j 
such that si = sj and j<i otherwise, output "NO" (without quotes).<br><br>
Input:<br>
First line of input contains an integer n (1 ≤ n ≤ 100) — the number of names in the list.<br>
Next n lines each contain a string si, consisting of lowercase English letters. The length of each 
string is between 1 and 100.<br><br>
Output:<br>
n lines each containing either "YES" or "NO" (without quotes), depending on whether this string 
was already present in the stream or not<br><br>
Example<br>
<img src="Screenshot 2021-11-23 154531.jpg">

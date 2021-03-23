/* Task
Given an array, , of  integers, print 's elements in reverse order as a single line of space-separated numbers.

Example


Print 4 3 2 1. Each integer is separated by one space.

Input Format

The first line contains an integer,  (the size of our array).
The second line contains  space-separated integers that describe array 's elements.

Constraints

Constraints

, where  is the  integer in the array.
Output Format

Print the elements of array  in reverse order as a single line of space-separated numbers.

Sample Input

4
1 4 3 2
Sample Output

2 3 4 1

*/

#include<iostream>
using namespace std;
int main()
{
    int N,i;
    cin >> N;
    int A[N];
    for(i=0; i<N;i++)
    {
        cin >> A[i];
    }
    for (i=N-1;i>=0;i--)
    {
        cout<<A[i]<<" ";
    }
}
/*
given an nxn binary matrix, flip the image horizontally, then invert it and return the resulting image

To flip an image horizontally means that each row of the image is reversed
    - for example, flipping [1,1,0] horizontally results in [0,1,1]
TO invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0.
    - for example, inverting [0,1,1] results in [1,0,0]

Example 1:
    Input: [[1,1,0],[1,0,1],[0,0,1]]
    Output: [[1,0,0],[0,1,0],[1,1,1]]
    Explanation: First reverse each row: [[0,1,1], [1,0,1],[0,0,0]].
    then, inverse the image: [[1,0,0],[0,1,0],[1,1,1]]

Example 2:
    Input: [[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]
    Output: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
    Explanation: First reverse each row: [[0,0,1,1],[1,0,0,1],[1,1,1,0],[0,1,0,1]].
    then, inverse the image: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
*/

/*
Input: [[1,1,0],[1,0,1],[0,0,1]]
Output: [[1,0,0],[0,1,0],[1,1,1]]
*/

#include <iostream>
#include <vector>

using namespace std;

//creates vector
vector<vector<int>> flipImageConverter(int n) {
    vector<int> vectorMatrix(n, n);
    vector<vector<int>> anwser(n, vectorMatrix);
    return anwser;
}

int main(){
    
    
    
    return 0;
}

/* 
Alex anwser

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> solution(image.size(), vector<int>(image[0].size()));
        int left, right;
        for(int row = 0; row < image.size(); row++){
            left = 0;
            right = (image[row].size()) -1;
            while(left < right){
                solution[row][left] = (image[row][right]+1)%2;
                solution[row][right] = (image[row][left] + 1)%2;
                left++;
                right--;
            }
            if(image[row].size()%2 != 0){
                solution[row][left] = (image[row][left]+1) %2;
            }

        }

        return solution;
    }
};
*/
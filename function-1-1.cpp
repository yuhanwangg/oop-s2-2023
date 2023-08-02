/* Given a matrix of integers, return the sum of the elements along 
the main diagonal (top left bottom right)*/

int sum_diagonal(int array[4][4]) {
    int sum = 0;
    for (int i = 0; i<4; i++){
        for (int j = 0; j<4; j++){
            if (i == j){
                sum = sum + array[i][j];
            }
        }
    }
    return sum;
}
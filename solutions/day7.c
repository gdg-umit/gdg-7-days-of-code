#include <stdio.h>

void setZeroes(int matrix[100][100], int N, int M) {
    int firstRowZero = 0, firstColZero = 0;

    for (int j = 0; j < M; j++) {
        if (matrix[0][j] == 0) {
            firstRowZero = 1;
            break;}}

    for (int i = 0; i < N; i++) {
        if (matrix[i][0] == 0) {
            firstColZero = 1;
            break;}}

    for (int i = 1; i < N; i++) {
        for (int j = 1; j < M; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;  
                matrix[0][j] = 0; }}}  
  
    for (int i = 1; i < N; i++) {
        for (int j = 1; j < M; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0; }}}
    
    if (firstRowZero) {
        for (int j = 0; j < M; j++) {
            matrix[0][j] = 0; }}
      
    if (firstColZero) {
        for (int i = 0; i < N; i++) {
            matrix[i][0] = 0; }}}
 
int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int matrix[100][100];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]); }}
    
    setZeroes(matrix, N, M);
    
    printf("-------\nOutput matrix: \n");
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", matrix[i][j]); }      
        printf("\n"); }
 
    return 0;
}

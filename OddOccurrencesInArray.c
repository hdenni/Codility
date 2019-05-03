// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int i, x=A[0];
    
    for(i=1; i<N; i++)
        x^=A[i];
    
    return x;
}

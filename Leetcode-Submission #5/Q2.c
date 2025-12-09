// Answer (i)  6 malloc() calls.

// Answer (ii)  Check p after first malloc and check p[i] inside the loop.

// Answer (iii)  Must free each row before freeing p.


// ------Answer (iv)-----------------

int **create_matrix(int m, int n){
    int **p;

    p = malloc(m * sizeof(int*));          
    if(p == NULL) return NULL;

    p[0] = malloc(m * n * sizeof(int));    
    if(p[0] == NULL){
        free(p);
        return NULL;
    }

    for(int i = 1; i < m; i++){
        p[i] = p[0] + (i * n);
    }

    return p;
}

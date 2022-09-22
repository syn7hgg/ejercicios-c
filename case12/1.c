void imprimeArcos(int **M, int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (M[i][j] != 0) {
                printf("(%i, %i) $%i\n", i, j, M[i][j]);
            }
        }
    }
}
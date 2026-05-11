/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 5 - Foundation of Algorithm
 *   Hari dan Tanggal    : Senin, 11 Mei 2026
 *   Nama (NIM)          : Nahidl Denhaq Syaha (13224089)
 *   Nama File           : Soal 1.c
 *   Deskripsi           : Menentukan degree setiap node (simpul) dari adjacency matrix, node dengan simpul terbanyak, dan node yang terisolasi
 * 
 */
#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int degree[n];
    for(int i = 0; i < n; i++) {
        int deg_temp = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 1) {
                deg_temp++;
            }
        }
        degree[i] = deg_temp;
    }
    int node_max = -1;
    int node_idx =  0;
    int isolated =  0;
    for (int i = 0; i < n; i++) {
        if (degree[i] > node_max) {
            node_max = degree[i];
            node_idx = i;
        }
        if (degree[i] == 0) {
            isolated++;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("DEGREE %d %d\n", i, degree[i]);
    }
    printf("MAX_VERTEX %d\n", node_idx);
    if (isolated == 0) {
        printf("ISOLATED NONE");
    } else {
        printf("ISOLATED");
        for (int i = 0; i < n; i++) {
            if (degree[i] == 0) {
                printf(" %d", i);
            }
        }
    }
}

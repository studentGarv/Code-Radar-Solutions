#include <stdio.h>

// Function to implement the ranking logic
void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    // Step 1: Create a dense ranking system (remove duplicates)
    int dense_rank[200000], rank_count = 0;
    dense_rank[rank_count++] = ranked[0];

    for (int i = 1; i < n; i++) {
        if (ranked[i] != ranked[i - 1]) {
            dense_rank[rank_count++] = ranked[i];
        }
    }

    // Step 2: Use two-pointer technique to find ranks efficiently
    int index = rank_count - 1; // Start from the lowest rank
    for (int i = 0; i < m; i++) {
        while (index >= 0 && player[i] >= dense_rank[index]) {
            index--; // Move up in the ranking
        }
        result[i] = index + 2; // Rank starts from 1, so add 2
    }
}

int main() {
    int n, m;
    scanf("%d", &n);
    int ranked[200000];
    for (int i = 0; i < n; i++) scanf("%d", &ranked[i]);

    scanf("%d", &m);
    int player[200000];
    for (int i = 0; i < m; i++) scanf("%d", &player[i]);

    int result[200000];

    // Call the ranking function
    trackPlayerRanks(ranked, n, player, m, result);

    // Output the ranks
    for (int i = 0; i < m; i++) printf("%d\n", result[i]);

    return 0;
}

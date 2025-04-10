#include <stdio.h>

int main() {
    int i, j, k, n, a[50], frame[10], freq[10], no, count = 0, min, pos, avail;

    printf("\nEnter the number of pages : ");
    scanf("%d", &n);

    printf("Enter the page numbers : ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the number of frames : ");
    scanf("%d", &no);

    for (i = 0; i < no; i++) {
        frame[i] = -1;
        freq[i] = 0;
    }

    printf("\n Ref_String\t Page_Frames\n");

    for (i = 0; i < n; i++) {
        printf("%d\t\t", a[i]);
        avail = 0;

        for (j = 0; j < no; j++) {
            if (frame[j] == a[i]) {
                freq[j]++; // increase frequency of the accessed page
                avail = 1;
                break;
            }
        }

        if (avail == 0) {
            pos = 0;
            min = freq[0];
            for (j = 1; j < no; j++) {
                if (freq[j] < min) {
                    min = freq[j];
                    pos = j;
                }
            }
            frame[pos] = a[i];
            freq[pos] = 1; // reset frequency for new page
            count++;

            for (k = 0; k < no; k++) {
                if (frame[k] != -1)
                    printf("%d\t", frame[k]);
                else
                    printf("-\t");
            }
        }

        printf("\n");
    }

    printf("\nTotal Page Faults = %d\n", count);
    return 0;
}

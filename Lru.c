#include <stdio.h>

int main() {
    int i, j, k, n, a[50], frame[10], no, count = 0, least, time[10], t = 0, avail;

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
        time[i] = 0;
    }

    printf("\n Ref_String\t Page_Frames\n");

    for (i = 0; i < n; i++) {
        printf("%d\t\t", a[i]);
        avail = 0;

        for (j = 0; j < no; j++) {
            if (frame[j] == a[i]) {
                avail = 1;
                time[j] = t++;  // update the time of access
                break;
            }
        }

        if (avail == 0) {
            least = 0;
            for (j = 1; j < no; j++) {
                if (time[j] < time[least])
                    least = j;
            }

            frame[least] = a[i];
            time[least] = t++;
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

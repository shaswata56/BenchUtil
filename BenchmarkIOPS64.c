#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void	initIOPS64 (const int POOL);
void	*calculateIOPS64 (void *arg);

int main (int argc, char** argv) {
    int n;
    if (argc == 1) {
        printf("Number of CPU cores to run Benchmark: ");
        scanf("%d", &n);
    } else {
        n = atoi(argv[1]);
    }
    printf("Benchmarking for 64 Bit Integer operations per second\n");
    initIOPS64(n);
    return 0;
}

void *calculateIOPS64 (void *arg) {
    unsigned long long noOfOperations = 0, loopOperations = 30 * 52;
    long long int a = 124235250001, b = 21241201001, c = 2342234320000, d = 233240000000001, e= 2341200000100000, g = 123112003001, h =56740012007, k =240010001001, l =34224003003006, m= 3242352500060006, n = 512412487236, o = 24223432, p = 11234142738462, r = 8532114414, s = 31125646724, t =67451241564, u = 34447892317, w =3244427389, x =8913189230, y =12323782349, v1 =0000001000023, v2 = 3000009000009, v3 = 565000000204, v4 = 30000090009, v5 = 78743777777;

    while (1) {
        c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));
	c *= ((((d + e) + (v5 * v5)) * ((a * (v1 + v2)) + (b * (o + p))) + ((g * h) + (x * y)) * (t + u) + ((k * l) + (g * k)) * (w * l)) * (((m * n) + (k + n)) + ((r * s) + (v3 * v4))));

        *((unsigned long long *)arg) = noOfOperations += loopOperations;
    }
}


void initIOPS64 (const int POOL) {

    time_t	now; time(&now);
    pthread_t memThreads[POOL];
    unsigned long long iopsLog[POOL][6];
    unsigned long long iops[6], tFlops[POOL], maxiops = 0, temp = 0, singleCoreMax = 0;

    for (int i = 0 ; i < 1; i++) {
        if (i == 0)
            for (int r = 0; r < POOL; r++) {
                tFlops[r] = 0;
                iopsLog[r][i] = 0;
                pthread_create(&memThreads[r], NULL, calculateIOPS64, &tFlops[r]);
            }
        sleep(60);
        for (int r = 0; r < POOL; r++)
            iopsLog[r][i] = tFlops[r];
    }

    for (int i = 0; i < POOL; i++)
        pthread_cancel(memThreads[i]);

    FILE *fptr;
    fptr = fopen("iopsBench.txt", "a");
    fprintf(fptr, "\n%s", ctime(&now));
    fprintf(fptr, "Benchmarking for 64 Bit Integer operations per second\n");

    for (int i = 0; i < 1; i++) {
        iops[i] = 0;
        printf("%d| ", i + 1);
        fprintf(fptr, "%d| ", i + 1);
        for (int r = 0; r < POOL; r++) {
            temp = (i == 0) ? (iopsLog[r][i] / 60) : (iopsLog[r][i] - iopsLog[r][i - 1]) / 60;
            iops[i] += temp;
            singleCoreMax = (temp > singleCoreMax) ? temp : singleCoreMax;
            printf("Tr %d: %llu ", r + 1, temp);
            fprintf(fptr, "Tr %d: %llu ", r + 1, temp);
        }
        printf("IOPS = %llu\n", iops[i]);
        fprintf(fptr, "IOPS = %llu\n", iops[i]);
        maxiops = (iops[i] > maxiops) ? iops[i] : maxiops;
    }
    printf("Maximum CPU Throughput: %lf Gigaiops.\n", maxiops / 1000000000.0f);
    printf("Maximum Single Core Throughput: %lf Gigaiops.\n", singleCoreMax / 1000000000.0f);
    fprintf(fptr, "Maximum CPU Throughput: %lf Gigaiops.\n", maxiops / 1000000000.0f);
    fprintf(fptr, "Maximum Single Core Throughput: %lf Gigaiops.\n", singleCoreMax / 1000000000.0f);
    fclose(fptr);
}

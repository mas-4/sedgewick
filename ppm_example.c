#include <stdio.h>

int main() {
    int width = 256, height = 256;
    FILE *fp = fopen("output.ppm", "w");

    // Write PPM header
    fprintf(fp, "P3\n%d %d\n255\n", width, height);

    // Write pixel data (gradient)
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            int r = x % 256; // Red gradient
            int g = y % 256; // Green gradient
            int b = (x + y) % 256; // Blue gradient
            fprintf(fp, "%d %d %d ", r, g, b);
        }
        fprintf(fp, "\n");
    }

    fclose(fp);
    return 0;
}
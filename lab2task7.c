#include <stdio.h>

int main() {
    char line[100];
    FILE *infile = fopen("input.txt","r");
    FILE *outfile= fopen("output.txt","w");

    fgets(line,100,infile);
    fprintf(outfile,"%s",line);
    fclose(outfile);
    fclose(infile);
    return 0;
}

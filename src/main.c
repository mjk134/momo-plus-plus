#include <stdio.h>

typedef struct {
    char* input_path;
    char* output_path;
    int error_code;
} Arguments;

Arguments parse_arguments(int argc, char **argv) {
    Arguments args;

    if (argc < 3) {
        printf("Invalid number of arguements \n");
        args.error_code = 1;
        return args;
    }

    args.input_path = 1[argv];
    args.output_path = 2[argv];
    args.error_code = 0;

    return args;
}

int main(int argc, char **argv) {

    Arguments args = parse_arguments(argc, argv);

    if (args.error_code != 0) {
        printf("An error parsing arguments has occured. Error Code: %d \n", args.error_code);
        return 1;
    }
    printf("Input: %s \n", args.input_path);
    printf("Output: %s \n", args.output_path);

    FILE *fp = fopen(args.input_path, "r");
}
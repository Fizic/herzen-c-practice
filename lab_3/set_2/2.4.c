#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum DataType {
    Int,
    Char
};

union HttpCode {
    int value;
    char text_value[20];
};

struct Response {
    union HttpCode http_code;
    enum DataType data_type;
};

void print_array(struct Response *arr) {
    for (int i = 0; i < 2; i++) {
        switch (arr[i].data_type) {
            case Int:
                printf("%d\n", arr[i].http_code.value);
            case Char:
                printf("%s", arr[i].http_code.text_value);
        }
    }
}

int main() {
    struct Response *responses = (struct Response *) malloc(sizeof(struct Response) * 2);
    responses[0].http_code.value = 200;
    responses[0].data_type = Int;
    strcpy(responses[1].http_code.text_value, "http.cat/500");
    responses[1].data_type = Char;
    print_array(responses);
    free(responses);
    return EXIT_SUCCESS;
}
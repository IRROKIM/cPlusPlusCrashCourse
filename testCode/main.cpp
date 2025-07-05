#include <cstdio>

// int main(){
//     printf("Hello, world!");
//     return 0;
// }


//Functions
//파라미터라는 입력 객체를 수용하는 코드 블록이며 출력 객체를 발신자에게 반환.
int step_function(int x){
    int result = 0;
    if (x > 0) {
        result = -1;
    } else if (x < 0) {
        result = 1;
    } 
    return result;
}

int main() {
    int num1 = 42;
    int result1 = step_function(num1);

    int num2 = 0;
    int result2 = step_function(num2);

    int num3 = -32767;
    int result3 = step_function(num3);

    printf("Num1: %d, Step: %d\n", num1, result1);
    printf("Num2: %d, Step: %d\n", num2, result2);
    printf("Num3: %d, Step: %d\n", num3, result3);

    return 0;
}
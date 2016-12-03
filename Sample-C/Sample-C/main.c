#include <stdio.h>

// 根据格式符来显示字符变量的值
int main (void) {
    
    printf("Please enter a character.\n");
    
    char ch;
    
    scanf("%c", &ch);
    
    printf("The code for %c is %d.\n", ch, ch);
    
    return 0;
}

//// 十六进制和八进制
//int main (void) {
//    
//    int x = 100;
//    
//    printf("dec = %d, octal = %o, hex = %x\n", x, x, x);
//    
//    printf("dec = %d, octal = %#o, hex = %#x\n", x, x, x);
//    
//    return 0;
//}

//// 输入函数
//int main (void) {
//    
//    float value;
//    
//    printf("input: ");
//    
//    scanf("%f", &value);
//    
//    printf("out: %f\n", value);
//    
//    return 0;
//}

//// 函数声明
//void butler(void);
//
//int main (void) {
//    
//    butler();
//    
//    return 0;
//}
//
//void butler(void) {
//    printf("You rang, sir?\n");
//}

//// 输出函数
//int main (void) {
//    
//    int num;
//    
//    num = 1;
//    
//    printf("I am a simple ");
//    
//    printf("computer.\n");
//    
//    printf("My favorite number is %d because it is first.\n", num);
//    
//    return 0;
//}

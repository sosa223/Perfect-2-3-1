#include <stdio.h>


int input() {
  int num;
  char c;
  printf("Enter a number: ");
        if (scanf("%d", &num) == 1) {
            return num; 
        } 
        // Added this for error message if user inputs character for inpur.
        else {  
            printf("You have a invalid input, Please input only numbers and try again.\n"); 
            while ((c = getchar()) != '\n'); 
            return input(); 
        }
    }


int perfect(int num) {
    if (num < 2) return 0; 

    int sum = 1; 
    for (int n = 2; n * n <= num; n++) {
        if (num % n == 0) {
            sum += n;
            if (n != num / n) {
                sum += num / n; } 
        }
    
    }
    return sum == num;
}


void inputResult(int num, int isPerfect) {
    if (isPerfect)
        printf("%d is a Perfect Number\n", num);
    else
        printf("%d is Not a Perfect Number\n", num);
}

int main() {
    int number = input(); 
    int result = perfect(number); 
    inputResult(number, result); 

    return 0;
}

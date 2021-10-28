#include <stdio.h>

int main() {
  char op;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", & op);
  printf("Enter one operator: ");
  scanf("%lf", & first);
  printf("Enter two operator: ");
  scanf("%lf", & second);

  switch (op) {
  case '+':
    printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
    break;
  case '-':
    printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
    break;
  case '*':
    printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
    break;
  case '/':
    printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
    break;
  default:
    printf("Error! operator is not correct");
  }
  return 0;
}

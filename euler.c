#include <stdio.h>

int problem1(int num){
  int counter;
  int sum = 0;
  for(counter = 1; counter < num; counter++) {
    if(((counter % 3) == 0) || ((counter % 5) == 0)) {
      sum += counter;
    }
  }
  return sum;
}
int problem6(int num){
  int counter;
  int sumofsquared = 0;
  int sumsquared = 0;
  int result;
  for(counter = 0; counter <= num; counter++) {
    sumofsquared += (counter * counter);
    sumsquared += counter;
  }
  return (sumsquared * sumsquared) - sumofsquared;
}


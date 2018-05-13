# include <stdio.h>
# include <math.h>

int n = 1000000;

double compute_simple(double xs[]){
  double sum = 0.0;
  for(int i=0; i<n; i++){
    sum += log((double)xs[i]);
  }
  return sum;
}

int main(int argc, char *args[]){
  double xs[n];
  double result;

  for(int i=0; i<n; i++){
    xs[i] = 1 + (double)i / n;
  }

  result = compute_simple(xs);
  //  printf("%f\n", result);
  return 0;
}


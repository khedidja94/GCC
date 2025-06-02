#include <stdio.h>

int main () {
  float average;   
  int i ;
  int j ;
  int notes[2][5];

  notes[ 0 ][ 0 ] = 80;
  notes[ 0 ][ 1 ] = 70 ;
  notes[ 0 ][ 2 ] = 65 ;
  notes[ 0 ][ 3 ] = 89 ;
  notes[ 0 ][ 4 ] = 90 ;

  notes[ 1 ][ 0 ] = 85 ;
  notes[ 1 ][ 1 ] = 80 ;
  notes[ 1 ][ 2 ] = 80 ; 
  notes[ 1 ][ 3 ] = 82 ; 
  notes[ 1 ][ 4 ] = 87 ; 
  for ( i=0 ; i < 2 ; i ++ ) { 
    average = 0;
    for (j =0 ; j <5 ; j++ ) { 
      average += notes[ i ][ j ]; 
    }
    average /= 5.0 ; 
    if (i == 0 ) {
      printf("the average marks obtaines in subject %d is : %.2f\n" , i,average);
    }
    return 0;
  }
}


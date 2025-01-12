#include <stdio.h>

#define TABSTOP 8

int main(){

  int c;
  int lineLength = 0;

  while((c = getchar()) != EOF) {
    if(c == '\t'){
      // calculate spaces required by segmenting the line based on it's length % TABSTOP
      int spaces_required = TABSTOP - (lineLength % TABSTOP);

      // append the chars to the line
      while(--spaces_required >= 0) putchar(' ');

      // reset the line length
      lineLength = 0;
    } 
    else if(c == '\n'){
      // reset the line length as we're moving to a new line
      lineLength = 0;

      // actually print the newline char
      putchar('\n');
    }
    else {
      ++lineLength;
      putchar(c);
    }
  }

  return 0;
}

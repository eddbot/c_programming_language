#include <stdio.h>

#define TABSTOP 8

int main(){

  int c;
  int line_length = 0;

  while((c = getchar()) != EOF) {
    if(c == '\t'){
      // calculate spaces required by segmenting the line based on it's length % TABSTOP
      int spaces_required = TABSTOP - (line_length % TABSTOP);

      // append the chars to the line
      while(--spaces_required >= 0) putchar(' ');

      // reset the line length
      line_length = 0;
    } 
    else if(c == '\n'){
      // reset the line length as we're moving to a new line
      line_length = 0;

      // actually print the newline char
      putchar('\n');
    }
    else {
      ++line_length;
      putchar(c);
    }
  }

  return 0;
}

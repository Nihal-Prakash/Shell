#define LSH_RL_BUFSIZE 1024

char* lsh_read_line(){
    int bufsize = LSH_RL_BUFSIZE;
    int position = 0;
    char* buffer = malloc(sizeof(char) * bufsize);
    int c; //EOF is an integer, not a character

    if(!buffer) {
        fprintf(stderr, "lsh: allocation error\n");
        exit(-1);
    }

    while(1){
        c = getchar();

        if (c == EOF || c == '\n') {
            buffer[position] = '\0';
            return buffer;
        } else {
            buffer[position] = c;
        }

        position++;

        //Reallocation in case of overflow
        if (position >= bufsize) {
            bufsize += LSH_RL_BUFSIZE;
            buffer = realloc(buffer, bufsize);
            
            if(!buffer) {
            fprintf(stderr, "lsh: allocation error\n");
            exit(-1);
            }
        } 
    } 
} 


// Newer versions of C has the getline fuction which does most of the work of the above code


/*
char *lsh_read_line(void)
{
  char *line = NULL;
  ssize_t bufsize = 0; // have getline allocate a buffer for us

  if (getline(&line, &bufsize, stdin) == -1){
    if (feof(stdin)) {
      exit(EXIT_SUCCESS);  // We recieved an EOF
    } else  {
      perror("readline");
      exit(EXIT_FAILURE);
    }
  }

  return line;
}

*/

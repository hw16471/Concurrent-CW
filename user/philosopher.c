#include "philosopher.h"


void main_philosopher() {
    write( STDOUT_FILENO, "Philospher Started...\n", 22 );
    int id;
    int count = 0;
    int r = mkfifo ("pipeToPhilosopher2", 0666);
    int pipeFd = open ("pipeToPhilosopher2", 0666);

    write( STDOUT_FILENO, "Writing to pipe...", 18 );
    write( pipeFd, "pipe data\n", 10);




    exit( EXIT_SUCCESS );
}

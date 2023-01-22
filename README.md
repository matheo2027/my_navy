FUNCTIONS:

1. open, close, read, write
    -> <fcntl.h>

2. malloc, free
    -> <stdlib.h>

3. fopen, fclose
    -> <stdio.h>

4. getline
    -> <stdio.h>
    -> reads an entire line from stream, storing the address
       of the buffer containing the text into *lineptr.

5. lseek
    -> <unistd.h>
    -> repositions  the file offset of the open file description associated with
       the file descriptor fd to the argument offset according to the directive whence as
       follows:
                - SEEK_SET: The file offset is set to offset bytes.
                - SEEK_CUR: The file offset is set to its current location plus offset bytes.
                - SEEK_END: The file offset is set to the size of the file plus offset bytes.
        it allows the file offset to be set beyond the end of the file without changing the size of the file.

6. getpid
    -> <unistd.h>
    -> returns the process ID (PID) of the calling process.

7. kill
    -> <signal.h>
    -> This system  call  can  be used to send any signal to any process group or process.

8. signal
    -> <signal.h>
    -> sets  the  disposition  of the signal signum to handler, which is either
       SIG_IGN, SIG_DFL, or the address of a programmer-defined function (a "signal  handler").

9. sigaction
    -> <signal.h>
    -> This system call is used to change the action taken by a process on receipt of a specific signal.

10. sigemptyset
    -> <signal.h>
    -> initializes the signal set given by set to empty, with  all  signals
       excluded from the set.

11. setcontext
    -> <ucontext.h>
    -> restores the user context pointed to by ucp.  A successul call does not return.

12. getcontext
    -> <ucontext.h>
    -> initializes the structure pointed to by ucp to the  currently active context.

13. usleep
    -> <unistd.h>
    -> suspends execution of the calling thread for (at least) usec microseconds.

14. nanosleep
    -> <time.h>
    -> suspends the execution of the calling thread until either at least the
       time specified in *req has elapsed, or the delivery of a signal that triggers  the
       invocation of a handler in the calling thread or that terminates the process.

15. pause
    -> <unistd.h>
    -> causes  the calling process (or thread) to sleep until a signal is delivered 
       that either terminates the process or causes  the  invocation  of  a  signal-
       catching function.


GESTION ERREUR: (dans ordre à faire)

    FICHIER:
    0- Voir si le fichier existe
    1- Voir si le fichier est vide
    2- Char inconnu 
    3- Grammaire
    4- Voir si la lettre est entre A et H et Chiffre entre 1 et 8
    5- Bateau dans ordre
    __________________________
    |-Bateau supperposés
    |-Bateau vertical et horizontal
    |-Taille du Bateau correspond aux coordonnées
    |-Trop de bateau/ trop de ligne
    |-Pas assez de ligne/ bateau
    |_________________________


    INPUT:
    1- Charactères (A< <H && 1< <8)
    2- Case existe pas (<A1 || H8>)
    
///////////////////////////////////////////////////////////////////

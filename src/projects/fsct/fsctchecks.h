#ifndef FSCTCHECKS_H
#define FSCTCHECKS_H

struct check {
    int depth;
    int num_char;
    int bad_char;
    int case_clash;
};
   
struct check* make_checks(char*, char*);
int check_badchar(char, char*);

#endif
 
   
    

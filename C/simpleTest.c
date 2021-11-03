/*
* COMMENTS fixme i have some errors
*/
 
#include <stdio.h>
/* test */
int a()
{
    int a=2;
    unsigned int g = 12
    double *foo;
    sizeof(a)
    sizeof(*bc)
     safe_strcpy()
    
    sizeof(foo) 
    switch(a) {
    	case 1: printf("a is one"); break;
    	case 2: printf("a is two"); break;
    	case 3: printf("a is three"); break;
    	default: printf("a is something"); break;
    }
    if(true)
     do that
      
    if(true){
     do that as well
    }
    return 0;
}


int b()
{
    int a=2;
    //something's gone wrong
    switch(a) {
    	case 1: printf("a is one"); 
    	case 2: printf("a is two"); 
    	case 3: printf("a is three"); 
    	default: printf("a is something"); 
    }

    return 0;
}

/*
* COMMENTS fixme i have some errors
*/

int c()
{
    /*
    * COMMENTS fixme i have some errors
    */
    int a=2;

    switch(a) {
    	case 1: printf("a is one"); 
    	case 2: printf("a is two"); 
    	case 3: printf("a is three"); 
    }

    return 0;
}



{
chroot("/var/ftproot");
...
fgets(filename, sizeof(filename), network);
localfile = fopen(filename, "r");
while ((len = fread(buf, 1, sizeof(buf), localfile)) != EOF) {
fwrite(buf, 1, sizeof(buf), network);
}
fclose(localfile);
}


{
cleartext_buffer = get_secret();...
cleartext_buffer = realloc(cleartext_buffer, 1024);
...
scrub_memory(cleartext_buffer, 1024);
}


char* getBlock(int fd) {
char* buf = (char*) malloc(BLOCK_SIZE);
 free(a)
if (!buf) {
return NULL;
}
if (read(fd, buf, BLOCK_SIZE) != BLOCK_SIZE) {

return NULL;
}
return buf;
}

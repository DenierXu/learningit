

#define LOG_IN_FILE  0x0001
#define LOG_SCREEN   0x0010

#define logfilename "log.txt"

extern int LOG_WHAT; 

/* write a message into the log file or print on screen */
int debug(const char *fmt, ...); 

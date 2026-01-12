#ifndef COLOR_SEQ_01_H
#define COLOR_SEQ_01_H

//Using #define
#define RED_ANSI "\033[31m"
#define YELLOW_ANSI "\033[33m"
#define GREEN_ANSI "\033[32m"
#define BLUE_ANSI "\033[34m"
#define RESET_ANSI "\033[0m" 	 
#define CORN_BOLD_ANSI "\033[1;38;5;184m"
#define MALIBU_BOLD_ANSI "\033[1;38;2;135;175;255m"
#define LAVENDER_BOLD_ANSI "\033[1;38;5;135m"

//Using const
/*
const char RED_ANSI[] = "\033[31m";
const char YELLOW_ANSI[] = "\033[33m"; 
const char GREEN_ANSI[] = "\033[32m"; 
const char BLUE_ANSI[] = "\033[34m";
const char RESET_ANSI[] = "\033[0m";
*/

// To call an array as a parameter you need to use pointer
void color_seq(char *dnaSeq, bool pause) {
	for (int i=0; dnaSeq[i] != '\0'; i++) {
		switch (dnaSeq[i]) {
			case 'A': printf("%s%c%s", BLUE_ANSI, dnaSeq[i], RESET_ANSI);
				break;
			case 'U':
			case 'T': printf("%s%c%s", YELLOW_ANSI, dnaSeq[i], RESET_ANSI);
				break;
			case 'G': printf("%s%c%s", GREEN_ANSI, dnaSeq[i], RESET_ANSI);
				break;
			case 'C': printf("%s%c%s", RED_ANSI, dnaSeq[i], RESET_ANSI);
				break;

			default:;
			}
			
			if (pause) {fflush(stdout);	usleep(10000);}
		}
	}
	
#endif

struct codon {
	char codons[4];
	char oneLetter;
	};

struct codon codonArray[] = {
    {"UUU", 'F'}, {"UUC", 'F'}, 
    {"UUA", 'L'}, {"UUG", 'L'}, {"CUU", 'L'}, {"CUC", 'L'}, {"CUA", 'L'}, {"CUG", 'L'}, 
    {"AUU", 'I'}, {"AUC", 'I'}, {"AUA", 'I'}, 
    {"AUG", 'M'}, // Methionine or Start
    {"GUU", 'V'}, {"GUC", 'V'}, {"GUA", 'V'}, {"GUG", 'V'}, 
    {"UCU", 'S'}, {"UCC", 'S'}, {"UCA", 'S'}, {"UCG", 'S'}, {"AGU", 'S'}, {"AGC", 'S'},
    {"CCU", 'P'}, {"CCC", 'P'}, {"CCA", 'P'}, {"CCG", 'P'},
    {"ACU", 'T'}, {"ACC", 'T'}, {"ACA", 'T'}, {"ACG", 'T'}, 
    {"GCU", 'A'}, {"GCC", 'A'}, {"GCA", 'A'}, {"GCG", 'A'}, 
    {"UAU", 'Y'}, {"UAC", 'Y'}, 
    {"UAA", '*'}, {"UAG", '*'}, {"UGA", '*'}, // '*' is commonly used for STOP
    {"CAU", 'H'}, {"CAC", 'H'}, 
    {"CAA", 'Q'}, {"CAG", 'Q'}, 
    {"AAU", 'N'}, {"AAC", 'N'}, 
    {"AAA", 'K'}, {"AAG", 'K'}, 
    {"GAU", 'D'}, {"GAC", 'D'}, 
    {"GAA", 'E'}, {"GAG", 'E'},
    {"UGU", 'C'}, {"UGC", 'C'},
    {"UGG", 'W'}, 
    {"CGU", 'R'}, {"CGC", 'R'}, {"CGA", 'R'}, {"CGG", 'R'}, {"AGA", 'R'}, {"AGG", 'R'},
    {"GGU", 'G'}, {"GGC", 'G'}, {"GGA", 'G'}, {"GGG", 'G'}
};

char lookup(char *codon) {
	for (int i=0; i<sizeof(codonArray)/sizeof(codonArray[0]); i++) {
		if (strncmp(codon, codonArray[i].codons, 3)==0) {
			return codonArray[i].oneLetter;
			}	
		}
	return '?'; // error
	}

void translation(char *mRNA) {
	char *afterStart = strstr(mRNA, "AUG");
	for (int i=0; afterStart[i]!='\0'; i+=3 ) {
		char amino = lookup(&afterStart[i]);
		if (amino == '*') break;
		printf("%c", amino);
		}
	printf("\n");
	}


#include <stdio.h>
#include <string.h> // to use strstr
#include <time.h> // To use time(NULL)
#include <stdlib.h> // To use srand(), rand()
#include <string.h> // To use strcpy()
#include <unistd.h> // To use sleep() in seconds, usleep() in microseconds = 0.000001 second
#include <stdbool.h> // To use boolean (True, False)
#include "01_color_seq.h"
#include "02_complementary_pairing.h"
#include "03_dna_to_rna.h"

void color_seq(char *dnaSeq, bool pause);
void complementary_pairing(char *dnaSeq);
void dna_to_rna(char *dnaSeq);

int main() {
	srand(time(NULL)); //feeding a random seed for true random
	
	int lenOfseq; // sequence lenght
	printf("Desired DNA Sequence Length? : ");
	scanf("%d", &lenOfseq);
	
	char nucleotide[] = "ATGC"; // set DNA bases
	char codingDNAseq[lenOfseq + 1]; // declare an array to store random template DNA seq
	char templateDNAseq[lenOfseq + 1]; // declare an array to store coding DNA seq
	
	// generating a random DNA seq : template strand
	for (int i=0; i<lenOfseq; i++) {
		int rand_num = rand() % 4;
		codingDNAseq[i] = nucleotide[rand_num];
		}
	codingDNAseq[lenOfseq] = '\0'; // adding string terminator \0
	
	strcpy(templateDNAseq, codingDNAseq); // making a copy of the template DNA seq to use color_seq easily
	
	getchar();
	printf("\n[01] Random DNA Strands\n\n");
	printf("5' "); color_seq(codingDNAseq, false); printf(" 3' Coding DNA Strand (Cell Nucleus)\n");
	complementary_pairing(templateDNAseq); // pairing by modifying templateDNAseq which copied from codingDNAseq
	printf("3' "); color_seq(templateDNAseq, false); printf(" 5' %sTemplate  DNA Strand (Cell Nucleus)%s\n", YELLOW_BACKGROUND, RESET_ANSI);

	getchar();
	printf("[02] Transcription; T -> U (Cell Nucleus)\n\n");
	printf("3' "); color_seq(templateDNAseq, false); printf(" 5' Template  DNA Strand (Cell Nucleus)\n");
	dna_to_rna(codingDNAseq); // T -> U; transcription
	printf("5' "); color_seq(codingDNAseq, true); printf(" 3' %smRNA Strand (Cell Nucleus)%s\n", YELLOW_BACKGROUND, RESET_ANSI);
	
	getchar();
	printf("[03] mRNA move (Cell Nucleus -> Cytoplasm Ribosome)\n");

	getchar();
	printf("[04] tRNA begins Translation (RNA -> Codons)\n");
	printf("5' "); color_seq(codingDNAseq, false); printf(" 3' %smRNA Strand (Ribosome in Cytoplasm)%s\n", YELLOW_BACKGROUND, RESET_ANSI);
	
	getchar();
		

	return 0;
	}


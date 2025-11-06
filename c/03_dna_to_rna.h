void dna_to_rna(char *dnaSeq) {
	for (int i=0; dnaSeq[i] != '\0'; i++) {
		if (dnaSeq[i] == 'T') {dnaSeq[i] = 'U';}
		}
	}

void complementary_pairing(char *dnaSeq) {
	for (int i=0; dnaSeq[i] != '\0'; i++) {
		if (dnaSeq[i] == 'A') {dnaSeq[i] = 'T';} 
		else if (dnaSeq[i] == 'T') {dnaSeq[i] = 'A';}
		else if (dnaSeq[i] == 'G') {dnaSeq[i] = 'C';}
		else if (dnaSeq[i] == 'C') {dnaSeq[i] = 'G';}
		}
	}

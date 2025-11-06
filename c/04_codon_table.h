void translation(*mRNA) {
	startCodon = "AUG";
	
	findStartCodon = strstr(mRNA, startCodon);

	startCodonIndex = strlen(mRNA) - strlen(findStartCodon);

	for (int i=(startCodon -1), , i = i+3) {
		
		}
	}

struct codon {
	char codons[4];
	char oneLetter;
	}

struct codon codonArray[] = {
	{"UUU", F}, {"UUC", F}, 
	{"UUA", L}, {"UUG", L}, {"CUU", L}, {"CUC", L}, {"CUA", L}, {"CUG", L}, 
	{"AUU", I}, {"AUC", I}, {"AUA", I}, 
	{"AUG", M}, // Methionine or Met or Start
	{"GUU", V}, {"GUC", V}, {"GUA", V}, {"GUG", V}, 
	{"UCU", S}, {"UCC", S}, {"UCA", S}, {"UCG", S}, {"AGU", S}, {"AGC", S},
	{"CCU", P}, {"CCC", P}, {"CCA", P}, {"CCG", P},
	{"ACU", T}, {"ACC", T}, {"ACA", T}, {"ACG", T}, 
	{"GCU", A}, {"GCC", A}, {"GCA", A}, {"GCG", A}, 
	{"UAU", Y}, {"UAC", Y}, 
	{"UAA", STOP}, {"UAG", STOP}, {"UGA", STOP}, 
	{"CAU", H}, {"CAC", H}, 
	{"CAA", Q}, {"CAG", Q}, 
	{"AAU", N}, {"AAC", N}, 
	{"AAA", K}, {"AAG", K}, 
	{"GAU", D}, {"GAC", D}, 
	{"GAA", E}, {"GAG", E},
	{"UGU", C}, {"UGC", C},
	{"UGG", W}, 
	{"CGU", R}, {"CGC", R}, {"CGA", R}, {"CGG", R},	{"AGA", R}, {"AGG", R},
	{"GGU", G}, {"GGC", G}, {"GGA", G}, {"GGG", G}
	}


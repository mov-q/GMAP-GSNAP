/* $Id: pairdef.h,v 1.14 2007/04/23 16:07:07 twu Exp $ */
#ifndef PAIRDEF_INCLUDED
#define PAIRDEF_INCLUDED
#include "bool.h"

#define T Pair_T
struct T {
  int querypos;
  int genomepos;
  int refquerypos;
  int aapos;

  int queryjump;		/* Used only for gaps */
  int genomejump;		/* Used only for gaps */

  int aaphase_g;		/* If 0, then marks start of codon.  If -1, there is no aa here. */
  int aaphase_e;		/* If 0, then marks start of codon.  If -1, there is no aa here. */

  int dynprogindex;		/* 0 if not generated by dynprog; <0 if contains intron; else > 0 */

  char cdna;
  char comp;
  char genome;
  char aa_g;			/* Genomic aa */
  char aa_e;			/* EST aa */

  bool gapp;			/* True if comp is in a big gap (from genomic perspective):
                                   >])([<#= (but not '-' or '~'). */
  bool extraexonp;
  bool shortexonp;


};

#undef T
#endif

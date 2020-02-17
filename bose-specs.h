// -*- mode: text -*-

#ifndef MYC_SORTPLAN
#define MYC_SORTPLAN

#define BEST(nr,count) const char* best##nr= count
#define SWAP(x,y) x y

// Network for N=9, using Best Known Arrangement.
BEST(09,"\x19") // 25@9
SWAP("\0","\1") SWAP("\3","\4") SWAP("\6","\7") SWAP("\1","\2") SWAP("\4","\5")
SWAP("\7","\b") SWAP("\0","\1") SWAP("\3","\4") SWAP("\6","\7") SWAP("\0","\3")
SWAP("\3","\6") SWAP("\0","\3") SWAP("\1","\4") SWAP("\4","\7") SWAP("\1","\4")
SWAP("\2","\5") SWAP("\5","\b") SWAP("\2","\5") SWAP("\1","\3") SWAP("\5","\7")
SWAP("\2","\6") SWAP("\4","\6") SWAP("\2","\4") SWAP("\2","\3") SWAP("\5","\6");

//Network for N=10,using Best Known Arrangement.
BEST(10,"\x1D") // 29@10
SWAP("\4","\t") SWAP("\3","\b") SWAP("\2","\7") SWAP("\1","\6") SWAP("\0","\5")
SWAP("\1","\4") SWAP("\6","\t") SWAP("\0","\3") SWAP("\5","\b") SWAP("\0","\2")
SWAP("\3","\6") SWAP("\7","\t") SWAP("\0","\1") SWAP("\2","\4") SWAP("\5","\7")
SWAP("\b","\t") SWAP("\1","\2") SWAP("\4","\6") SWAP("\7","\b") SWAP("\3","\5")
SWAP("\2","\5") SWAP("\6","\b") SWAP("\1","\3") SWAP("\4","\7") SWAP("\2","\3")
SWAP("\6","\7") SWAP("\3","\4") SWAP("\5","\6") SWAP("\4","\5");

// Network for N=11,using Best Known Arrangement.
BEST(11,"\x23") // 35@11
SWAP("\0","\1") SWAP("\2","\3") SWAP("\4","\5") SWAP("\6","\7") SWAP("\b","\t")
SWAP("\1","\3") SWAP("\5","\7") SWAP("\0","\2") SWAP("\4","\6") SWAP("\b","\n")
SWAP("\1","\2") SWAP("\5","\6") SWAP("\t","\n") SWAP("\1","\5") SWAP("\6","\n")
SWAP("\5","\t") SWAP("\2","\6") SWAP("\1","\5") SWAP("\6","\n") SWAP("\0","\4")
SWAP("\3","\7") SWAP("\4","\b") SWAP("\0","\4") SWAP("\1","\4") SWAP("\7","\n")
SWAP("\3","\b") SWAP("\2","\3") SWAP("\b","\t") SWAP("\2","\4") SWAP("\7","\t")
SWAP("\3","\5") SWAP("\6","\b") SWAP("\3","\4") SWAP("\5","\6") SWAP("\7","\b");

// Network for N=12,using Best Known Arrangement.
BEST(12,"\x27") // 39@12
SWAP("\0","\1") SWAP("\2","\3") SWAP("\4","\5") SWAP("\6","\7") SWAP("\b","\t")
SWAP("\n","\x0B") SWAP("\1","\3") SWAP("\5","\7") SWAP("\t","\x0B") SWAP("\0","\2")
SWAP("\4","\6") SWAP("\b","\n") SWAP("\1","\2") SWAP("\5","\6") SWAP("\t","\n")
SWAP("\1","\5") SWAP("\6","\n") SWAP("\5","\t") SWAP("\2","\6") SWAP("\1","\5")
SWAP("\6","\n") SWAP("\0","\4") SWAP("\7","\x0B") SWAP("\3","\7") SWAP("\4","\b")
SWAP("\0","\4") SWAP("\7","\x0B") SWAP("\1","\4") SWAP("\7","\n") SWAP("\3","\b")
SWAP("\2","\3") SWAP("\b","\t") SWAP("\2","\4") SWAP("\7","\t") SWAP("\3","\5")
SWAP("\6","\b") SWAP("\3","\4") SWAP("\5","\6") SWAP("\7","\b");

// Network for N=13,using Best Known Arrangement.
BEST(13,"\x2D") // 45@13
SWAP("\1","\7") SWAP("\t","\x0B") SWAP("\3","\4") SWAP("\5","\b") SWAP("\0","\f")
SWAP("\2","\6") SWAP("\0","\1") SWAP("\2","\3") SWAP("\4","\6") SWAP("\b","\x0B")
SWAP("\7","\f") SWAP("\5","\t") SWAP("\0","\2") SWAP("\3","\7") SWAP("\n","\x0B")
SWAP("\1","\4") SWAP("\6","\f") SWAP("\7","\b") SWAP("\x0B","\f") SWAP("\4","\t")
SWAP("\6","\n") SWAP("\3","\4") SWAP("\5","\6") SWAP("\b","\t") SWAP("\n","\x0B")
SWAP("\1","\7") SWAP("\2","\6") SWAP("\t","\x0B") SWAP("\1","\3") SWAP("\4","\7")
SWAP("\b","\n") SWAP("\0","\5") SWAP("\2","\5") SWAP("\6","\b") SWAP("\t","\n")
SWAP("\1","\2") SWAP("\3","\5") SWAP("\7","\b") SWAP("\4","\6") SWAP("\2","\3")
SWAP("\4","\5") SWAP("\6","\7") SWAP("\b","\t") SWAP("\3","\4") SWAP("\5","\6");

// Network for N=14,using Best Known Arrangement.
BEST(14,"\x33") // 51@14
SWAP("\0","\1") SWAP("\2","\3") SWAP("\4","\5") SWAP("\6","\7") SWAP("\b","\t")
SWAP("\n","\x0B") SWAP("\f","\r") SWAP("\0","\2") SWAP("\4","\6") SWAP("\b","\n")
SWAP("\1","\3") SWAP("\5","\7") SWAP("\t","\x0B") SWAP("\0","\4") SWAP("\b","\f")
SWAP("\1","\5") SWAP("\t","\r") SWAP("\2","\6") SWAP("\3","\7") SWAP("\0","\b")
SWAP("\1","\t") SWAP("\2","\n") SWAP("\3","\x0B") SWAP("\4","\f") SWAP("\5","\r")
SWAP("\5","\n") SWAP("\6","\t") SWAP("\3","\f") SWAP("\7","\x0B") SWAP("\1","\2")
SWAP("\4","\b") SWAP("\1","\4") SWAP("\7","\r") SWAP("\2","\b") SWAP("\2","\4")
SWAP("\5","\6") SWAP("\t","\n") SWAP("\x0B","\r") SWAP("\3","\b") SWAP("\7","\f")
SWAP("\6","\b") SWAP("\n","\f") SWAP("\3","\5") SWAP("\7","\t") SWAP("\3","\4")
SWAP("\5","\6") SWAP("\7","\b") SWAP("\t","\n") SWAP("\x0B","\f") SWAP("\6","\7")
SWAP("\b","\t");

// Network for N=15,using Best Known Arrangement.
BEST(15,"\x38") // 56@15
SWAP("\0","\1") SWAP("\2","\3") SWAP("\4","\5") SWAP("\6","\7") SWAP("\b","\t")
SWAP("\n","\x0B") SWAP("\f","\r") SWAP("\0","\2") SWAP("\4","\6") SWAP("\b","\n")
SWAP("\f","\x0E") SWAP("\1","\3") SWAP("\5","\7") SWAP("\t","\x0B") SWAP("\0","\4")
SWAP("\b","\f") SWAP("\1","\5") SWAP("\t","\r") SWAP("\2","\6") SWAP("\n","\x0E")
SWAP("\3","\7") SWAP("\0","\b") SWAP("\1","\t") SWAP("\2","\n") SWAP("\3","\x0B")
SWAP("\4","\f") SWAP("\5","\r") SWAP("\6","\x0E") SWAP("\5","\n") SWAP("\6","\t")
SWAP("\3","\f") SWAP("\r","\x0E") SWAP("\7","\x0B") SWAP("\1","\2") SWAP("\4","\b")
SWAP("\1","\4") SWAP("\7","\r") SWAP("\2","\b") SWAP("\x0B","\x0E") SWAP("\2","\4")
SWAP("\5","\6") SWAP("\t","\n") SWAP("\x0B","\r") SWAP("\3","\b") SWAP("\7","\f")
SWAP("\6","\b") SWAP("\n","\f") SWAP("\3","\5") SWAP("\7","\t") SWAP("\3","\4")
SWAP("\5","\6") SWAP("\7","\b") SWAP("\t","\n") SWAP("\x0B","\f") SWAP("\6","\7")
SWAP("\b","\t");

// Network for N=16,using Best Known Arrangement.
BEST(16,"\x3C") // 60@16
SWAP("\0","\1") SWAP("\2","\3") SWAP("\4","\5") SWAP("\6","\7") SWAP("\b","\t")
SWAP("\n","\x0B") SWAP("\f","\r") SWAP("\x0E","\x0F") SWAP("\0","\2") SWAP("\4","\6")
SWAP("\b","\n") SWAP("\f","\x0E") SWAP("\1","\3") SWAP("\5","\7") SWAP("\t","\x0B")
SWAP("\r","\x0F") SWAP("\0","\4") SWAP("\b","\f") SWAP("\1","\5") SWAP("\t","\r")
SWAP("\2","\6") SWAP("\n","\x0E") SWAP("\3","\7") SWAP("\x0B","\x0F") SWAP("\0","\b")
SWAP("\1","\t") SWAP("\2","\n") SWAP("\3","\x0B") SWAP("\4","\f") SWAP("\5","\r")
SWAP("\6","\x0E") SWAP("\7","\x0F") SWAP("\5","\n") SWAP("\6","\t") SWAP("\3","\f")
SWAP("\r","\x0E") SWAP("\7","\x0B") SWAP("\1","\2") SWAP("\4","\b") SWAP("\1","\4")
SWAP("\7","\r") SWAP("\2","\b") SWAP("\x0B","\x0E") SWAP("\2","\4") SWAP("\5","\6")
SWAP("\t","\n") SWAP("\x0B","\r") SWAP("\3","\b") SWAP("\7","\f") SWAP("\6","\b")
SWAP("\n","\f") SWAP("\3","\5") SWAP("\7","\t") SWAP("\3","\4") SWAP("\5","\6")
SWAP("\7","\b") SWAP("\t","\n") SWAP("\x0B","\f") SWAP("\6","\7") SWAP("\b","\t");

#endif

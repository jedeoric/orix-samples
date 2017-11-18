#include "../telemon/src/include/6522_1.h"
#include "../oric-common/include/asm/via6522_2.h"

*=$1000
	jsr _detectVia2
	rts
	
#include "../oric-common/lib/xa65/detectVia2.asm"
	
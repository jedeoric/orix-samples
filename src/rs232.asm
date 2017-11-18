#include "../telemon/src/include/telemon.h"
#include "../telemon/src/include/macro.h"

    *=$1000-20
; include header
  .byt $01,$00		; non-C64 marker like o65 format
  .byt "o", "r", "i"      ; "ori" MAGIC number :$6f, $36, $35 like o65 format
  .byt $01                ; version of this header
cpu_mode
  .byt $00                ; CPU see below for description
language_type
  .byt $00	        ; reserved in the future, it will define if it's a Hyperbasic file, teleass file, forth file 
  .byt $00                ; reserved
  .byt $00		; reserved
  .byt $00	        ; operating system id for telemon $00 means telemon 3.0 version
  .byt $00	        ; reserved
	.byt $00                ; reserved
type_of_file
	.byt %01001001                   ; Auto, direct, data for stratsed, sedoric, ftdos compatibility
	.byt <start_adress,>start_adress ; loading adress
	.byt <EndOfMemory,>EndOfMemory   ; end of loading adress
	.byt <start_adress,>start_adress ; starting adress
 
start_adress
 
	*=$1000
  
  
  
  ;lda   $232T
loop
  lda   #<str
  ldy   #>str
  BRK_TELEMON(XWSTR0)
  lda   #$41
  BRK_TELEMON(XSOUT)
  jmp loop
  
  /*
	lda #XKBD
	BRK_TELEMON(XOP0)
  
  lda     #XRSS ; Setup keyboard on channel 0
  BRK_TELEMON(XOP0)
loop	
  lda     #$41
	BRK_TELEMON(XWR0) 
  jmp loop
  */
	rts
str    
.asc "RS232 sending ... ",$0A,$0D,0    
EndOfMemory


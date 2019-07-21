00000124 <main>:
; Regular initialisation
; setup() -------------------------------------------------------------------------------
; cLedPin.configureAsOutput(); 
 1aa:	25 9a       	sbi	0x04, 5	; 4
; loop() --------------------------------------------------------------------------------
 1ac:	c0 e0       	ldi	r28, 0x00	; 0
 1ae:	d0 e0       	ldi	r29, 0x00	; 0
; cLedPin.setHigh();
 1b0:	2d 9a       	sbi	0x05, 5	; 5
; cLedPin.setLow()
 1b2:	2d 98       	cbi	0x05, 5	; 5
; loop() end
 1b4:	20 97       	sbiw	r28, 0x00	; 0
 1b6:	e1 f3       	breq	.-8      	; 0x1b0 <main+0x8c>
 1b8:	0e 94 00 00 	call	0	; 0x0 <__vectors>
 1bc:	f9 cf       	rjmp	.-14     	; 0x1b0 <main+0x8c>

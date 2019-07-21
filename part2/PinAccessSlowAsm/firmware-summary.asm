000000e0 <digitalWrite.constprop.0>:
  e0:	e1 eb       	ldi	r30, 0xB1	; 177
  e2:	f0 e0       	ldi	r31, 0x00	; 0
  e4:	94 91       	lpm	r25, Z
  e6:	ed e9       	ldi	r30, 0x9D	; 157
  e8:	f0 e0       	ldi	r31, 0x00	; 0
  ea:	24 91       	lpm	r18, Z
  ec:	e9 e8       	ldi	r30, 0x89	; 137
  ee:	f0 e0       	ldi	r31, 0x00	; 0
  f0:	e4 91       	lpm	r30, Z
  f2:	ee 23       	and	r30, r30
  f4:	09 f4       	brne	.+2      	; 0xf8 <digitalWrite.constprop.0+0x18>
  f6:	3c c0       	rjmp	.+120    	; 0x170 <digitalWrite.constprop.0+0x90>
  f8:	99 23       	and	r25, r25
  fa:	39 f1       	breq	.+78     	; 0x14a <digitalWrite.constprop.0+0x6a>
  fc:	93 30       	cpi	r25, 0x03	; 3
  fe:	91 f0       	breq	.+36     	; 0x124 <digitalWrite.constprop.0+0x44>
 100:	38 f4       	brcc	.+14     	; 0x110 <digitalWrite.constprop.0+0x30>
 102:	91 30       	cpi	r25, 0x01	; 1
 104:	a9 f0       	breq	.+42     	; 0x130 <digitalWrite.constprop.0+0x50>
 106:	92 30       	cpi	r25, 0x02	; 2
 108:	01 f5       	brne	.+64     	; 0x14a <digitalWrite.constprop.0+0x6a>
 10a:	94 b5       	in	r25, 0x24	; 36
 10c:	9f 7d       	andi	r25, 0xDF	; 223
 10e:	12 c0       	rjmp	.+36     	; 0x134 <digitalWrite.constprop.0+0x54>
 110:	97 30       	cpi	r25, 0x07	; 7
 112:	91 f0       	breq	.+36     	; 0x138 <digitalWrite.constprop.0+0x58>
 114:	98 30       	cpi	r25, 0x08	; 8
 116:	a1 f0       	breq	.+40     	; 0x140 <digitalWrite.constprop.0+0x60>
 118:	94 30       	cpi	r25, 0x04	; 4
 11a:	b9 f4       	brne	.+46     	; 0x14a <digitalWrite.constprop.0+0x6a>
 11c:	90 91 80 00 	lds	r25, 0x0080	; 0x800080 <__TEXT_REGION_LENGTH__+0x7e0080>
 120:	9f 7d       	andi	r25, 0xDF	; 223
 122:	03 c0       	rjmp	.+6      	; 0x12a <digitalWrite.constprop.0+0x4a>
 124:	90 91 80 00 	lds	r25, 0x0080	; 0x800080 <__TEXT_REGION_LENGTH__+0x7e0080>
 128:	9f 77       	andi	r25, 0x7F	; 127
 12a:	90 93 80 00 	sts	0x0080, r25	; 0x800080 <__TEXT_REGION_LENGTH__+0x7e0080>
 12e:	0d c0       	rjmp	.+26     	; 0x14a <digitalWrite.constprop.0+0x6a>
 130:	94 b5       	in	r25, 0x24	; 36
 132:	9f 77       	andi	r25, 0x7F	; 127
 134:	94 bd       	out	0x24, r25	; 36
 136:	09 c0       	rjmp	.+18     	; 0x14a <digitalWrite.constprop.0+0x6a>
 138:	90 91 b0 00 	lds	r25, 0x00B0	; 0x8000b0 <__TEXT_REGION_LENGTH__+0x7e00b0>
 13c:	9f 77       	andi	r25, 0x7F	; 127
 13e:	03 c0       	rjmp	.+6      	; 0x146 <digitalWrite.constprop.0+0x66>
 140:	90 91 b0 00 	lds	r25, 0x00B0	; 0x8000b0 <__TEXT_REGION_LENGTH__+0x7e00b0>
 144:	9f 7d       	andi	r25, 0xDF	; 223
 146:	90 93 b0 00 	sts	0x00B0, r25	; 0x8000b0 <__TEXT_REGION_LENGTH__+0x7e00b0>
 14a:	f0 e0       	ldi	r31, 0x00	; 0
 14c:	ee 0f       	add	r30, r30
 14e:	ff 1f       	adc	r31, r31
 150:	ee 58       	subi	r30, 0x8E	; 142
 152:	ff 4f       	sbci	r31, 0xFF	; 255
 154:	a5 91       	lpm	r26, Z+
 156:	b4 91       	lpm	r27, Z
 158:	9f b7       	in	r25, 0x3f	; 63
 15a:	f8 94       	cli
 15c:	81 11       	cpse	r24, r1
 15e:	04 c0       	rjmp	.+8      	; 0x168 <digitalWrite.constprop.0+0x88>
 160:	8c 91       	ld	r24, X
 162:	20 95       	com	r18
 164:	28 23       	and	r18, r24
 166:	02 c0       	rjmp	.+4      	; 0x16c <digitalWrite.constprop.0+0x8c>
 168:	ec 91       	ld	r30, X
 16a:	2e 2b       	or	r18, r30
 16c:	2c 93       	st	X, r18
 16e:	9f bf       	out	0x3f, r25	; 63
 170:	08 95       	ret

00000206 <main>:
; Regular initialization
 206:	78 94       	sei
 208:	84 b5       	in	r24, 0x24	; 36
 20a:	82 60       	ori	r24, 0x02	; 2
 20c:	84 bd       	out	0x24, r24	; 36
 20e:	84 b5       	in	r24, 0x24	; 36
 210:	81 60       	ori	r24, 0x01	; 1
 212:	84 bd       	out	0x24, r24	; 36
 214:	85 b5       	in	r24, 0x25	; 37
 216:	82 60       	ori	r24, 0x02	; 2
 218:	85 bd       	out	0x25, r24	; 37
 21a:	85 b5       	in	r24, 0x25	; 37
 21c:	81 60       	ori	r24, 0x01	; 1
 21e:	85 bd       	out	0x25, r24	; 37
 220:	80 91 6e 00 	lds	r24, 0x006E	; 0x80006e <__TEXT_REGION_LENGTH__+0x7e006e>
 224:	81 60       	ori	r24, 0x01	; 1
 226:	80 93 6e 00 	sts	0x006E, r24	; 0x80006e <__TEXT_REGION_LENGTH__+0x7e006e>
 22a:	10 92 81 00 	sts	0x0081, r1	; 0x800081 <__TEXT_REGION_LENGTH__+0x7e0081>
 22e:	80 91 81 00 	lds	r24, 0x0081	; 0x800081 <__TEXT_REGION_LENGTH__+0x7e0081>
 232:	82 60       	ori	r24, 0x02	; 2
 234:	80 93 81 00 	sts	0x0081, r24	; 0x800081 <__TEXT_REGION_LENGTH__+0x7e0081>
 238:	80 91 81 00 	lds	r24, 0x0081	; 0x800081 <__TEXT_REGION_LENGTH__+0x7e0081>
 23c:	81 60       	ori	r24, 0x01	; 1
 23e:	80 93 81 00 	sts	0x0081, r24	; 0x800081 <__TEXT_REGION_LENGTH__+0x7e0081>
 242:	80 91 80 00 	lds	r24, 0x0080	; 0x800080 <__TEXT_REGION_LENGTH__+0x7e0080>
 246:	81 60       	ori	r24, 0x01	; 1
 248:	80 93 80 00 	sts	0x0080, r24	; 0x800080 <__TEXT_REGION_LENGTH__+0x7e0080>
 24c:	80 91 b1 00 	lds	r24, 0x00B1	; 0x8000b1 <__TEXT_REGION_LENGTH__+0x7e00b1>
 250:	84 60       	ori	r24, 0x04	; 4
 252:	80 93 b1 00 	sts	0x00B1, r24	; 0x8000b1 <__TEXT_REGION_LENGTH__+0x7e00b1>
 256:	80 91 b0 00 	lds	r24, 0x00B0	; 0x8000b0 <__TEXT_REGION_LENGTH__+0x7e00b0>
 25a:	81 60       	ori	r24, 0x01	; 1
 25c:	80 93 b0 00 	sts	0x00B0, r24	; 0x8000b0 <__TEXT_REGION_LENGTH__+0x7e00b0>
 260:	80 91 7a 00 	lds	r24, 0x007A	; 0x80007a <__TEXT_REGION_LENGTH__+0x7e007a>
 264:	84 60       	ori	r24, 0x04	; 4
 266:	80 93 7a 00 	sts	0x007A, r24	; 0x80007a <__TEXT_REGION_LENGTH__+0x7e007a>
 26a:	80 91 7a 00 	lds	r24, 0x007A	; 0x80007a <__TEXT_REGION_LENGTH__+0x7e007a>
 26e:	82 60       	ori	r24, 0x02	; 2
 270:	80 93 7a 00 	sts	0x007A, r24	; 0x80007a <__TEXT_REGION_LENGTH__+0x7e007a>
 274:	80 91 7a 00 	lds	r24, 0x007A	; 0x80007a <__TEXT_REGION_LENGTH__+0x7e007a>
 278:	81 60       	ori	r24, 0x01	; 1
 27a:	80 93 7a 00 	sts	0x007A, r24	; 0x80007a <__TEXT_REGION_LENGTH__+0x7e007a>
 27e:	80 91 7a 00 	lds	r24, 0x007A	; 0x80007a <__TEXT_REGION_LENGTH__+0x7e007a>
 282:	80 68       	ori	r24, 0x80	; 128
 284:	80 93 7a 00 	sts	0x007A, r24	; 0x80007a <__TEXT_REGION_LENGTH__+0x7e007a>
 288:	10 92 c1 00 	sts	0x00C1, r1	; 0x8000c1 <__TEXT_REGION_LENGTH__+0x7e00c1>
 28c:	ed e9       	ldi	r30, 0x9D	; 157
 28e:	f0 e0       	ldi	r31, 0x00	; 0
 290:	24 91       	lpm	r18, Z
 292:	e9 e8       	ldi	r30, 0x89	; 137
 294:	f0 e0       	ldi	r31, 0x00	; 0
 296:	84 91       	lpm	r24, Z
 298:	88 23       	and	r24, r24
 29a:	99 f0       	breq	.+38     	; 0x2c2 <main+0xbc>
 29c:	90 e0       	ldi	r25, 0x00	; 0
 29e:	88 0f       	add	r24, r24
 2a0:	99 1f       	adc	r25, r25
 2a2:	fc 01       	movw	r30, r24
 2a4:	e8 59       	subi	r30, 0x98	; 152
 2a6:	ff 4f       	sbci	r31, 0xFF	; 255
 2a8:	a5 91       	lpm	r26, Z+
 2aa:	b4 91       	lpm	r27, Z
 2ac:	fc 01       	movw	r30, r24
 2ae:	ee 58       	subi	r30, 0x8E	; 142
 2b0:	ff 4f       	sbci	r31, 0xFF	; 255
 2b2:	85 91       	lpm	r24, Z+
 2b4:	94 91       	lpm	r25, Z
 2b6:	8f b7       	in	r24, 0x3f	; 63
 2b8:	f8 94       	cli
 2ba:	ec 91       	ld	r30, X
 2bc:	e2 2b       	or	r30, r18
 2be:	ec 93       	st	X, r30
 2c0:	8f bf       	out	0x3f, r24	; 63
 2c2:	c0 e0       	ldi	r28, 0x00	; 0
 2c4:	d0 e0       	ldi	r29, 0x00	; 0
 2c6:	81 e0       	ldi	r24, 0x01	; 1
 2c8:	0e 94 70 00 	call	0xe0	; 0xe0 <digitalWrite.constprop.0>
 2cc:	80 e0       	ldi	r24, 0x00	; 0
 2ce:	0e 94 70 00 	call	0xe0	; 0xe0 <digitalWrite.constprop.0>
 2d2:	20 97       	sbiw	r28, 0x00	; 0
 2d4:	c1 f3       	breq	.-16     	; 0x2c6 <main+0xc0>
 2d6:	0e 94 00 00 	call	0	; 0x0 <__vectors>
 2da:	f5 cf       	rjmp	.-22     	; 0x2c6 <main+0xc0>

000002dc <_exit>:
 2dc:	f8 94       	cli

000002de <__stop_program>:
 2de:	ff cf       	rjmp	.-2      	; 0x2de <__stop_program>

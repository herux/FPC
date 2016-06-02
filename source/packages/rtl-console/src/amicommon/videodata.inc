
const
   vgacolors : array[0..15,0..2] of byte = (
      (   0,   0,   0 ), // black
      (   0,   0, 153 ), // blue
      (   0, 153,   0 ), // green
      (   0, 153, 153 ), // cyan
      ( 153,   0,   0 ), // red
      ( 153,   0, 153 ), // magenta
      ( 153, 102,   0 ), // brown
      ( 153, 153, 153 ), // lightgray   

      ( 102, 102, 102 ), // darkgray
      ( 102, 102, 255 ), // lightblue
      ( 102, 255, 102 ), // lightgreen
      ( 102, 255, 255 ), // lightcyan
      ( 255, 102, 102 ), // lightred
      ( 255, 102, 255 ), // lightmagenta
      ( 255, 255, 102 ), // yellow
      ( 255, 255, 255 )  // white
   );

const
   vgafont : array[0..255,0..15] of byte = (
      ( $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $7E, $81, $A5, $81, $81, $A5, $99, $81, $81, $7E, $00, $00, $00, $00 ),
      ( $00, $00, $7E, $FF, $DB, $FF, $FF, $DB, $E7, $FF, $FF, $7E, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $6C, $FE, $FE, $FE, $FE, $7C, $38, $10, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $10, $38, $7C, $FE, $7C, $38, $10, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $18, $3C, $3C, $E7, $E7, $E7, $18, $18, $3C, $00, $00, $00, $00 ),
      ( $00, $00, $00, $18, $3C, $7E, $FF, $FF, $7E, $18, $18, $3C, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $00, $18, $3C, $3C, $18, $00, $00, $00, $00, $00, $00 ),
      ( $FF, $FF, $FF, $FF, $FF, $FF, $E7, $C3, $C3, $E7, $FF, $FF, $FF, $FF, $FF, $FF ),
      ( $00, $00, $00, $00, $00, $3C, $66, $42, $42, $66, $3C, $00, $00, $00, $00, $00 ),
      ( $FF, $FF, $FF, $FF, $FF, $C3, $99, $BD, $BD, $99, $C3, $FF, $FF, $FF, $FF, $FF ),
      ( $00, $00, $1E, $06, $0E, $1A, $78, $CC, $CC, $CC, $CC, $78, $00, $00, $00, $00 ),
      ( $00, $00, $3C, $66, $66, $66, $66, $3C, $18, $7E, $18, $18, $00, $00, $00, $00 ),
      ( $00, $00, $3F, $33, $3F, $30, $30, $30, $30, $70, $F0, $E0, $00, $00, $00, $00 ),
      ( $00, $00, $7F, $63, $7F, $63, $63, $63, $63, $67, $E7, $E6, $C0, $00, $00, $00 ),
      ( $00, $00, $00, $18, $18, $DB, $3C, $E7, $3C, $DB, $18, $18, $00, $00, $00, $00 ),
      ( $00, $80, $C0, $E0, $F0, $F8, $FE, $F8, $F0, $E0, $C0, $80, $00, $00, $00, $00 ),
      ( $00, $02, $06, $0E, $1E, $3E, $FE, $3E, $1E, $0E, $06, $02, $00, $00, $00, $00 ),
      ( $00, $00, $18, $3C, $7E, $18, $18, $18, $7E, $3C, $18, $00, $00, $00, $00, $00 ),
      ( $00, $00, $66, $66, $66, $66, $66, $66, $66, $00, $66, $66, $00, $00, $00, $00 ),
      ( $00, $00, $7F, $DB, $DB, $DB, $7B, $1B, $1B, $1B, $1B, $1B, $00, $00, $00, $00 ),
      ( $00, $7C, $C6, $60, $38, $6C, $C6, $C6, $6C, $38, $0C, $C6, $7C, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $00, $00, $00, $FE, $FE, $FE, $FE, $00, $00, $00, $00 ),
      ( $00, $00, $18, $3C, $7E, $18, $18, $18, $7E, $3C, $18, $7E, $00, $00, $00, $00 ),
      ( $00, $00, $18, $3C, $7E, $18, $18, $18, $18, $18, $18, $18, $00, $00, $00, $00 ),
      ( $00, $00, $18, $18, $18, $18, $18, $18, $18, $7E, $3C, $18, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $18, $0C, $FE, $0C, $18, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $30, $60, $FE, $60, $30, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $00, $C0, $C0, $C0, $FE, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $28, $6C, $FE, $6C, $28, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $10, $38, $38, $7C, $7C, $FE, $FE, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $FE, $FE, $7C, $7C, $38, $38, $10, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $18, $3C, $3C, $3C, $18, $18, $18, $00, $18, $18, $00, $00, $00, $00 ),
      ( $00, $66, $66, $66, $24, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $6C, $6C, $FE, $6C, $6C, $6C, $FE, $6C, $6C, $00, $00, $00, $00 ),
      ( $18, $18, $7C, $C6, $C2, $C0, $7C, $06, $06, $86, $C6, $7C, $18, $18, $00, $00 ),
      ( $00, $00, $00, $00, $C2, $C6, $0C, $18, $30, $60, $C6, $86, $00, $00, $00, $00 ),
      ( $00, $00, $38, $6C, $6C, $38, $76, $DC, $CC, $CC, $CC, $76, $00, $00, $00, $00 ),
      ( $00, $30, $30, $30, $60, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $0C, $18, $30, $30, $30, $30, $30, $30, $18, $0C, $00, $00, $00, $00 ),
      ( $00, $00, $30, $18, $0C, $0C, $0C, $0C, $0C, $0C, $18, $30, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $66, $3C, $FF, $3C, $66, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $18, $18, $7E, $18, $18, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $00, $00, $00, $00, $18, $18, $18, $30, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $00, $00, $FE, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $18, $18, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $02, $06, $0C, $18, $30, $60, $C0, $80, $00, $00, $00, $00 ),
      ( $00, $00, $38, $6C, $C6, $C6, $D6, $D6, $C6, $C6, $6C, $38, $00, $00, $00, $00 ),
      ( $00, $00, $18, $38, $78, $18, $18, $18, $18, $18, $18, $7E, $00, $00, $00, $00 ),
      ( $00, $00, $7C, $C6, $06, $0C, $18, $30, $60, $C0, $C6, $FE, $00, $00, $00, $00 ),
      ( $00, $00, $7C, $C6, $06, $06, $3C, $06, $06, $06, $C6, $7C, $00, $00, $00, $00 ),
      ( $00, $00, $0C, $1C, $3C, $6C, $CC, $FE, $0C, $0C, $0C, $1E, $00, $00, $00, $00 ),
      ( $00, $00, $FE, $C0, $C0, $C0, $FC, $06, $06, $06, $C6, $7C, $00, $00, $00, $00 ),
      ( $00, $00, $38, $60, $C0, $C0, $FC, $C6, $C6, $C6, $C6, $7C, $00, $00, $00, $00 ),
      ( $00, $00, $FE, $C6, $06, $06, $0C, $18, $30, $30, $30, $30, $00, $00, $00, $00 ),
      ( $00, $00, $7C, $C6, $C6, $C6, $7C, $C6, $C6, $C6, $C6, $7C, $00, $00, $00, $00 ),
      ( $00, $00, $7C, $C6, $C6, $C6, $7E, $06, $06, $06, $0C, $78, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $18, $18, $00, $00, $00, $18, $18, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $18, $18, $00, $00, $00, $18, $18, $30, $00, $00, $00, $00 ),
      ( $00, $00, $00, $06, $0C, $18, $30, $60, $30, $18, $0C, $06, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $7E, $00, $00, $7E, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $60, $30, $18, $0C, $06, $0C, $18, $30, $60, $00, $00, $00, $00 ),
      ( $00, $00, $7C, $C6, $C6, $0C, $18, $18, $18, $00, $18, $18, $00, $00, $00, $00 ),
      ( $00, $00, $00, $7C, $C6, $C6, $DE, $DE, $DE, $DC, $C0, $7C, $00, $00, $00, $00 ),
      ( $00, $00, $10, $38, $6C, $C6, $C6, $FE, $C6, $C6, $C6, $C6, $00, $00, $00, $00 ),
      ( $00, $00, $FC, $66, $66, $66, $7C, $66, $66, $66, $66, $FC, $00, $00, $00, $00 ),
      ( $00, $00, $3C, $66, $C2, $C0, $C0, $C0, $C0, $C2, $66, $3C, $00, $00, $00, $00 ),
      ( $00, $00, $F8, $6C, $66, $66, $66, $66, $66, $66, $6C, $F8, $00, $00, $00, $00 ),
      ( $00, $00, $FE, $66, $62, $68, $78, $68, $60, $62, $66, $FE, $00, $00, $00, $00 ),
      ( $00, $00, $FE, $66, $62, $68, $78, $68, $60, $60, $60, $F0, $00, $00, $00, $00 ),
      ( $00, $00, $3C, $66, $C2, $C0, $C0, $DE, $C6, $C6, $66, $3A, $00, $00, $00, $00 ),
      ( $00, $00, $C6, $C6, $C6, $C6, $FE, $C6, $C6, $C6, $C6, $C6, $00, $00, $00, $00 ),
      ( $00, $00, $3C, $18, $18, $18, $18, $18, $18, $18, $18, $3C, $00, $00, $00, $00 ),
      ( $00, $00, $1E, $0C, $0C, $0C, $0C, $0C, $CC, $CC, $CC, $78, $00, $00, $00, $00 ),
      ( $00, $00, $E6, $66, $66, $6C, $78, $78, $6C, $66, $66, $E6, $00, $00, $00, $00 ),
      ( $00, $00, $F0, $60, $60, $60, $60, $60, $60, $62, $66, $FE, $00, $00, $00, $00 ),
      ( $00, $00, $C6, $EE, $FE, $FE, $D6, $C6, $C6, $C6, $C6, $C6, $00, $00, $00, $00 ),
      ( $00, $00, $C6, $E6, $F6, $FE, $DE, $CE, $C6, $C6, $C6, $C6, $00, $00, $00, $00 ),
      ( $00, $00, $7C, $C6, $C6, $C6, $C6, $C6, $C6, $C6, $C6, $7C, $00, $00, $00, $00 ),
      ( $00, $00, $FC, $66, $66, $66, $7C, $60, $60, $60, $60, $F0, $00, $00, $00, $00 ),
      ( $00, $00, $7C, $C6, $C6, $C6, $C6, $C6, $C6, $D6, $DE, $7C, $0C, $0E, $00, $00 ),
      ( $00, $00, $FC, $66, $66, $66, $7C, $6C, $66, $66, $66, $E6, $00, $00, $00, $00 ),
      ( $00, $00, $7C, $C6, $C6, $60, $38, $0C, $06, $C6, $C6, $7C, $00, $00, $00, $00 ),
      ( $00, $00, $7E, $7E, $5A, $18, $18, $18, $18, $18, $18, $3C, $00, $00, $00, $00 ),
      ( $00, $00, $C6, $C6, $C6, $C6, $C6, $C6, $C6, $C6, $C6, $7C, $00, $00, $00, $00 ),
      ( $00, $00, $C6, $C6, $C6, $C6, $C6, $C6, $C6, $6C, $38, $10, $00, $00, $00, $00 ),
      ( $00, $00, $C6, $C6, $C6, $C6, $D6, $D6, $D6, $FE, $EE, $6C, $00, $00, $00, $00 ),
      ( $00, $00, $C6, $C6, $6C, $7C, $38, $38, $7C, $6C, $C6, $C6, $00, $00, $00, $00 ),
      ( $00, $00, $66, $66, $66, $66, $3C, $18, $18, $18, $18, $3C, $00, $00, $00, $00 ),
      ( $00, $00, $FE, $C6, $86, $0C, $18, $30, $60, $C2, $C6, $FE, $00, $00, $00, $00 ),
      ( $00, $00, $3C, $30, $30, $30, $30, $30, $30, $30, $30, $3C, $00, $00, $00, $00 ),
      ( $00, $00, $00, $80, $C0, $E0, $70, $38, $1C, $0E, $06, $02, $00, $00, $00, $00 ),
      ( $00, $00, $3C, $0C, $0C, $0C, $0C, $0C, $0C, $0C, $0C, $3C, $00, $00, $00, $00 ),
      ( $10, $38, $6C, $C6, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $FF, $00, $00 ),
      ( $30, $30, $18, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $78, $0C, $7C, $CC, $CC, $CC, $76, $00, $00, $00, $00 ),
      ( $00, $00, $E0, $60, $60, $78, $6C, $66, $66, $66, $66, $7C, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $7C, $C6, $C0, $C0, $C0, $C6, $7C, $00, $00, $00, $00 ),
      ( $00, $00, $1C, $0C, $0C, $3C, $6C, $CC, $CC, $CC, $CC, $76, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $7C, $C6, $FE, $C0, $C0, $C6, $7C, $00, $00, $00, $00 ),
      ( $00, $00, $38, $6C, $64, $60, $F0, $60, $60, $60, $60, $F0, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $76, $CC, $CC, $CC, $CC, $CC, $7C, $0C, $CC, $78, $00 ),
      ( $00, $00, $E0, $60, $60, $6C, $76, $66, $66, $66, $66, $E6, $00, $00, $00, $00 ),
      ( $00, $00, $18, $18, $00, $38, $18, $18, $18, $18, $18, $3C, $00, $00, $00, $00 ),
      ( $00, $00, $06, $06, $00, $0E, $06, $06, $06, $06, $06, $06, $66, $66, $3C, $00 ),
      ( $00, $00, $E0, $60, $60, $66, $6C, $78, $78, $6C, $66, $E6, $00, $00, $00, $00 ),
      ( $00, $00, $38, $18, $18, $18, $18, $18, $18, $18, $18, $3C, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $EC, $FE, $D6, $D6, $D6, $D6, $C6, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $DC, $66, $66, $66, $66, $66, $66, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $7C, $C6, $C6, $C6, $C6, $C6, $7C, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $DC, $66, $66, $66, $66, $66, $7C, $60, $60, $F0, $00 ),
      ( $00, $00, $00, $00, $00, $76, $CC, $CC, $CC, $CC, $CC, $7C, $0C, $0C, $1E, $00 ),
      ( $00, $00, $00, $00, $00, $DC, $76, $66, $60, $60, $60, $F0, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $7C, $C6, $60, $38, $0C, $C6, $7C, $00, $00, $00, $00 ),
      ( $00, $00, $10, $30, $30, $FC, $30, $30, $30, $30, $36, $1C, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $CC, $CC, $CC, $CC, $CC, $CC, $76, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $66, $66, $66, $66, $66, $3C, $18, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $C6, $C6, $D6, $D6, $D6, $FE, $6C, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $C6, $6C, $38, $38, $38, $6C, $C6, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $C6, $C6, $C6, $C6, $C6, $C6, $7E, $06, $0C, $F8, $00 ),
      ( $00, $00, $00, $00, $00, $FE, $CC, $18, $30, $60, $C6, $FE, $00, $00, $00, $00 ),
      ( $00, $00, $0E, $18, $18, $18, $70, $18, $18, $18, $18, $0E, $00, $00, $00, $00 ),
      ( $00, $00, $18, $18, $18, $18, $00, $18, $18, $18, $18, $18, $00, $00, $00, $00 ),
      ( $00, $00, $70, $18, $18, $18, $0E, $18, $18, $18, $18, $70, $00, $00, $00, $00 ),
      ( $00, $00, $76, $DC, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $10, $38, $6C, $C6, $C6, $C6, $FE, $00, $00, $00, $00, $00 ),
      ( $00, $00, $3C, $66, $C2, $C0, $C0, $C0, $C2, $66, $3C, $0C, $06, $7C, $00, $00 ),
      ( $00, $00, $CC, $00, $00, $CC, $CC, $CC, $CC, $CC, $CC, $76, $00, $00, $00, $00 ),
      ( $00, $0C, $18, $30, $00, $7C, $C6, $FE, $C0, $C0, $C6, $7C, $00, $00, $00, $00 ),
      ( $00, $10, $38, $6C, $00, $78, $0C, $7C, $CC, $CC, $CC, $76, $00, $00, $00, $00 ),
      ( $00, $00, $CC, $00, $00, $78, $0C, $7C, $CC, $CC, $CC, $76, $00, $00, $00, $00 ),
      ( $00, $60, $30, $18, $00, $78, $0C, $7C, $CC, $CC, $CC, $76, $00, $00, $00, $00 ),
      ( $00, $38, $6C, $38, $00, $78, $0C, $7C, $CC, $CC, $CC, $76, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $3C, $66, $60, $60, $66, $3C, $0C, $06, $3C, $00, $00, $00 ),
      ( $00, $10, $38, $6C, $00, $7C, $C6, $FE, $C0, $C0, $C6, $7C, $00, $00, $00, $00 ),
      ( $00, $00, $C6, $00, $00, $7C, $C6, $FE, $C0, $C0, $C6, $7C, $00, $00, $00, $00 ),
      ( $00, $60, $30, $18, $00, $7C, $C6, $FE, $C0, $C0, $C6, $7C, $00, $00, $00, $00 ),
      ( $00, $00, $66, $00, $00, $38, $18, $18, $18, $18, $18, $3C, $00, $00, $00, $00 ),
      ( $00, $18, $3C, $66, $00, $38, $18, $18, $18, $18, $18, $3C, $00, $00, $00, $00 ),
      ( $00, $60, $30, $18, $00, $38, $18, $18, $18, $18, $18, $3C, $00, $00, $00, $00 ),
      ( $00, $C6, $00, $10, $38, $6C, $C6, $C6, $FE, $C6, $C6, $C6, $00, $00, $00, $00 ),
      ( $38, $6C, $38, $00, $38, $6C, $C6, $C6, $FE, $C6, $C6, $C6, $00, $00, $00, $00 ),
      ( $18, $30, $60, $00, $FE, $66, $60, $7C, $60, $60, $66, $FE, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $CC, $76, $36, $7E, $D8, $D8, $6E, $00, $00, $00, $00 ),
      ( $00, $00, $3E, $6C, $CC, $CC, $FE, $CC, $CC, $CC, $CC, $CE, $00, $00, $00, $00 ),
      ( $00, $10, $38, $6C, $00, $7C, $C6, $C6, $C6, $C6, $C6, $7C, $00, $00, $00, $00 ),
      ( $00, $00, $C6, $00, $00, $7C, $C6, $C6, $C6, $C6, $C6, $7C, $00, $00, $00, $00 ),
      ( $00, $60, $30, $18, $00, $7C, $C6, $C6, $C6, $C6, $C6, $7C, $00, $00, $00, $00 ),
      ( $00, $30, $78, $CC, $00, $CC, $CC, $CC, $CC, $CC, $CC, $76, $00, $00, $00, $00 ),
      ( $00, $60, $30, $18, $00, $CC, $CC, $CC, $CC, $CC, $CC, $76, $00, $00, $00, $00 ),
      ( $00, $00, $C6, $00, $00, $C6, $C6, $C6, $C6, $C6, $C6, $7E, $06, $0C, $78, $00 ),
      ( $00, $C6, $00, $7C, $C6, $C6, $C6, $C6, $C6, $C6, $C6, $7C, $00, $00, $00, $00 ),
      ( $00, $C6, $00, $C6, $C6, $C6, $C6, $C6, $C6, $C6, $C6, $7C, $00, $00, $00, $00 ),
      ( $00, $18, $18, $3C, $66, $60, $60, $60, $66, $3C, $18, $18, $00, $00, $00, $00 ),
      ( $00, $38, $6C, $64, $60, $F0, $60, $60, $60, $60, $E6, $FC, $00, $00, $00, $00 ),
      ( $00, $00, $66, $66, $3C, $18, $7E, $18, $7E, $18, $18, $18, $00, $00, $00, $00 ),
      ( $00, $F8, $CC, $CC, $F8, $C4, $CC, $DE, $CC, $CC, $CC, $C6, $00, $00, $00, $00 ),
      ( $00, $0E, $1B, $18, $18, $18, $7E, $18, $18, $18, $18, $18, $D8, $70, $00, $00 ),
      ( $00, $18, $30, $60, $00, $78, $0C, $7C, $CC, $CC, $CC, $76, $00, $00, $00, $00 ),
      ( $00, $0C, $18, $30, $00, $38, $18, $18, $18, $18, $18, $3C, $00, $00, $00, $00 ),
      ( $00, $18, $30, $60, $00, $7C, $C6, $C6, $C6, $C6, $C6, $7C, $00, $00, $00, $00 ),
      ( $00, $18, $30, $60, $00, $CC, $CC, $CC, $CC, $CC, $CC, $76, $00, $00, $00, $00 ),
      ( $00, $00, $76, $DC, $00, $DC, $66, $66, $66, $66, $66, $66, $00, $00, $00, $00 ),
      ( $76, $DC, $00, $C6, $E6, $F6, $FE, $DE, $CE, $C6, $C6, $C6, $00, $00, $00, $00 ),
      ( $00, $3C, $6C, $6C, $3E, $00, $7E, $00, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $38, $6C, $6C, $38, $00, $7C, $00, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $30, $30, $00, $30, $30, $60, $C0, $C6, $C6, $7C, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $00, $FE, $C0, $C0, $C0, $C0, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $00, $FE, $06, $06, $06, $06, $00, $00, $00, $00, $00 ),
      ( $00, $C0, $C0, $C2, $C6, $CC, $18, $30, $60, $DC, $86, $0C, $18, $3E, $00, $00 ),
      ( $00, $C0, $C0, $C2, $C6, $CC, $18, $30, $66, $CE, $9E, $3E, $06, $06, $00, $00 ),
      ( $00, $00, $18, $18, $00, $18, $18, $18, $3C, $3C, $3C, $18, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $36, $6C, $D8, $6C, $36, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $D8, $6C, $36, $6C, $D8, $00, $00, $00, $00, $00, $00 ),
      ( $11, $44, $11, $44, $11, $44, $11, $44, $11, $44, $11, $44, $11, $44, $11, $44 ),
      ( $55, $AA, $55, $AA, $55, $AA, $55, $AA, $55, $AA, $55, $AA, $55, $AA, $55, $AA ),
      ( $DD, $77, $DD, $77, $DD, $77, $DD, $77, $DD, $77, $DD, $77, $DD, $77, $DD, $77 ),
      ( $18, $18, $18, $18, $18, $18, $18, $18, $18, $18, $18, $18, $18, $18, $18, $18 ),
      ( $18, $18, $18, $18, $18, $18, $18, $F8, $18, $18, $18, $18, $18, $18, $18, $18 ),
      ( $18, $18, $18, $18, $18, $F8, $18, $F8, $18, $18, $18, $18, $18, $18, $18, $18 ),
      ( $36, $36, $36, $36, $36, $36, $36, $F6, $36, $36, $36, $36, $36, $36, $36, $36 ),
      ( $00, $00, $00, $00, $00, $00, $00, $FE, $36, $36, $36, $36, $36, $36, $36, $36 ),
      ( $00, $00, $00, $00, $00, $F8, $18, $F8, $18, $18, $18, $18, $18, $18, $18, $18 ),
      ( $36, $36, $36, $36, $36, $F6, $06, $F6, $36, $36, $36, $36, $36, $36, $36, $36 ),
      ( $36, $36, $36, $36, $36, $36, $36, $36, $36, $36, $36, $36, $36, $36, $36, $36 ),
      ( $00, $00, $00, $00, $00, $FE, $06, $F6, $36, $36, $36, $36, $36, $36, $36, $36 ),
      ( $36, $36, $36, $36, $36, $F6, $06, $FE, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $36, $36, $36, $36, $36, $36, $36, $FE, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $18, $18, $18, $18, $18, $F8, $18, $F8, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $00, $00, $F8, $18, $18, $18, $18, $18, $18, $18, $18 ),
      ( $18, $18, $18, $18, $18, $18, $18, $1F, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $18, $18, $18, $18, $18, $18, $18, $FF, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $00, $00, $FF, $18, $18, $18, $18, $18, $18, $18, $18 ),
      ( $18, $18, $18, $18, $18, $18, $18, $1F, $18, $18, $18, $18, $18, $18, $18, $18 ),
      ( $00, $00, $00, $00, $00, $00, $00, $FF, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $18, $18, $18, $18, $18, $18, $18, $FF, $18, $18, $18, $18, $18, $18, $18, $18 ),
      ( $18, $18, $18, $18, $18, $1F, $18, $1F, $18, $18, $18, $18, $18, $18, $18, $18 ),
      ( $36, $36, $36, $36, $36, $36, $36, $37, $36, $36, $36, $36, $36, $36, $36, $36 ),
      ( $36, $36, $36, $36, $36, $37, $30, $3F, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $3F, $30, $37, $36, $36, $36, $36, $36, $36, $36, $36 ),
      ( $36, $36, $36, $36, $36, $F7, $00, $FF, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $FF, $00, $F7, $36, $36, $36, $36, $36, $36, $36, $36 ),
      ( $36, $36, $36, $36, $36, $37, $30, $37, $36, $36, $36, $36, $36, $36, $36, $36 ),
      ( $00, $00, $00, $00, $00, $FF, $00, $FF, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $36, $36, $36, $36, $36, $F7, $00, $F7, $36, $36, $36, $36, $36, $36, $36, $36 ),
      ( $18, $18, $18, $18, $18, $FF, $00, $FF, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $36, $36, $36, $36, $36, $36, $36, $FF, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $FF, $00, $FF, $18, $18, $18, $18, $18, $18, $18, $18 ),
      ( $00, $00, $00, $00, $00, $00, $00, $FF, $36, $36, $36, $36, $36, $36, $36, $36 ),
      ( $36, $36, $36, $36, $36, $36, $36, $3F, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $18, $18, $18, $18, $18, $1F, $18, $1F, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $1F, $18, $1F, $18, $18, $18, $18, $18, $18, $18, $18 ),
      ( $00, $00, $00, $00, $00, $00, $00, $3F, $36, $36, $36, $36, $36, $36, $36, $36 ),
      ( $36, $36, $36, $36, $36, $36, $36, $FF, $36, $36, $36, $36, $36, $36, $36, $36 ),
      ( $18, $18, $18, $18, $18, $FF, $18, $FF, $18, $18, $18, $18, $18, $18, $18, $18 ),
      ( $18, $18, $18, $18, $18, $18, $18, $F8, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $00, $00, $1F, $18, $18, $18, $18, $18, $18, $18, $18 ),
      ( $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF ),
      ( $00, $00, $00, $00, $00, $00, $00, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF, $FF ),
      ( $F0, $F0, $F0, $F0, $F0, $F0, $F0, $F0, $F0, $F0, $F0, $F0, $F0, $F0, $F0, $F0 ),
      ( $0F, $0F, $0F, $0F, $0F, $0F, $0F, $0F, $0F, $0F, $0F, $0F, $0F, $0F, $0F, $0F ),
      ( $FF, $FF, $FF, $FF, $FF, $FF, $FF, $00, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $76, $DC, $D8, $D8, $D8, $DC, $76, $00, $00, $00, $00 ),
      ( $00, $00, $78, $CC, $CC, $CC, $D8, $CC, $C6, $C6, $C6, $CC, $00, $00, $00, $00 ),
      ( $00, $00, $FE, $C6, $C6, $C0, $C0, $C0, $C0, $C0, $C0, $C0, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $FE, $6C, $6C, $6C, $6C, $6C, $6C, $6C, $00, $00, $00, $00 ),
      ( $00, $00, $00, $FE, $C6, $60, $30, $18, $30, $60, $C6, $FE, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $7E, $D8, $D8, $D8, $D8, $D8, $70, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $66, $66, $66, $66, $66, $7C, $60, $60, $C0, $00, $00, $00 ),
      ( $00, $00, $00, $00, $76, $DC, $18, $18, $18, $18, $18, $18, $00, $00, $00, $00 ),
      ( $00, $00, $00, $7E, $18, $3C, $66, $66, $66, $3C, $18, $7E, $00, $00, $00, $00 ),
      ( $00, $00, $00, $38, $6C, $C6, $C6, $FE, $C6, $C6, $6C, $38, $00, $00, $00, $00 ),
      ( $00, $00, $38, $6C, $C6, $C6, $C6, $6C, $6C, $6C, $6C, $EE, $00, $00, $00, $00 ),
      ( $00, $00, $1E, $30, $18, $0C, $3E, $66, $66, $66, $66, $3C, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $7E, $DB, $DB, $DB, $7E, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $03, $06, $7E, $DB, $DB, $F3, $7E, $60, $C0, $00, $00, $00, $00 ),
      ( $00, $00, $1C, $30, $60, $60, $7C, $60, $60, $60, $30, $1C, $00, $00, $00, $00 ),
      ( $00, $00, $00, $7C, $C6, $C6, $C6, $C6, $C6, $C6, $C6, $C6, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $FE, $00, $00, $FE, $00, $00, $FE, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $18, $18, $7E, $18, $18, $00, $00, $FF, $00, $00, $00, $00 ),
      ( $00, $00, $00, $30, $18, $0C, $06, $0C, $18, $30, $00, $7E, $00, $00, $00, $00 ),
      ( $00, $00, $00, $0C, $18, $30, $60, $30, $18, $0C, $00, $7E, $00, $00, $00, $00 ),
      ( $00, $00, $0E, $1B, $1B, $18, $18, $18, $18, $18, $18, $18, $18, $18, $18, $18 ),
      ( $18, $18, $18, $18, $18, $18, $18, $18, $D8, $D8, $D8, $70, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $18, $18, $00, $7E, $00, $18, $18, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $76, $DC, $00, $76, $DC, $00, $00, $00, $00, $00, $00 ),
      ( $00, $38, $6C, $6C, $38, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $00, $00, $18, $18, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $00, $00, $00, $18, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $0F, $0C, $0C, $0C, $0C, $0C, $EC, $6C, $6C, $3C, $1C, $00, $00, $00, $00 ),
      ( $00, $D8, $6C, $6C, $6C, $6C, $6C, $00, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $70, $D8, $30, $60, $C8, $F8, $00, $00, $00, $00, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $7C, $7C, $7C, $7C, $7C, $7C, $7C, $00, $00, $00, $00, $00 ),
      ( $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00, $00 )
   );
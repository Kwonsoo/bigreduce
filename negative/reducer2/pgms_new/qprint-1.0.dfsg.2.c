/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

#line 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h"
typedef unsigned long size_t;
#line 131 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off_t;
#line 132 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off64_t;
#line 44 "/usr/include/stdio.h"
struct _IO_FILE;
#line 48 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE;
#line 154 "/usr/include/libio.h"
typedef void _IO_lock_t;
#line 160 "/usr/include/libio.h"
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
#line 245 "/usr/include/libio.h"
struct _IO_FILE {
   int _flags ;
   char *_IO_read_ptr ;
   char *_IO_read_end ;
   char *_IO_read_base ;
   char *_IO_write_base ;
   char *_IO_write_ptr ;
   char *_IO_write_end ;
   char *_IO_buf_base ;
   char *_IO_buf_end ;
   char *_IO_save_base ;
   char *_IO_backup_base ;
   char *_IO_save_end ;
   struct _IO_marker *_markers ;
   struct _IO_FILE *_chain ;
   int _fileno ;
   int _flags2 ;
   __off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   __off64_t _offset ;
   void *__pad1 ;
   void *__pad2 ;
   void *__pad3 ;
   void *__pad4 ;
   size_t __pad5 ;
   int _mode ;
   char _unused2[(15UL * sizeof(int ) - 4UL * sizeof(void *)) - sizeof(size_t )] ;
};
#line 315 "/usr/include/libio.h"
typedef struct _IO_FILE _IO_FILE;
#line 241 "qprint.w"
enum __anonenum_character_encoding_rule_29 {
    Rule_1 = 0,
    Rule_2 = 1,
    Rule_3 = 2,
    Rule_4 = 3,
    Rule_EBCDIC = 4
} ;
#line 241 "qprint.w"
typedef enum __anonenum_character_encoding_rule_29 character_encoding_rule;
#line 598 "qprint.w"
typedef unsigned long file_address_type;
#line 434 "/usr/include/libio.h"
extern int _IO_getc(_IO_FILE *__fp ) ;
#line 435
extern int _IO_putc(int __c , _IO_FILE *__fp ) ;
#line 168 "/usr/include/stdio.h"
extern struct _IO_FILE *stdin ;
#line 169
extern struct _IO_FILE *stdout ;
#line 170
extern struct _IO_FILE *stderr ;
#line 272
extern FILE *fopen(char const   * __restrict  __filename , char const   * __restrict  __modes ) ;
#line 356
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
#line 362
extern int printf(char const   * __restrict  __format  , ...) ;
#line 689
extern int fputs(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
#line 702
extern int ungetc(int __c , FILE *__stream ) ;
#line 79 "/usr/include/ctype.h"
extern  __attribute__((__nothrow__)) unsigned short const   **( __attribute__((__leaf__)) __ctype_b_loc)(void)  __attribute__((__const__)) ;
#line 127
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) toupper)(int __c ) ;
#line 144 "/usr/include/string.h"
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strcmp)(char const   *__s1 ,
                                                                                               char const   *__s2 )  __attribute__((__pure__)) ;
#line 57 "/usr/include/getopt.h"
extern char *optarg ;
#line 71
extern int optind ;
#line 150
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) getopt)(int ___argc ,
                                                                             char * const  *___argv ,
                                                                             char const   *__shortopts ) ;
#line 137 "qprint.w"
static FILE *fi  ;
#line 138 "qprint.w"
static FILE *fo  ;
#line 243 "qprint.w"
static character_encoding_rule character_class[256]  ;
#line 410 "qprint.w"
static int current_line_length  =    0;
#line 426 "qprint.w"
static int pending_white_space  =    0;
#line 621 "qprint.w"
static file_address_type decode_input_stream_position  =    (file_address_type )0;
#line 622 "qprint.w"
static long decode_errors  =    0L;
#line 797 "qprint.w"
static int decoding  =    0;
#line 798 "qprint.w"
static int encoding  =    0;
#line 799 "qprint.w"
static int binary_input  =    0;
#line 800 "qprint.w"
static int errcheck  =    1;
#line 801 "qprint.w"
static int EBCDIC_out  =    0;
#line 802 "qprint.w"
static int paranoid  =    0;
#line 629
static int read_decode_character(void) ;
#line 651
static int hex_to_nybble(int ch ) ;
#line 152
static void output_line_break(void) ;
#line 152 "qprint.w"
static char line_break[3]  = {      (char)13,      (char)10,      (char)0};
#line 150 "qprint.w"
static void output_line_break(void) 
{ 


  {
  {
#line 154
  fputs((char const   */* __restrict  */)(line_break), (FILE */* __restrict  */)fo);
#line 155
  current_line_length = 0;
  }
#line 156
  return;
}
}
#line 171 "qprint.w"
static void check_line_length(int chars_required ) 
{ 


  {
#line 173
  if (current_line_length + chars_required >= 71) {
    {
#line 174
    _IO_putc(61, fo);
#line 175
    output_line_break();
    }
  }
#line 177
  current_line_length += chars_required;
#line 178
  return;
}
}
#line 184 "qprint.w"
static void emit_literally(int ch ) 
{ 


  {
  {
#line 186
  check_line_length(1);
#line 187
  _IO_putc(ch, fo);
  }
#line 188
  return;
}
}
#line 197
static void emit_hex_encoded(int ch ) ;
#line 197 "qprint.w"
static char hex[16]  = 
#line 197
  {      (char)48,      (char)49,      (char)50,      (char)51, 
        (char)52,      (char)53,      (char)54,      (char)55, 
        (char)56,      (char)57,      (char)65,      (char)66, 
        (char)67,      (char)68,      (char)69,      (char)70};
#line 195 "qprint.w"
static void emit_hex_encoded(int ch ) 
{ 


  {
  {
#line 203
  check_line_length(3);
#line 204
  _IO_putc(61, fo);
#line 205
  _IO_putc((int )hex[(ch >> 4) & 15], fo);
#line 206
  _IO_putc((int )hex[ch & 15], fo);
  }
#line 207
  return;
}
}
#line 223 "qprint.w"
static void encode(void) 
{ 
  int i ;
  int ch ;
  int chn ;
  int tmp ;

  {
#line 266
  i = 0;
  {
#line 266
  while (1) {
    while_continue: /* CIL Label */ ;
#line 266
    if (! (i <= 255)) {
#line 266
      goto while_break;
    }
#line 267
    character_class[i] = (character_encoding_rule )0;
#line 266
    i ++;
  }
  while_break: /* CIL Label */ ;
  }
#line 274
  i = 33;
  {
#line 274
  while (1) {
    while_continue___0: /* CIL Label */ ;
#line 274
    if (! (i <= 60)) {
#line 274
      goto while_break___0;
    }
#line 275
    character_class[i] = (character_encoding_rule )1;
#line 274
    i ++;
  }
  while_break___0: /* CIL Label */ ;
  }
#line 278
  i = 62;
  {
#line 278
  while (1) {
    while_continue___1: /* CIL Label */ ;
#line 278
    if (! (i <= 126)) {
#line 278
      goto while_break___1;
    }
#line 279
    character_class[i] = (character_encoding_rule )1;
#line 278
    i ++;
  }
  while_break___1: /* CIL Label */ ;
  }
#line 286
  character_class[9] = (character_encoding_rule )2;
#line 287
  character_class[32] = (character_encoding_rule )2;
#line 296
  character_class[10] = (character_encoding_rule )3;
#line 297
  character_class[13] = (character_encoding_rule )3;
#line 307
  character_class[126] = (character_encoding_rule )4;
#line 307
  character_class[125] = character_class[126];
#line 307
  character_class[124] = character_class[125];
#line 307
  character_class[123] = character_class[124];
#line 307
  character_class[96] = character_class[123];
#line 307
  character_class[94] = character_class[96];
#line 307
  character_class[93] = character_class[94];
#line 307
  character_class[92] = character_class[93];
#line 307
  character_class[91] = character_class[92];
#line 307
  character_class[64] = character_class[91];
#line 307
  character_class[36] = character_class[64];
#line 307
  character_class[35] = character_class[36];
#line 307
  character_class[34] = character_class[35];
#line 307
  character_class[33] = character_class[34];
  {
#line 229
  while (1) {
    while_continue___2: /* CIL Label */ ;
    {
#line 229
    ch = _IO_getc(fi);
    }
#line 229
    if (! (ch != -1)) {
#line 229
      goto while_break___2;
    }
    {
#line 333
    if ((unsigned int )character_class[ch] == 0U) {
#line 333
      goto case_0;
    }
#line 338
    if ((unsigned int )character_class[ch] == 1U) {
#line 338
      goto case_1;
    }
#line 347
    if ((unsigned int )character_class[ch] == 2U) {
#line 347
      goto case_2;
    }
#line 356
    if ((unsigned int )character_class[ch] == 3U) {
#line 356
      goto case_3;
    }
#line 377
    if ((unsigned int )character_class[ch] == 4U) {
#line 377
      goto case_4;
    }
#line 332
    goto switch_break;
    case_0: /* CIL Label */ 
#line 435
    if (pending_white_space != 0) {
      {
#line 436
      emit_literally(pending_white_space);
#line 437
      pending_white_space = 0;
      }
    }
    {
#line 335
    emit_hex_encoded(ch);
    }
#line 336
    goto switch_break;
    case_1: /* CIL Label */ 
#line 435
    if (pending_white_space != 0) {
      {
#line 436
      emit_literally(pending_white_space);
#line 437
      pending_white_space = 0;
      }
    }
#line 340
    if (paranoid) {
      {
#line 341
      emit_hex_encoded(ch);
      }
    } else {
      {
#line 343
      emit_literally(ch);
      }
    }
#line 345
    goto switch_break;
    case_2: /* CIL Label */ 
#line 348
    if (paranoid) {
      {
#line 349
      emit_hex_encoded(ch);
      }
    } else {
#line 435
      if (pending_white_space != 0) {
        {
#line 436
        emit_literally(pending_white_space);
#line 437
        pending_white_space = 0;
        }
      }
#line 352
      pending_white_space = ch;
    }
#line 354
    goto switch_break;
    case_3: /* CIL Label */ 
#line 357
    if (binary_input) {
#line 435
      if (pending_white_space != 0) {
        {
#line 436
        emit_literally(pending_white_space);
#line 437
        pending_white_space = 0;
        }
      }
      {
#line 363
      emit_hex_encoded(ch);
      }
    } else {
      {
#line 451
      tmp = _IO_getc(fi);
#line 451
      chn = tmp;
      }
#line 453
      if (chn != -1) {
#line 454
        if (chn == 10) {
#line 454
          goto _L;
        } else
#line 454
        if (chn == 13) {
          _L: /* CIL Label */ 
#line 455
          if (chn == ch) {
            {
#line 456
            ungetc(chn, fi);
            }
          }
        } else {
          {
#line 459
          ungetc(chn, fi);
          }
        }
      }
#line 369
      if (pending_white_space != 0) {
        {
#line 370
        emit_hex_encoded(pending_white_space);
#line 371
        pending_white_space = 0;
        }
      }
      {
#line 373
      output_line_break();
      }
    }
#line 375
    goto switch_break;
    case_4: /* CIL Label */ 
#line 435
    if (pending_white_space != 0) {
      {
#line 436
      emit_literally(pending_white_space);
#line 437
      pending_white_space = 0;
      }
    }
#line 381
    if (EBCDIC_out) {
      {
#line 382
      emit_hex_encoded(ch);
      }
    } else
#line 381
    if (paranoid) {
      {
#line 382
      emit_hex_encoded(ch);
      }
    } else {
      {
#line 384
      emit_literally(ch);
      }
    }
#line 386
    goto switch_break;
    switch_break: /* CIL Label */ ;
    }
  }
  while_break___2: /* CIL Label */ ;
  }
#line 435
  if (pending_white_space != 0) {
    {
#line 436
    emit_literally(pending_white_space);
#line 437
    pending_white_space = 0;
    }
  }
#line 473
  if (current_line_length > 0) {
    {
#line 474
    _IO_putc(61, fo);
#line 475
    output_line_break();
    }
  }
#line 234
  return;
}
}
#line 396 "qprint.w"
static int is_end_of_line_sequence(int ch ) 
{ 
  int chn ;
  int tmp ;

  {
#line 398
  if (ch == 13) {
#line 398
    goto _L___0;
  } else
#line 398
  if (ch == 10) {
    _L___0: /* CIL Label */ 
    {
#line 451
    tmp = _IO_getc(fi);
#line 451
    chn = tmp;
    }
#line 453
    if (chn != -1) {
#line 454
      if (chn == 10) {
#line 454
        goto _L;
      } else
#line 454
      if (chn == 13) {
        _L: /* CIL Label */ 
#line 455
        if (chn == ch) {
          {
#line 456
          ungetc(chn, fi);
          }
        }
      } else {
        {
#line 459
        ungetc(chn, fi);
        }
      }
    }
#line 400
    return (1);
  }
#line 402
  return (0);
}
}
#line 489 "qprint.w"
static void decode(void) 
{ 
  int ch ;
  int ch1 ;
  int ch2 ;
  int tmp ;
  int n1 ;
  int n2 ;
  int tmp___0 ;
  int chn ;
  int tmp___1 ;

  {
  {
#line 493
  while (1) {
    while_continue: /* CIL Label */ ;
    {
#line 493
    ch = read_decode_character();
    }
#line 493
    if (! (ch != -1)) {
#line 493
      goto while_break;
    }
    {
#line 496
    if (ch == 61) {
#line 496
      goto case_61;
    }
#line 504
    if (ch == 10) {
#line 504
      goto case_10;
    }
#line 504
    if (ch == 13) {
#line 504
      goto case_10;
    }
#line 509
    goto switch_default;
    case_61: /* CIL Label */ 
    {
#line 530
    ch1 = read_decode_character();
    }
    {
#line 566
    while (1) {
      while_continue___0: /* CIL Label */ ;
#line 566
      if (! (ch1 == 32)) {
#line 566
        if (! (ch1 == 9)) {
#line 566
          goto while_break___0;
        }
      }
      {
#line 567
      ch1 = read_decode_character();
#line 568
      tmp = is_end_of_line_sequence(ch1);
      }
#line 568
      if (tmp) {
#line 569
        goto while_break___0;
      }
#line 571
      if (! (ch1 == 32)) {
#line 571
        if (! (ch1 == 9)) {
#line 731
          if (errcheck) {
#line 732
            if (ch1 >= 32) {
#line 732
              if (ch1 <= 126) {
                {
#line 735
                fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Error: invalid character \"%c\" in soft line break sequence at byte %lu (0x%lX) of input.\n",
                        ch1, decode_input_stream_position - 1UL, decode_input_stream_position - 1UL);
                }
              } else {
#line 732
                goto _L;
              }
            } else
            _L: /* CIL Label */ 
#line 732
            if (ch1 >= 161) {
              {
#line 735
              fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Error: invalid character \"%c\" in soft line break sequence at byte %lu (0x%lX) of input.\n",
                      ch1, decode_input_stream_position - 1UL, decode_input_stream_position - 1UL);
              }
            } else {
              {
#line 750
              fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Error: invalid character \"0x%02X\" in soft line break sequence at byte %lu (0x%lX) of input.\n",
                      ch1, decode_input_stream_position - 1UL, decode_input_stream_position - 1UL);
              }
            }
          }
#line 573
          decode_errors ++;
#line 574
          ch1 = 32;
        }
      }
    }
    while_break___0: /* CIL Label */ ;
    }
    {
#line 532
    tmp___0 = is_end_of_line_sequence(ch1);
    }
#line 532
    if (tmp___0) {
#line 533
      ch = -1;
    } else {
      {
#line 537
      n1 = hex_to_nybble(ch1);
#line 538
      ch2 = read_decode_character();
#line 539
      n2 = hex_to_nybble(ch2);
      }
#line 540
      if (n1 == -1) {
#line 540
        goto _L___3;
      } else
#line 540
      if (n2 == -1) {
        _L___3: /* CIL Label */ 
#line 685
        if (errcheck) {
#line 686
          if (ch1 >= 32) {
#line 686
            if (ch1 <= 126) {
#line 686
              goto _L___1;
            } else {
#line 686
              goto _L___2;
            }
          } else
          _L___2: /* CIL Label */ 
#line 686
          if (ch1 >= 161) {
            _L___1: /* CIL Label */ 
#line 686
            if (ch2 >= 32) {
#line 686
              if (ch2 <= 126) {
                {
#line 690
                fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Error: bad equal sign escape \"=%c%c\" at byte %lu (0x%lX) of input.\n",
                        ch1, ch2, decode_input_stream_position - 3UL, decode_input_stream_position - 3UL);
                }
              } else {
#line 686
                goto _L___0;
              }
            } else
            _L___0: /* CIL Label */ 
#line 686
            if (ch2 >= 161) {
              {
#line 690
              fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Error: bad equal sign escape \"=%c%c\" at byte %lu (0x%lX) of input.\n",
                      ch1, ch2, decode_input_stream_position - 3UL, decode_input_stream_position - 3UL);
              }
            } else {
              {
#line 705
              fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Error: bad equal sign escape \"= 0x%02X 0x%02X\" at byte %lu (0x%lX) of input.\n",
                      ch1, ch2, decode_input_stream_position - 3UL, decode_input_stream_position - 3UL);
              }
            }
          } else {
            {
#line 705
            fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Error: bad equal sign escape \"= 0x%02X 0x%02X\" at byte %lu (0x%lX) of input.\n",
                    ch1, ch2, decode_input_stream_position - 3UL, decode_input_stream_position - 3UL);
            }
          }
        }
#line 542
        decode_errors ++;
      }
#line 544
      ch = (n1 << 4) | n2;
    }
#line 498
    if (ch != -1) {
      {
#line 499
      _IO_putc(ch, fo);
      }
    }
#line 501
    goto switch_break;
    case_10: /* CIL Label */ 
    case_13: /* CIL Label */ 
    {
#line 451
    tmp___1 = _IO_getc(fi);
#line 451
    chn = tmp___1;
    }
#line 453
    if (chn != -1) {
#line 454
      if (chn == 10) {
#line 454
        goto _L___4;
      } else
#line 454
      if (chn == 13) {
        _L___4: /* CIL Label */ 
#line 455
        if (chn == ch) {
          {
#line 456
          ungetc(chn, fi);
          }
        }
      } else {
        {
#line 459
        ungetc(chn, fi);
        }
      }
    }
    {
#line 506
    _IO_putc('\n', fo);
    }
#line 507
    goto switch_break;
    switch_default: /* CIL Label */ 
    {
#line 510
    _IO_putc(ch, fo);
    }
#line 511
    goto switch_break;
    switch_break: /* CIL Label */ ;
    }
  }
  while_break: /* CIL Label */ ;
  }
#line 514
  return;
}
}
#line 636 "qprint.w"
static int read_decode_character(void) 
{ 
  int ch ;

  {
  {
#line 640
  ch = _IO_getc(fi);
  }
#line 641
  if (ch != -1) {
#line 642
    decode_input_stream_position ++;
  }
#line 644
  return (ch);
}
}
#line 659 "qprint.w"
static int hex_to_nybble(int ch ) 
{ 


  {
#line 661
  if (ch >= 48) {
#line 661
    if (ch <= 57) {
#line 662
      return (ch - 48);
    } else {
#line 661
      goto _L___0;
    }
  } else
  _L___0: /* CIL Label */ 
#line 663
  if (ch >= 65) {
#line 663
    if (ch <= 70) {
#line 664
      return (10 + (ch - 65));
    } else {
#line 663
      goto _L;
    }
  } else
  _L: /* CIL Label */ 
#line 665
  if (ch >= 97) {
#line 665
    if (ch <= 102) {
#line 666
      return (10 + (ch - 97));
    }
  }
#line 668
  return (-1);
}
}
#line 1023 "qprint.w"
static void usage(void) 
{ 


  {
  {
#line 1026
  printf((char const   */* __restrict  */)"%s  --  Encode/decode file as Quoted-Printable.  Call:\n",
         "qprint");
#line 1027
  printf((char const   */* __restrict  */)"            %s [-e / -d] [options] [infile] [outfile]\n",
         "qprint");
#line 1028
  printf((char const   */* __restrict  */)"\n");
#line 1029
  printf((char const   */* __restrict  */)"Options:\n");
#line 1030
  printf((char const   */* __restrict  */)"           -b, --binary      Treat input as pure binary file\n");
#line 1031
  printf((char const   */* __restrict  */)"           --copyright       Print copyright information\n");
#line 1032
  printf((char const   */* __restrict  */)"           -d, --decode      Decode Quoted-Printable encoded file\n");
#line 1033
  printf((char const   */* __restrict  */)"           -e, --encode      Encode file into Quoted-Printable\n");
#line 1034
  printf((char const   */* __restrict  */)"           -i, --ebcdic      EBCDIC-compatible encoding output\n");
#line 1035
  printf((char const   */* __restrict  */)"           -n, --noerrcheck  Ignore errors when decoding\n");
#line 1036
  printf((char const   */* __restrict  */)"           -p, --paranoid    Paranoid: quote even printable characters\n");
#line 1037
  printf((char const   */* __restrict  */)"           -u, --help        Print this message\n");
#line 1038
  printf((char const   */* __restrict  */)"           --version         Print version number\n");
#line 1039
  printf((char const   */* __restrict  */)"\n");
#line 1040
  printf((char const   */* __restrict  */)"by John Walker\n");
#line 1041
  printf((char const   */* __restrict  */)"http://www.fourmilab.ch/\n");
  }
#line 1042
  return;
}
}
#line 1061 "qprint.w"
int main(int argc , char **argv ) 
{ 
  int f ;
  int opt ;
  char *cp ;
  unsigned short const   **tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
#line 1077
  fi = stdin;
#line 1078
  fo = stdout;
  {
#line 821
  while (1) {
    while_continue: /* CIL Label */ ;
    {
#line 823
    opt = getopt(argc, (char * const  *)argv, "bdeinpu-:");
    }
#line 824
    if (opt == -1) {
#line 825
      goto while_break;
    }
#line 828
    if (opt == 45) {
      {
#line 834
      tmp = __ctype_b_loc();
      }
#line 834
      if ((int const   )*(*tmp + (int )*(optarg + 0)) & 512) {
        {
#line 835
        opt = toupper((int )*(optarg + 0));
        }
      }
    }
    {
#line 844
    if (opt == 66) {
#line 844
      goto case_66;
    }
#line 844
    if (opt == 98) {
#line 844
      goto case_66;
    }
#line 848
    if (opt == 67) {
#line 848
      goto case_67;
    }
#line 853
    if (opt == 68) {
#line 853
      goto case_68;
    }
#line 853
    if (opt == 100) {
#line 853
      goto case_68;
    }
#line 857
    if (opt == 101) {
#line 857
      goto case_101;
    }
#line 861
    if (opt == 69) {
#line 861
      goto case_69;
    }
#line 865
    if (opt == 72) {
#line 865
      goto case_72;
    }
#line 869
    if (opt == 105) {
#line 869
      goto case_105;
    }
#line 874
    if (opt == 78) {
#line 874
      goto case_78;
    }
#line 874
    if (opt == 110) {
#line 874
      goto case_78;
    }
#line 880
    if (opt == 80) {
#line 880
      goto case_80;
    }
#line 880
    if (opt == 112) {
#line 880
      goto case_80;
    }
#line 885
    if (opt == 63) {
#line 885
      goto case_63;
    }
#line 885
    if (opt == 117) {
#line 885
      goto case_63;
    }
#line 889
    if (opt == 86) {
#line 889
      goto case_86;
    }
#line 893
    goto switch_default___0;
    case_66: /* CIL Label */ 
    case_98: /* CIL Label */ 
#line 845
    binary_input = 1;
#line 846
    goto switch_break;
    case_67: /* CIL Label */ 
    {
#line 849
    printf((char const   */* __restrict  */)"This program is in the public domain.\n");
    }
#line 850
    return (0);
    case_68: /* CIL Label */ 
    case_100: /* CIL Label */ 
#line 854
    decoding = 1;
#line 855
    goto switch_break;
    case_101: /* CIL Label */ 
#line 858
    encoding = 1;
#line 859
    goto switch_break;
    case_69: /* CIL Label */ 
    {
#line 906
    if ((int )*(optarg + 1) == 98) {
#line 906
      goto case_98___0;
    }
#line 910
    if ((int )*(optarg + 1) == 110) {
#line 910
      goto case_110;
    }
#line 914
    goto switch_default;
    case_98___0: /* CIL Label */ 
#line 907
    EBCDIC_out = 1;
#line 908
    goto switch_break___0;
    case_110: /* CIL Label */ 
#line 911
    encoding = 1;
#line 912
    goto switch_break___0;
    switch_default: /* CIL Label */ 
    {
#line 916
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Invalid option: --%s\n",
            optarg);
    }
#line 917
    return (2);
    switch_break___0: /* CIL Label */ ;
    }
#line 863
    goto switch_break;
    case_72: /* CIL Label */ 
    {
#line 866
    usage();
    }
#line 867
    return (0);
    case_105: /* CIL Label */ 
#line 870
    EBCDIC_out = 1;
#line 871
    goto switch_break;
    case_78: /* CIL Label */ 
    case_110___0: /* CIL Label */ 
#line 875
    errcheck = 0;
#line 876
    goto switch_break;
    case_80: /* CIL Label */ 
    case_112: /* CIL Label */ 
#line 881
    paranoid = 1;
#line 882
    goto switch_break;
    case_63: /* CIL Label */ 
    case_117: /* CIL Label */ 
    {
#line 886
    usage();
    }
#line 887
    return (0);
    case_86: /* CIL Label */ 
    {
#line 1048
    printf((char const   */* __restrict  */)"%s %s\n", "qprint", "1.0");
#line 1049
    printf((char const   */* __restrict  */)"Last revised: %s\n", "5th March 2001");
#line 1050
    printf((char const   */* __restrict  */)"The latest version is always available\n");
#line 1051
    printf((char const   */* __restrict  */)"at http://www.fourmilab.ch/webtools/qprint/\n");
    }
#line 891
    return (0);
    switch_default___0: /* CIL Label */ 
    {
#line 895
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Invalid option: --%s\n",
            optarg);
    }
#line 896
    return (2);
    switch_break: /* CIL Label */ ;
    }
  }
  while_break: /* CIL Label */ ;
  }
#line 926
  if (encoding) {
#line 926
    if (decoding) {
      {
#line 928
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Cannot simultaneously encode and decode.\n");
      }
#line 929
      return (2);
    }
  }
#line 931
  if (! encoding) {
#line 931
    if (! decoding) {
      {
#line 933
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Please specify --encode (-e) or --decode (-d).\n");
      }
#line 934
      return (2);
    }
  }
#line 953
  f = 0;
  {
#line 954
  while (1) {
    while_continue___0: /* CIL Label */ ;
#line 954
    if (! (optind < argc)) {
#line 954
      goto while_break___0;
    }
#line 955
    cp = *(argv + optind);
    {
#line 970
    if (f == 0) {
#line 970
      goto case_0;
    }
#line 990
    if (f == 1) {
#line 990
      goto case_1;
    }
#line 1010
    goto switch_default___1;
    case_0: /* CIL Label */ 
    {
#line 971
    tmp___0 = strcmp((char const   *)cp, "-");
    }
#line 971
    if (tmp___0 != 0) {
      {
#line 972
      fi = fopen((char const   */* __restrict  */)cp, (char const   */* __restrict  */)"r");
      }
#line 972
      if ((unsigned long )fi == (unsigned long )((void *)0)) {
        {
#line 980
        fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Cannot open input file %s\n",
                cp);
        }
#line 981
        return (2);
      }
    }
#line 987
    f ++;
#line 988
    goto switch_break___1;
    case_1: /* CIL Label */ 
    {
#line 991
    tmp___1 = strcmp((char const   *)cp, "-");
    }
#line 991
    if (tmp___1 != 0) {
      {
#line 992
      fo = fopen((char const   */* __restrict  */)cp, (char const   */* __restrict  */)"w");
      }
#line 992
      if ((unsigned long )fo == (unsigned long )((void *)0)) {
        {
#line 1000
        fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Cannot open output file %s\n",
                cp);
        }
#line 1001
        return (2);
      }
    }
#line 1007
    f ++;
#line 1008
    goto switch_break___1;
    switch_default___1: /* CIL Label */ 
    {
#line 1012
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Too many file names specified.\n");
#line 1013
    usage();
    }
#line 1014
    return (2);
    switch_break___1: /* CIL Label */ ;
    }
#line 954
    optind ++;
  }
  while_break___0: /* CIL Label */ ;
  }
#line 1085
  if (decoding) {
    {
#line 1086
    decode();
    }
  } else {
    {
#line 1088
    encode();
    }
  }
#line 1090
  if (decode_errors) {
#line 1090
    tmp___2 = 1;
  } else {
#line 1090
    tmp___2 = 0;
  }
#line 1090
  return (tmp___2);
}
}
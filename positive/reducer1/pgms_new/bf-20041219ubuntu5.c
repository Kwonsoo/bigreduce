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
#line 23 "/usr/include/x86_64-linux-gnu/bits/termios.h"
typedef unsigned char cc_t;
#line 24 "/usr/include/x86_64-linux-gnu/bits/termios.h"
typedef unsigned int speed_t;
#line 25 "/usr/include/x86_64-linux-gnu/bits/termios.h"
typedef unsigned int tcflag_t;
#line 28 "/usr/include/x86_64-linux-gnu/bits/termios.h"
struct termios {
   tcflag_t c_iflag ;
   tcflag_t c_oflag ;
   tcflag_t c_cflag ;
   tcflag_t c_lflag ;
   cc_t c_line ;
   cc_t c_cc[32] ;
   speed_t c_ispeed ;
   speed_t c_ospeed ;
};
#line 9 "/home/june/collector/temp/bf-20041219ubuntu5/bf.h"
struct __anonstruct_Opt_9 {
   char *filename ;
   int cells ;
   unsigned short inputmode ;
   unsigned int showinput : 1 ;
   unsigned int wraparound : 1 ;
   unsigned int null : 1 ;
};
#line 9 "/home/june/collector/temp/bf-20041219ubuntu5/bf.h"
typedef struct __anonstruct_Opt_9 Opt;
#line 85 "/usr/include/signal.h"
typedef void (*__sighandler_t)(int  );
#line 41 "/home/june/collector/temp/bf-20041219ubuntu5/bf.c"
struct __progr {
   char op ;
   int plus ;
   int step ;
   int match ;
};
#line 41 "/home/june/collector/temp/bf-20041219ubuntu5/bf.c"
typedef struct __progr Progr;
#line 50 "/usr/include/x86_64-linux-gnu/bits/errno.h"
extern  __attribute__((__nothrow__)) int *( __attribute__((__leaf__)) __errno_location)(void)  __attribute__((__const__)) ;
#line 170 "/usr/include/stdio.h"
extern struct _IO_FILE *stderr ;
#line 356
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
#line 695
extern int puts(char const   *__s ) ;
#line 543 "/usr/include/stdlib.h"
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
#line 413 "/usr/include/string.h"
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) strerror)(int __errnum ) ;
#line 23 "/home/june/collector/temp/bf-20041219ubuntu5/errors.h"
void ErrorMsg(int nr , char const   *msg ) ;
#line 24
void HandleError(char const   *def , char *file , unsigned int line , int nr ) ;
#line 38 "/home/june/collector/temp/bf-20041219ubuntu5/errors.c"
void ErrorMsg(int nr , char const   *msg ) 
{ 


  {
  {
#line 40
  fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Error: %s\n",
          msg);
  }
#line 41
  if (nr) {
    {
#line 43
    puts("an error occured");
#line 44
    exit(nr);
    }
  }
#line 46
  return;
}
}
#line 51 "/home/june/collector/temp/bf-20041219ubuntu5/errors.c"
void HandleError(char const   *def , char *file , unsigned int line , int nr ) 
{ 
  char *separator ;
  int *tmp ;
  char *tmp___0 ;

  {
#line 55
  if ((unsigned long )def == (unsigned long )((void *)0)) {
#line 56
    separator = (char *)"";
#line 56
    def = (char const   *)separator;
  } else
#line 55
  if ((int const   )*def == 0) {
#line 56
    separator = (char *)"";
#line 56
    def = (char const   *)separator;
  } else {
#line 58
    separator = (char *)" - ";
  }
  {
#line 60
  tmp = __errno_location();
#line 60
  tmp___0 = strerror(*tmp);
#line 60
  fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s%s%s (in file %s, line %d)\n",
          def, separator, tmp___0, file, line);
  }
#line 63
  if (nr) {
    {
#line 65
    puts("an error occured");
#line 66
    exit(nr);
    }
  }
#line 68
  return;
}
}
#line 538 "/usr/include/stdio.h"
extern int getchar(void) ;
#line 66 "/usr/include/termios.h"
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) tcgetattr)(int __fd ,
                                                                                struct termios *__termios_p ) ;
#line 70
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) tcsetattr)(int __fd ,
                                                                                int __optional_actions ,
                                                                                struct termios  const  *__termios_p ) ;
#line 5 "/home/june/collector/temp/bf-20041219ubuntu5/tty.h"
void ttyInit(void) ;
#line 6
char ttyGetInput(void) ;
#line 7
void ttyRestore(void) ;
#line 17 "/home/june/collector/temp/bf-20041219ubuntu5/bf.h"
Opt opt  ;
#line 39 "/home/june/collector/temp/bf-20041219ubuntu5/tty_termios.c"
static struct termios *tty  =    (struct termios *)((void *)0);
#line 42 "/home/june/collector/temp/bf-20041219ubuntu5/tty_termios.c"
void ttyRestore(void) 
{ 


  {
#line 44
  if (tty) {
    {
#line 45
    tcsetattr(0, 0, (struct termios  const  *)tty);
    }
  }
#line 46
  return;
}
}
#line 51 "/home/june/collector/temp/bf-20041219ubuntu5/tty_termios.c"
static struct termios term  ;
#line 49 "/home/june/collector/temp/bf-20041219ubuntu5/tty_termios.c"
void ttyInit(void) 
{ 
  int tmp ;

  {
  {
#line 52
  tmp = tcgetattr(0, & term);
  }
#line 52
  if (! tmp) {
#line 53
    tty = & term;
  }
#line 54
  return;
}
}
#line 59 "/home/june/collector/temp/bf-20041219ubuntu5/tty_termios.c"
static struct termios term___0  ;
#line 57 "/home/june/collector/temp/bf-20041219ubuntu5/tty_termios.c"
void ttyFoo(void) 
{ 


  {
#line 60
  term___0 = *tty;
#line 61
  term___0.c_lflag &= 4294967293U;
#line 62
  term___0.c_lflag &= 4294967039U;
#line 63
  if ((int )opt.inputmode == 1) {
#line 64
    term___0.c_lflag &= 4294967287U;
  } else
#line 63
  if ((int )opt.inputmode == 3) {
#line 64
    term___0.c_lflag &= 4294967287U;
  }
  {
#line 65
  term___0.c_cc[6] = (cc_t )1;
#line 66
  tcsetattr(0, 0, (struct termios  const  *)(& term___0));
  }
#line 67
  return;
}
}
#line 69 "/home/june/collector/temp/bf-20041219ubuntu5/tty_termios.c"
char ttyGetInput(void) 
{ 
  char c ;
  int tmp ;

  {
#line 72
  if (tty) {
    {
#line 72
    ttyFoo();
    }
  }
  {
#line 73
  tmp = getchar();
#line 73
  c = (char )tmp;
#line 74
  ttyRestore();
  }
#line 75
  return (c);
}
}
#line 169 "/usr/include/stdio.h"
extern struct _IO_FILE *stdout ;
#line 237
extern int fclose(FILE *__stream ) ;
#line 242
extern int fflush(FILE *__stream ) ;
#line 272
extern FILE *fopen(char const   * __restrict  __filename , char const   * __restrict  __modes ) ;
#line 362
extern int printf(char const   * __restrict  __format  , ...) ;
#line 573
extern int fputc(int __c , FILE *__stream ) ;
#line 580
extern int putchar(int __c ) ;
#line 709
extern size_t fread(void * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream ) ;
#line 828
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) feof)(FILE *__stream ) ;
#line 147 "/usr/include/stdlib.h"
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) atoi)(char const   *__nptr )  __attribute__((__pure__)) ;
#line 468
extern  __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) calloc)(size_t __nmemb ,
                                                                               size_t __size )  __attribute__((__malloc__)) ;
#line 480
extern  __attribute__((__nothrow__)) void *( __attribute__((__warn_unused_result__,
__leaf__)) realloc)(void *__ptr , size_t __size ) ;
#line 483
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) free)(void *__ptr ) ;
#line 46 "/usr/include/string.h"
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2), __leaf__)) memcpy)(void * __restrict  __dest ,
                                                                                                 void const   * __restrict  __src ,
                                                                                                 size_t __n ) ;
#line 144
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strcmp)(char const   *__s1 ,
                                                                                               char const   *__s2 )  __attribute__((__pure__)) ;
#line 236
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strchr)(char const   *__s ,
                                                                                               int __c )  __attribute__((__pure__)) ;
#line 399
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
#line 107 "/usr/include/signal.h"
extern  __attribute__((__nothrow__)) __sighandler_t ( __attribute__((__leaf__)) signal)(int __sig ,
                                                                                        void (*__handler)(int  ) )  __asm__("__sysv_signal")  ;
#line 49 "/home/june/collector/temp/bf-20041219ubuntu5/bf.c"
void ForceExit(int signum ) 
{ 


  {
  {
#line 51
  ttyRestore();
  }
  {
#line 54
  if (signum == 2) {
#line 54
    goto case_2;
  }
#line 57
  if (signum == 15) {
#line 57
    goto case_15;
  }
#line 60
  if (signum == 3) {
#line 60
    goto case_3;
  }
#line 52
  goto switch_break;
  case_2: /* CIL Label */ 
  {
#line 55
  puts("Interrupted...");
  }
#line 56
  goto switch_break;
  case_15: /* CIL Label */ 
  {
#line 58
  puts("Terminated...");
  }
#line 59
  goto switch_break;
  case_3: /* CIL Label */ 
  {
#line 61
  puts("Quit...");
  }
#line 62
  goto switch_break;
  switch_break: /* CIL Label */ ;
  }
  {
#line 64
  exit(8);
  }
}
}
#line 134 "/home/june/collector/temp/bf-20041219ubuntu5/bf.c"
void FindMatchingBrackets(Progr *program , size_t psize ) 
{ 
  int i ;
  register Progr *px ;
  int j ;
  int l ;

  {
#line 137
  i = 0;
  {
#line 137
  while (1) {
    while_continue: /* CIL Label */ ;
#line 137
    if (! ((size_t )i < psize)) {
#line 137
      goto while_break;
    }
#line 139
    px = program + i;
#line 140
    if ((int )px->op == 91) {
#line 142
      l = 0;
#line 143
      j = i + 1;
      {
#line 143
      while (1) {
        while_continue___0: /* CIL Label */ ;
#line 143
        if (! ((size_t )j < psize)) {
#line 143
          goto while_break___0;
        }
#line 145
        if ((int )(program + j)->op == 91) {
#line 146
          l ++;
        }
#line 147
        if ((int )(program + j)->op == 93) {
#line 149
          if (l) {
#line 150
            l --;
          } else {
#line 152
            goto while_break___0;
          }
        }
#line 143
        j ++;
      }
      while_break___0: /* CIL Label */ ;
      }
#line 155
      if (l) {
        {
#line 156
        ErrorMsg(4, "Unbalanced brackets.");
        }
      }
#line 157
      px->match = j;
#line 158
      (program + j)->match = i;
    }
#line 137
    i ++;
  }
  while_break: /* CIL Label */ ;
  }
#line 161
  return;
}
}
#line 165 "/home/june/collector/temp/bf-20041219ubuntu5/bf.c"
size_t ReadProgram(Progr **program ) 
{ 
  size_t psize ;
  FILE *fp ;
  int i ;
  int read ;
  char fbuf[8192] ;
  char *vbuf ;
  char *c ;
  char oldc ;
  size_t tmp ;
  void *tmp___0 ;
  int tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  void *tmp___7 ;
  Progr *x ;
  char *tmp___8 ;
  char *tmp___9 ;
  char *tmp___10 ;
  char *tmp___11 ;
  char *tmp___12 ;

  {
  {
#line 167
  psize = (size_t )0;
#line 169
  i = 0;
#line 169
  read = 0;
#line 170
  vbuf = (char *)((void *)0);
#line 171
  oldc = (char)0;
#line 174
  fp = fopen((char const   */* __restrict  */)opt.filename, (char const   */* __restrict  */)"rb");
  }
#line 175
  if (! fp) {
    {
#line 175
    HandleError("fopen", (char *)"/home/june/collector/temp/bf-20041219ubuntu5/bf.c",
                175U, 3);
    }
  }
  {
#line 178
  while (1) {
    while_continue: /* CIL Label */ ;
    {
#line 178
    tmp___1 = feof(fp);
    }
#line 178
    if (tmp___1) {
#line 178
      goto while_break;
    }
    {
#line 180
    tmp = fread((void */* __restrict  */)(fbuf), (size_t )1, sizeof(fbuf), (FILE */* __restrict  */)fp);
#line 180
    i = (int )tmp;
#line 181
    read += i;
#line 181
    tmp___0 = realloc((void *)vbuf, (size_t )read);
#line 181
    vbuf = (char *)tmp___0;
    }
#line 182
    if (! vbuf) {
      {
#line 182
      HandleError("realloc", (char *)"/home/june/collector/temp/bf-20041219ubuntu5/bf.c",
                  182U, 1);
      }
    }
    {
#line 183
    memcpy((void */* __restrict  */)((vbuf + read) - i), (void const   */* __restrict  */)(fbuf),
           (size_t )i);
    }
  }
  while_break: /* CIL Label */ ;
  }
  {
#line 185
  fclose(fp);
#line 188
  c = vbuf;
  }
  {
#line 188
  while (1) {
    while_continue___0: /* CIL Label */ ;
#line 188
    if (! ((unsigned long )c < (unsigned long )(vbuf + read))) {
#line 188
      goto while_break___0;
    }
    {
#line 190
    tmp___6 = strchr("+-<>.,[]", (int )*c);
    }
#line 190
    if (tmp___6) {
#line 192
      if (! oldc) {
#line 195
        psize ++;
      } else {
        {
#line 192
        tmp___2 = strchr("<>", (int )oldc);
        }
#line 192
        if (tmp___2) {
          _L: /* CIL Label */ 
          {
#line 192
          tmp___4 = strchr("<>", (int )oldc);
          }
#line 192
          if (tmp___4) {
            {
#line 192
            tmp___5 = strchr("<>", (int )*c);
            }
#line 192
            if (! tmp___5) {
#line 195
              psize ++;
            }
          }
        } else {
          {
#line 192
          tmp___3 = strchr("+-<>", (int )*c);
          }
#line 192
          if (tmp___3) {
#line 192
            goto _L;
          } else {
#line 195
            psize ++;
          }
        }
      }
#line 200
      oldc = *c;
    }
#line 188
    c ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  {
#line 205
  tmp___7 = calloc(psize, sizeof(Progr ));
#line 205
  *program = (Progr *)tmp___7;
  }
#line 206
  if (! *program) {
    {
#line 206
    HandleError("calloc", (char *)"/home/june/collector/temp/bf-20041219ubuntu5/bf.c",
                206U, 1);
    }
  }
#line 208
  oldc = (char )'X';
#line 209
  i = 0;
#line 212
  c = vbuf;
  {
#line 212
  while (1) {
    while_continue___1: /* CIL Label */ ;
#line 212
    if (! ((unsigned long )c < (unsigned long )(vbuf + read))) {
#line 212
      goto while_break___1;
    }
    {
#line 214
    tmp___12 = strchr("+-<>.,[]", (int )*c);
    }
#line 214
    if (tmp___12) {
      {
#line 217
      tmp___8 = strchr("<>X", (int )oldc);
      }
#line 217
      if (tmp___8) {
        _L___0: /* CIL Label */ 
        {
#line 217
        tmp___10 = strchr("<>", (int )oldc);
        }
#line 217
        if (tmp___10) {
          {
#line 217
          tmp___11 = strchr("<>", (int )*c);
          }
#line 217
          if (! tmp___11) {
#line 219
            i ++;
          }
        }
      } else {
        {
#line 217
        tmp___9 = strchr("+-<>", (int )*c);
        }
#line 217
        if (tmp___9) {
#line 217
          goto _L___0;
        } else {
#line 219
          i ++;
        }
      }
#line 220
      x = *program + i;
      {
#line 224
      if ((int )*c == 43) {
#line 224
        goto case_43;
      }
#line 227
      if ((int )*c == 45) {
#line 227
        goto case_45;
      }
#line 230
      if ((int )*c == 62) {
#line 230
        goto case_62;
      }
#line 233
      if ((int )*c == 60) {
#line 233
        goto case_60;
      }
#line 236
      goto switch_default;
      case_43: /* CIL Label */ 
#line 225
      (x->plus) ++;
#line 226
      goto switch_break;
      case_45: /* CIL Label */ 
#line 228
      (x->plus) --;
#line 229
      goto switch_break;
      case_62: /* CIL Label */ 
#line 231
      (x->step) ++;
#line 232
      goto switch_break;
      case_60: /* CIL Label */ 
#line 234
      (x->step) --;
#line 235
      goto switch_break;
      switch_default: /* CIL Label */ 
#line 237
      x->op = *c;
#line 238
      goto switch_break;
      switch_break: /* CIL Label */ ;
      }
#line 240
      oldc = *c;
    }
#line 212
    c ++;
  }
  while_break___1: /* CIL Label */ ;
  }
  {
#line 243
  free((void *)vbuf);
  }
#line 244
  return (psize);
}
}
#line 247 "/home/june/collector/temp/bf-20041219ubuntu5/bf.c"
char GetInput(void) 
{ 
  char c ;
  int tmp ;

  {
#line 250
  if (! opt.inputmode) {
    {
#line 251
    tmp = getchar();
#line 251
    c = (char )tmp;
    }
  } else {
    {
#line 253
    c = ttyGetInput();
    }
  }
#line 254
  if (opt.null) {
#line 254
    if ((int )c == 10) {
#line 255
      c = (char)0;
    }
  }
#line 256
  return (c);
}
}
#line 259 "/home/june/collector/temp/bf-20041219ubuntu5/bf.c"
void Interprete(Progr *program , size_t psize ) 
{ 
  register char *array ;
  register char *p ;
  register int i ;
  void *tmp ;
  register Progr px ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
#line 263
  i = 0;
#line 266
  tmp = calloc((size_t )(opt.cells + 1), sizeof(char ));
#line 266
  array = (char *)tmp;
  }
#line 267
  if (! array) {
    {
#line 267
    HandleError("malloc", (char *)"/home/june/collector/temp/bf-20041219ubuntu5/bf.c",
                267U, 1);
    }
  }
#line 268
  p = array;
  {
#line 270
  while (1) {
    while_continue: /* CIL Label */ ;
#line 270
    if (! ((size_t )i < psize)) {
#line 270
      goto while_break;
    }
#line 272
    px = *(program + i);
#line 273
    if (px.op) {
#line 275
      if (opt.showinput) {
        {
#line 275
        fputc((int )px.op, stderr);
        }
      }
      {
#line 278
      if ((int )px.op == 91) {
#line 278
        goto case_91;
      }
#line 285
      if ((int )px.op == 93) {
#line 285
        goto case_93;
      }
#line 292
      if ((int )px.op == 46) {
#line 292
        goto case_46;
      }
#line 296
      if ((int )px.op == 44) {
#line 296
        goto case_44;
      }
#line 276
      goto switch_break;
      case_91: /* CIL Label */ 
#line 279
      if (! *p) {
#line 281
        i = px.match;
#line 282
        px = *(program + i);
      }
#line 284
      goto switch_break;
      case_93: /* CIL Label */ 
#line 286
      if (*p) {
#line 288
        i = px.match;
#line 289
        px = *(program + i);
      }
#line 291
      goto switch_break;
      case_46: /* CIL Label */ 
      {
#line 293
      putchar((int )*p);
#line 294
      fflush(stdout);
      }
#line 295
      goto switch_break;
      case_44: /* CIL Label */ 
      {
#line 297
      *p = GetInput();
      }
#line 298
      goto switch_break;
      switch_break: /* CIL Label */ ;
      }
    }
#line 301
    if (px.plus) {
#line 303
      if (opt.showinput) {
#line 303
        if (px.plus > 0) {
#line 303
          tmp___0 = '+';
        } else {
#line 303
          tmp___0 = '-';
        }
        {
#line 303
        fputc(tmp___0, stderr);
        }
      }
#line 304
      if (! opt.wraparound) {
#line 306
        if ((int )*p + px.plus > 255) {
          {
#line 307
          ErrorMsg(6, "Out of range! You wanted to \'+\' a 0xFF byte. See -w option.");
          }
        } else
#line 309
        if ((int )*p + px.plus < 0) {
          {
#line 310
          ErrorMsg(6, "Out of range! You wanted to \'-\' a 0x00 byte. See -w option.");
          }
        }
      }
#line 312
      *p = (char )((int )*p + px.plus);
    }
#line 314
    if (px.step) {
#line 316
      if (opt.showinput) {
#line 316
        if (px.step > 0) {
#line 316
          tmp___1 = '>';
        } else {
#line 316
          tmp___1 = '<';
        }
        {
#line 316
        fputc(tmp___1, stderr);
        }
      }
#line 317
      if ((unsigned long )(p + px.step) > (unsigned long )(array + opt.cells)) {
        {
#line 318
        ErrorMsg(5, "Out of range! You wanted to \'>\' beyond the last cell.See -c option.");
        }
      } else
#line 322
      if ((unsigned long )(p + px.step) < (unsigned long )array) {
        {
#line 323
        ErrorMsg(5, "Out of range! Youwanted to \'<\' below the first cell.\nTo solve, add some \'>\'s at the beginning, for example.");
        }
      }
#line 327
      p += px.step;
    }
#line 329
    i ++;
  }
  while_break: /* CIL Label */ ;
  }
  {
#line 331
  free((void *)array);
  }
#line 332
  return;
}
}
#line 335 "/home/june/collector/temp/bf-20041219ubuntu5/bf.c"
void Usage(char *bin ) 
{ 


  {
  {
#line 337
  printf((char const   */* __restrict  */)"bf - a Brainfuck interpreter       version %s\n",
         "20041219");
#line 338
  puts("(C) 2003, 2004, Stephan Beyer, GPL, s-beyer@gmx.net\n\nUsage information: ");
#line 340
  printf((char const   */* __restrict  */)"\t%s [-h] [options] inputfile\n\n", bin);
#line 341
  puts("Available options:");
#line 342
  printf((char const   */* __restrict  */)"\t-c<num>   specify number of cells [%d]\n",
         opt.cells);
#line 343
  printf((char const   */* __restrict  */)"\t-i        show used code input (stderr)\n\t-n        translate input: 10 (\\n) to 0\n\t-w        disallow decrementing 0 and incrementing 255\n\t-,<mode>  set input mode: 0-4 [%d]\n",
         (int )opt.inputmode);
#line 347
  puts("\nSee the bf(1) manpage for more information.\nHave fun!");
  }
#line 349
  return;
}
}
#line 351 "/home/june/collector/temp/bf-20041219ubuntu5/bf.c"
void HandleOptions(int c , char **v ) 
{ 
  int i ;
  char help[3] ;
  int tmp ;
  int tmp___0 ;
  size_t tmp___1 ;

  {
#line 356
  opt.showinput = 0U;
#line 357
  opt.cells = 9999;
#line 358
  opt.inputmode = (unsigned short)0;
#line 359
  opt.null = 0U;
#line 360
  opt.wraparound = 1U;
#line 362
  if (c <= 1) {
    {
#line 364
    Usage(*v);
#line 365
    ErrorMsg(2, "No input file given.");
    }
  }
  {
#line 367
  help[0] = (char )'-';
#line 367
  help[1] = (char )'h';
#line 367
  help[2] = (char )'\000';
#line 368
  tmp = strcmp((char const   *)*(v + 1), (char const   *)(help));
  }
#line 368
  if (! tmp) {
    {
#line 370
    Usage(*v);
#line 371
    exit(0);
    }
  }
#line 374
  i = 1;
  {
#line 374
  while (1) {
    while_continue: /* CIL Label */ ;
#line 374
    if (! (i < c - 1)) {
#line 374
      goto while_break;
    }
#line 376
    if ((int )*(*(v + i)) == 45) {
      {
#line 376
      tmp___1 = strlen((char const   *)*(v + i));
      }
#line 376
      if (tmp___1 >= 2UL) {
        {
#line 381
        if ((int )*(*(v + i) + 1) == 99) {
#line 381
          goto case_99;
        }
#line 384
        if ((int )*(*(v + i) + 1) == 105) {
#line 384
          goto case_105;
        }
#line 387
        if ((int )*(*(v + i) + 1) == 110) {
#line 387
          goto case_110;
        }
#line 390
        if ((int )*(*(v + i) + 1) == 119) {
#line 390
          goto case_119;
        }
#line 393
        if ((int )*(*(v + i) + 1) == 44) {
#line 393
          goto case_44;
        }
#line 396
        goto switch_default;
        case_99: /* CIL Label */ 
        {
#line 382
        opt.cells = atoi((char const   *)(*(v + i) + 2));
        }
#line 383
        goto switch_break;
        case_105: /* CIL Label */ 
#line 385
        opt.showinput = 1U;
#line 386
        goto switch_break;
        case_110: /* CIL Label */ 
#line 388
        opt.null = 1U;
#line 389
        goto switch_break;
        case_119: /* CIL Label */ 
#line 391
        opt.wraparound = 0U;
#line 392
        goto switch_break;
        case_44: /* CIL Label */ 
        {
#line 394
        tmp___0 = atoi((char const   *)(*(v + i) + 2));
#line 394
        opt.inputmode = (unsigned short )tmp___0;
        }
#line 395
        goto switch_break;
        switch_default: /* CIL Label */ 
        {
#line 397
        Usage(*v);
#line 398
        printf((char const   */* __restrict  */)"Unable to handle option %s - ", *(v + i));
#line 400
        ErrorMsg(2, "Unknown option.");
        }
        switch_break: /* CIL Label */ ;
        }
      } else {
        {
#line 403
        Usage(*v);
#line 404
        printf((char const   */* __restrict  */)"Invalid argument %s - ", *(v + i));
#line 405
        ErrorMsg(2, "Invalid argument(s).");
        }
      }
    } else {
      {
#line 403
      Usage(*v);
#line 404
      printf((char const   */* __restrict  */)"Invalid argument %s - ", *(v + i));
#line 405
      ErrorMsg(2, "Invalid argument(s).");
      }
    }
#line 374
    i ++;
  }
  while_break: /* CIL Label */ ;
  }
#line 408
  opt.filename = *(v + i);
#line 409
  return;
}
}
#line 449 "/home/june/collector/temp/bf-20041219ubuntu5/bf.c"
int main(int argc , char **argv ) 
{ 
  Progr *program ;
  size_t psize ;

  {
  {
#line 454
  HandleOptions(argc, argv);
#line 455
  psize = ReadProgram(& program);
#line 456
  FindMatchingBrackets(program, psize);
#line 460
  ttyInit();
#line 464
  signal(2, & ForceExit);
#line 465
  signal(15, & ForceExit);
#line 466
  signal(3, & ForceExit);
#line 469
  Interprete(program, psize);
#line 472
  free((void *)program);
  }
#line 473
  return (0);
}
}

/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

#line 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h"
typedef unsigned long size_t;
#line 32 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __u_int;
#line 131 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off_t;
#line 132 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off64_t;
#line 44 "/usr/include/stdio.h"
struct _IO_FILE;
#line 44
struct _IO_FILE;
#line 44
struct _IO_FILE;
#line 48 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE;
#line 40 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
#line 144 "/usr/include/libio.h"
struct _IO_FILE;
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
#line 79 "/usr/include/stdio.h"
typedef __gnuc_va_list va_list;
#line 35 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_int u_int;
#line 51 "/usr/include/stdint.h"
typedef unsigned int uint32_t;
#line 30 "/usr/include/netinet/in.h"
typedef uint32_t in_addr_t;
#line 31 "/usr/include/netinet/in.h"
struct in_addr {
   in_addr_t s_addr ;
};
#line 56 "/home/june/collector/temp/aggregate-1.6/aggregate.c"
enum __anonenum_origin_60 {
    origin_SUPPLIED = 0,
    origin_REMOVED = 1,
    origin_ADDED = 2
} ;
#line 56 "/home/june/collector/temp/aggregate-1.6/aggregate.c"
struct filter_list {
   struct in_addr prefix ;
   int masklen ;
   enum __anonenum_origin_60 origin ;
   int line ;
   struct filter_list *next ;
};
/* compiler builtin: 
   void __builtin_va_start(__builtin_va_list  ) ;  */
/* compiler builtin: 
   void __builtin_va_end(__builtin_va_list  ) ;  */
#line 168 "/usr/include/stdio.h"
extern struct _IO_FILE *stdin ;
#line 170
extern struct _IO_FILE *stderr ;
#line 356
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
#line 362
extern int printf(char const   * __restrict  __format  , ...) ;
#line 371
extern int vfprintf(FILE * __restrict  __s , char const   * __restrict  __format ,
                    __gnuc_va_list __arg ) ;
#line 580
extern int putchar(int __c ) ;
#line 622
extern char *fgets(char * __restrict  __s , int __n , FILE * __restrict  __stream ) ;
#line 147 "/usr/include/stdlib.h"
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) atoi)(char const   *__nptr )  __attribute__((__pure__)) ;
#line 466
extern  __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) malloc)(size_t __size )  __attribute__((__malloc__)) ;
#line 543
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
#line 79 "/usr/include/ctype.h"
extern  __attribute__((__nothrow__)) unsigned short const   **( __attribute__((__leaf__)) __ctype_b_loc)(void)  __attribute__((__const__)) ;
#line 57 "/usr/include/getopt.h"
extern char *optarg ;
#line 150
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) getopt)(int ___argc ,
                                                                             char * const  *___argv ,
                                                                             char const   *__shortopts ) ;
#line 374 "/usr/include/netinet/in.h"
extern  __attribute__((__nothrow__)) uint32_t ( __attribute__((__leaf__)) ntohl)(uint32_t __netlong )  __attribute__((__const__)) ;
#line 377
extern  __attribute__((__nothrow__)) uint32_t ( __attribute__((__leaf__)) htonl)(uint32_t __hostlong )  __attribute__((__const__)) ;
#line 53 "/usr/include/arpa/inet.h"
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) inet_ntoa)(struct in_addr __in ) ;
#line 66 "/home/june/collector/temp/aggregate-1.6/aggregate.c"
int moanf(int fatal , char *fmt  , ...) 
{ 
  va_list ap ;
  int r ;
  int tmp ;
  int tmp___0 ;
  char *__cil_tmp7 ;
  char *__cil_tmp8 ;

  {
  {
#line 71
  __builtin_va_start(ap, fmt);
#line 72
  r = fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"aggregate: ");
#line 73
  tmp = vfprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)((char const   *)fmt),
                 ap);
#line 73
  r += tmp;
#line 74
  tmp___0 = fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"\n");
#line 74
  r += tmp___0;
#line 75
  __builtin_va_end(ap);
  }
#line 76
  if (fatal) {
    {
#line 76
    exit(1);
    }
  }
#line 77
  return (r);
}
}
#line 90 "/home/june/collector/temp/aggregate-1.6/aggregate.c"
int my_inet_aton(char const   *cp , struct in_addr *addr ) 
{ 
  struct in_addr val ;
  int n ;
  char c ;
  u_int parts[4] ;
  u_int *pp ;
  unsigned short const   **tmp ;
  unsigned short const   **tmp___0 ;
  u_int *tmp___1 ;
  unsigned short const   **tmp___2 ;
  void *__cil_tmp12 ;

  {
#line 96
  pp = parts;
#line 98
  airac_observe(cp, 0);
#line 98
  c = (char )*cp;
  {
#line 99
  while (1) {
    while_continue: /* CIL Label */ ;
    {
#line 106
    tmp = __ctype_b_loc();
    }
#line 106
    if (! ((int const   )*(*tmp + (int )c) & 2048)) {
#line 107
      return (0);
    }
#line 109
    val.s_addr = (in_addr_t )0;
    {
#line 111
    while (1) {
      while_continue___0: /* CIL Label */ ;
      {
#line 112
      tmp___0 = __ctype_b_loc();
      }
#line 112
      if ((int const   )*(*tmp___0 + (int )c) & 2048) {
#line 113
        val.s_addr = val.s_addr * 10U + (in_addr_t )((int )c - 48);
#line 114
        cp ++;
#line 114
        c = (char )*cp;
      } else {
#line 116
        goto while_break___0;
      }
    }
    while_break___2: /* CIL Label */ ;
    }
    while_break___0: ;
#line 119
    if ((int )c == 46) {
#line 126
      if ((unsigned long )pp >= (unsigned long )(parts + 3)) {
#line 127
        return (0);
      }
#line 128
      tmp___1 = pp;
#line 128
      pp ++;
#line 128
      *tmp___1 = val.s_addr;
#line 129
      cp ++;
#line 129
      c = (char )*cp;
    } else {
#line 131
      goto while_break;
    }
  }
  while_break___1: /* CIL Label */ ;
  }
  while_break: ;
#line 135
  if ((int )c != 0) {
#line 135
    if (! (((int )c & -128) == 0)) {
#line 136
      return (0);
    } else {
      {
#line 135
      tmp___2 = __ctype_b_loc();
      }
#line 135
      if (! ((int const   )*(*tmp___2 + (int )c) & 8192)) {
#line 136
        return (0);
      }
    }
  }
#line 139
  n = (int )((pp - parts) + 1L);
#line 141
  if (n == 0) {
#line 141
    goto case_0;
  }
#line 144
  if (n == 1) {
#line 144
    goto case_1;
  }
#line 147
  if (n == 2) {
#line 147
    goto case_2;
  }
#line 153
  if (n == 3) {
#line 153
    goto case_3;
  }
#line 159
  if (n == 4) {
#line 159
    goto case_4;
  }
#line 140
  goto switch_break;
  case_0: 
#line 142
  return (0);
  case_1: 
#line 145
  goto switch_break;
  case_2: 
#line 148
  if (val.s_addr > 16777215U) {
#line 149
    return (0);
  } else
#line 148
  if (parts[0] > 255U) {
#line 149
    return (0);
  }
#line 150
  val.s_addr |= parts[0] << 24;
#line 151
  goto switch_break;
  case_3: 
#line 154
  if (val.s_addr > 65535U) {
#line 155
    return (0);
  } else
#line 154
  if (parts[0] > 255U) {
#line 155
    return (0);
  } else
#line 154
  if (parts[1] > 255U) {
#line 155
    return (0);
  }
#line 156
  val.s_addr |= (parts[0] << 24) | (parts[1] << 16);
#line 157
  goto switch_break;
  case_4: 
#line 160
  if (val.s_addr > 255U) {
#line 162
    return (0);
  } else
#line 160
  if (parts[0] > 255U) {
#line 162
    return (0);
  } else
#line 160
  if (parts[1] > 255U) {
#line 162
    return (0);
  } else
#line 160
  if (parts[2] > 255U) {
#line 162
    return (0);
  }
#line 163
  val.s_addr |= ((parts[0] << 24) | (parts[1] << 16)) | (parts[2] << 8);
#line 164
  goto switch_break;
  switch_break: ;
#line 167
  if (addr) {
    {
#line 168
    addr->s_addr = htonl(val.s_addr);
    }
  }
#line 169
  return (1);
}
}
#line 173 "/home/june/collector/temp/aggregate-1.6/aggregate.c"
int main(int argc , char **argv ) 
{ 
  int verbose ;
  int quiet ;
  int truncate___0 ;
  int default_prefix_length ;
  int max_prefix_length ;
  int max_prefix_opt ;
  int ch ;
  int line ;
  int i ;
  int masklen ;
  int found ;
  struct filter_list *head ;
  struct filter_list *p ;
  struct filter_list *q ;
  struct filter_list *r ;
  struct filter_list *s ;
  char buf[64] ;
  struct in_addr prefix ;
  int tmp ;
  uint32_t tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  uint32_t tmp___3 ;
  void *tmp___4 ;
  uint32_t tmp___5 ;
  uint32_t tmp___6 ;
  uint32_t tmp___7 ;
  uint32_t tmp___8 ;
  uint32_t tmp___9 ;
  uint32_t tmp___10 ;
  uint32_t tmp___11 ;
  uint32_t tmp___12 ;
  char *tmp___13 ;
  uint32_t tmp___14 ;
  uint32_t tmp___15 ;
  void *tmp___16 ;
  uint32_t tmp___17 ;
  uint32_t tmp___18 ;
  uint32_t tmp___19 ;
  char *tmp___20 ;
  void *__cil_tmp43 ;
  char *__cil_tmp44 ;
  char *__cil_tmp45 ;
  char *__cil_tmp46 ;
  char *__cil_tmp47 ;
  char *__cil_tmp48 ;
  char *__cil_tmp49 ;
  char *__cil_tmp50 ;
  char *__cil_tmp51 ;
  char *__cil_tmp52 ;
  char *__cil_tmp53 ;
  char *__cil_tmp54 ;
  char *__cil_tmp55 ;
  char *__cil_tmp56 ;
  char *__cil_tmp57 ;
  char *__cil_tmp58 ;
  char *__cil_tmp59 ;
  char *__cil_tmp60 ;
  char *__cil_tmp61 ;
  char *__cil_tmp62 ;
  char *__cil_tmp63 ;
  char *__cil_tmp64 ;
  char *__cil_tmp65 ;
  char *__cil_tmp66 ;
  char *__cil_tmp67 ;

  {
#line 175
  verbose = 0;
#line 175
  quiet = 0;
#line 175
  truncate___0 = 0;
#line 176
  default_prefix_length = 0;
#line 177
  max_prefix_length = 32;
#line 178
  max_prefix_opt = 32;
#line 186
  head = (struct filter_list *)((void *)0);
  {
#line 190
  while (1) {
    while_continue: /* CIL Label */ ;
    {
#line 190
    ch = getopt(argc, (char * const  *)argv, "tqvm:o:p:");
    }
#line 190
    if (! (ch != -1)) {
#line 190
      goto while_break;
    }
#line 193
    if (ch == 109) {
#line 193
      goto case_109;
    }
#line 199
    if (ch == 111) {
#line 199
      goto case_111;
    }
#line 205
    if (ch == 112) {
#line 205
      goto case_112;
    }
#line 212
    if (ch == 113) {
#line 212
      goto case_113;
    }
#line 216
    if (ch == 116) {
#line 216
      goto case_116;
    }
#line 220
    if (ch == 118) {
#line 220
      goto case_118;
    }
#line 224
    if (ch == 63) {
#line 224
      goto case_63;
    }
#line 191
    goto switch_break;
    case_109: 
    {
#line 194
    max_prefix_length = atoi((char const   *)optarg);
    }
#line 195
    if (max_prefix_length < 1) {
      {
#line 196
      moanf(1, (char *)"can\'t set maximum prefix length to %d", max_prefix_length);
      }
    } else
#line 195
    if (max_prefix_length > 32) {
      {
#line 196
      moanf(1, (char *)"can\'t set maximum prefix length to %d", max_prefix_length);
      }
    }
#line 197
    goto switch_break;
    case_111: 
    {
#line 200
    max_prefix_opt = atoi((char const   *)optarg);
    }
#line 201
    if (max_prefix_opt < 1) {
      {
#line 202
      moanf(1, (char *)"can\'t set maximum prefix length for optimisation to %d",
            max_prefix_opt);
      }
    } else
#line 201
    if (max_prefix_opt > 32) {
      {
#line 202
      moanf(1, (char *)"can\'t set maximum prefix length for optimisation to %d",
            max_prefix_opt);
      }
    }
#line 203
    goto switch_break;
    case_112: 
    {
#line 206
    default_prefix_length = atoi((char const   *)optarg);
    }
#line 207
    if (default_prefix_length < 1) {
      {
#line 208
      moanf(1, (char *)"can\'t set default prefix length to %d", default_prefix_length);
      }
    } else
#line 207
    if (default_prefix_length > 32) {
      {
#line 208
      moanf(1, (char *)"can\'t set default prefix length to %d", default_prefix_length);
      }
    }
#line 210
    goto switch_break;
    case_113: 
#line 213
    quiet = 1;
#line 214
    goto switch_break;
    case_116: 
#line 217
    truncate___0 = 1;
#line 218
    goto switch_break;
    case_118: 
#line 221
    verbose = 1;
#line 222
    goto switch_break;
    case_63: 
    {
#line 225
    moanf(1, (char *)"Syntax: aggregate [-m max-length] [-o max-opt-length] [-p default-length] [-q] [-t] [-v]");
    }
#line 226
    goto switch_break;
    switch_break: ;
  }
  while_break___11: /* CIL Label */ ;
  }
  while_break: ;
#line 229
  if (default_prefix_length > max_prefix_length) {
#line 229
    if (! quiet) {
      {
#line 230
      moanf(0, (char *)"default prefix length (%d) is greater than maximum prefix length (%d)",
            default_prefix_length, max_prefix_length);
      }
    }
  }
#line 233
  if (! quiet) {
    {
#line 234
    moanf(0, (char *)"maximum prefix length permitted will be %d", max_prefix_length);
    }
  }
#line 236
  if (max_prefix_opt > max_prefix_length) {
#line 236
    if (! quiet) {
      {
#line 237
      moanf(0, (char *)"no optimisation for prefixes longer than %d bits", max_prefix_length);
      }
    }
  }
#line 239
  if (default_prefix_length) {
#line 239
    if (! quiet) {
      {
#line 240
      moanf(0, (char *)"prefix length of %d bits will be used where none specified",
            default_prefix_length);
      }
    }
  }
#line 245
  line = 0;
  {
#line 247
  while (1) {
    while_continue___1: /* CIL Label */ ;
    while_continue___0: 
    {
#line 247
    tmp___13 = fgets((char */* __restrict  */)(buf), 63, (FILE */* __restrict  */)stdin);
    }
#line 247
    if (! tmp___13) {
#line 247
      goto while_break___0;
    }
#line 249
    line ++;
#line 253
    if (default_prefix_length) {
#line 255
      i = 0;
      {
#line 256
      while (1) {
        while_continue___2: /* CIL Label */ ;

#line 256
        if (! ((int )buf[i] == 46)) {
#line 256
          if ((int )buf[i] >= 48) {
#line 256
            if ((int )buf[i] <= 57) {
#line 256
              if (! (i < 63)) {
#line 256
                goto while_break___1;
              }
            } else {
#line 256
              goto while_break___1;
            }
          } else {
#line 256
            goto while_break___1;
          }
        }
#line 257
        i ++;
      }
      while_break___13: /* CIL Label */ ;
      }
      while_break___1: ;
#line 258
      if (i == 63) {
#line 260
        if (! quiet) {
          {
#line 261
          moanf(0, (char *)"[line %d] line too long; ignoring line", line);
          }
        }
#line 262
        goto while_continue___0;
      }
#line 264
      buf[i] = (char)0;
#line 265
      masklen = default_prefix_length;
    } else {
#line 267
      i = 0;
      {
#line 268
      while (1) {
        while_continue___3: /* CIL Label */ ;

#line 268
        if ((int )buf[i] != 47) {
#line 268
          if (! (i < 63)) {
#line 268
            goto while_break___2;
          }
        } else {
#line 268
          goto while_break___2;
        }
#line 268
        i ++;
      }
      while_break___14: /* CIL Label */ ;
      }
      while_break___2: ;
#line 269
      if (i == 63) {
#line 271
        if (! quiet) {
          {
#line 272
          moanf(0, (char *)"[line %d] line too long; ignoring line", line);
          }
        }
#line 273
        goto while_continue___0;
      }
      {
#line 275
      buf[i] = (char)0;
#line 277
      masklen = atoi((char const   *)((buf + i) + 1));
      }
#line 278
      if (masklen < 1) {
#line 278
        goto _L;
      } else
#line 278
      if (masklen > max_prefix_length) {
        _L: 
#line 280
        if (! quiet) {
          {
#line 281
          moanf(0, (char *)"[line %d] mask length %d out of range; ignoring line",
                line, masklen);
          }
        }
#line 283
        goto while_continue___0;
      }
    }
    {
#line 287
    tmp = my_inet_aton((char const   *)(buf), & prefix);
    }
#line 287
    if (tmp == 0) {
#line 289
      if (! quiet) {
        {
#line 290
        moanf(0, (char *)"[line %d] can\'t parse prefix \'%s\'; ignoring line", line,
              buf);
        }
      }
#line 292
      goto while_continue___0;
    }
    {
#line 295
    tmp___3 = ntohl(prefix.s_addr);
    }
#line 295
    if ((tmp___3 & (4294967295U >> masklen)) != 0U) {
#line 295
      if (masklen < 32) {
#line 297
        if (truncate___0) {
          {
#line 298
          tmp___0 = ntohl(prefix.s_addr);
#line 298
          prefix.s_addr = htonl(tmp___0 & (4294967295U << (32 - masklen)));
          }
#line 300
          if (! quiet) {
            {
#line 301
            tmp___1 = inet_ntoa(prefix);
#line 301
            moanf(0, (char *)"[line %d] prefix %s/%d truncated to %s/%d", line, buf,
                  masklen, tmp___1, masklen);
            }
          }
        } else {
#line 304
          if (! quiet) {
            {
#line 305
            tmp___2 = inet_ntoa(prefix);
#line 305
            moanf(0, (char *)"[line %d] %s/%d inconsistent; ignoring line", line,
                  tmp___2, masklen);
            }
          }
#line 307
          goto while_continue___0;
        }
      }
    }
    {
#line 313
    tmp___4 = malloc(sizeof(struct filter_list ));
#line 313
    p = (struct filter_list *)tmp___4;
    }
#line 313
    if ((unsigned long )p == (unsigned long )((void *)0)) {
      {
#line 314
      moanf(1, (char *)"[line %d] malloc() failure", line);
      }
    }
#line 316
    p->prefix.s_addr = prefix.s_addr;
#line 317
    p->masklen = masklen;
#line 318
    p->origin = (enum __anonenum_origin_60 )0;
#line 319
    p->line = line;
#line 321
    if (head) {
#line 323
      q = head;
#line 324
      r = (struct filter_list *)((void *)0);
      {
#line 326
      while (1) {
        while_continue___4: /* CIL Label */ ;
        {
#line 326
        tmp___5 = ntohl(q->prefix.s_addr);
#line 326
        tmp___6 = ntohl(p->prefix.s_addr);
        }
#line 326
        if (tmp___5 < tmp___6) {
#line 326
          goto _L___0;
        } else {
          {
#line 326
          tmp___7 = ntohl(q->prefix.s_addr);
#line 326
          tmp___8 = ntohl(p->prefix.s_addr);
          }
#line 326
          if (tmp___7 == tmp___8) {
#line 326
            if (q->masklen < p->masklen) {
              _L___0: 
#line 326
              if (! q->next) {
#line 326
                goto while_break___3;
              }
            } else {
#line 326
              goto while_break___3;
            }
          } else {
#line 326
            goto while_break___3;
          }
        }
#line 328
        r = q;
#line 329
        q = q->next;
      }
      while_break___15: /* CIL Label */ ;
      }
      while_break___3: 
      {
#line 332
      tmp___9 = ntohl(q->prefix.s_addr);
#line 332
      tmp___10 = ntohl(p->prefix.s_addr);
      }
#line 332
      if (tmp___9 < tmp___10) {
#line 334
        p->next = q->next;
#line 335
        q->next = p;
      } else {
        {
#line 332
        tmp___11 = ntohl(q->prefix.s_addr);
#line 332
        tmp___12 = ntohl(p->prefix.s_addr);
        }
#line 332
        if (tmp___11 == tmp___12) {
#line 332
          if (q->masklen < p->masklen) {
#line 334
            p->next = q->next;
#line 335
            q->next = p;
          } else {
#line 332
            goto _L___1;
          }
        } else
        _L___1: 
#line 337
        if (r) {
#line 339
          p->next = r->next;
#line 340
          r->next = p;
        } else {
#line 342
          p->next = q;
#line 343
          head = p;
        }
      }
    } else {
#line 348
      head = p;
#line 349
      head->next = (struct filter_list *)((void *)0);
    }
  }
  while_break___12: /* CIL Label */ ;
  }
  while_break___0: ;
#line 354
  if (! head) {
#line 355
    if (! quiet) {
      {
#line 356
      moanf(0, (char *)"no prefixes supplied");
      }
    }
    {
#line 357
    exit(0);
    }
  }
#line 364
  p = head->next;
  {
#line 365
  while (1) {
    while_continue___5: /* CIL Label */ ;

#line 365
    if (! p) {
#line 365
      goto while_break___4;
    }
#line 367
    q = head;
    {
#line 368
    while (1) {
      while_continue___6: /* CIL Label */ ;

#line 368
      if (q) {
#line 368
        if (! ((unsigned long )q != (unsigned long )p)) {
#line 368
          goto while_break___5;
        }
      } else {
#line 368
        goto while_break___5;
      }
#line 370
      if (p->masklen <= max_prefix_opt) {
        {
#line 370
        tmp___14 = ntohl(p->prefix.s_addr);
#line 370
        tmp___15 = ntohl(q->prefix.s_addr);
        }
#line 370
        if (tmp___14 / (uint32_t )(1 << (32 - q->masklen)) == tmp___15 / (uint32_t )(1 << (32 - q->masklen))) {
#line 374
          p->origin = (enum __anonenum_origin_60 )1;
#line 375
          goto while_break___5;
        }
      }
#line 377
      q = q->next;
    }
    while_break___17: /* CIL Label */ ;
    }
    while_break___5: 
#line 379
    p = p->next;
  }
  while_break___16: /* CIL Label */ ;
  }
  while_break___4: ;
  {
#line 384
  while (1) {
    while_continue___7: /* CIL Label */ ;
#line 386
    found = 0;
#line 387
    p = head;
#line 388
    r = (struct filter_list *)((void *)0);
    {
#line 389
    while (1) {
      while_continue___8: /* CIL Label */ ;

#line 389
      if (! p) {
#line 389
        goto while_break___7;
      }
      {
#line 391
      while (1) {
        while_continue___9: /* CIL Label */ ;

#line 391
        if (p->next) {
#line 391
          if (! ((unsigned int )p->origin == 1U)) {
#line 391
            goto while_break___8;
          }
        } else {
#line 391
          goto while_break___8;
        }
#line 392
        p = p->next;
      }
      while_break___20: /* CIL Label */ ;
      }
      while_break___8: ;
#line 393
      if (! p->next) {
#line 394
        goto while_break___7;
      }
#line 396
      q = p->next;
      {
#line 397
      while (1) {
        while_continue___10: /* CIL Label */ ;

#line 397
        if (q->next) {
#line 397
          if (! ((unsigned int )q->origin == 1U)) {
#line 397
            goto while_break___9;
          }
        } else {
#line 397
          goto while_break___9;
        }
#line 398
        q = q->next;
      }
      while_break___21: /* CIL Label */ ;
      }
      while_break___9: ;
#line 399
      if ((unsigned int )q->origin == 1U) {
#line 400
        goto while_break___7;
      }
#line 402
      if (p->masklen == q->masklen) {
#line 402
        if (p->masklen <= max_prefix_opt) {
          {
#line 402
          tmp___17 = ntohl(p->prefix.s_addr);
          }
#line 402
          if (tmp___17 % (unsigned int )(2 << (32 - p->masklen)) == 0U) {
            {
#line 402
            tmp___18 = ntohl(q->prefix.s_addr);
#line 402
            tmp___19 = ntohl(p->prefix.s_addr);
            }
#line 402
            if (tmp___18 - tmp___19 == (uint32_t )(1 << (32 - p->masklen))) {
              {
#line 408
              tmp___16 = malloc(sizeof(struct filter_list ));
#line 408
              s = (struct filter_list *)tmp___16;
              }
#line 408
              if ((unsigned long )s == (unsigned long )((void *)0)) {
                {
#line 409
                moanf(1, (char *)"malloc() failure during adjacency collapse");
                }
              }
#line 410
              s->prefix = p->prefix;
#line 411
              s->masklen = p->masklen - 1;
#line 412
              s->origin = (enum __anonenum_origin_60 )2;
#line 413
              s->next = p;
#line 414
              s->line = 0;
#line 416
              p->origin = (enum __anonenum_origin_60 )1;
#line 417
              q->origin = (enum __anonenum_origin_60 )1;
#line 419
              if (r) {
#line 420
                r->next = s;
              } else {
#line 422
                head = s;
              }
#line 424
              found = 1;
#line 425
              goto while_break___7;
            }
          }
        }
      }
#line 427
      r = p;
#line 428
      p = p->next;
    }
    while_break___19: /* CIL Label */ ;
    }
    while_break___7: ;
#line 384
    if (! found) {
#line 384
      goto while_break___6;
    }
  }
  while_break___18: /* CIL Label */ ;
  }
  while_break___6: 
#line 434
  p = head;
  {
#line 435
  while (1) {
    while_continue___11: /* CIL Label */ ;

#line 435
    if (! p) {
#line 435
      goto while_break___10;
    }
#line 437
    if (verbose) {
      {
#line 439
      printf((char const   */* __restrict  */)"[%5d] ", p->line);
      }
#line 442
      if ((unsigned int )p->origin == 0U) {
#line 442
        goto case_0;
      }
#line 446
      if ((unsigned int )p->origin == 1U) {
#line 446
        goto case_1;
      }
#line 450
      if ((unsigned int )p->origin == 2U) {
#line 450
        goto case_2;
      }
#line 440
      goto switch_break___0;
      case_0: 
      {
#line 443
      putchar(' ');
      }
#line 444
      goto switch_break___0;
      case_1: 
      {
#line 447
      putchar('-');
      }
#line 448
      goto switch_break___0;
      case_2: 
      {
#line 451
      putchar('+');
      }
#line 452
      goto switch_break___0;
      switch_break___0: 
      {
#line 454
      putchar(' ');
      }
    }
#line 456
    if (verbose) {
      {
#line 457
      tmp___20 = inet_ntoa(p->prefix);
#line 457
      printf((char const   */* __restrict  */)"%s/%d\n", tmp___20, p->masklen);
      }
    } else
#line 456
    if ((unsigned int )p->origin != 1U) {
      {
#line 457
      tmp___20 = inet_ntoa(p->prefix);
#line 457
      printf((char const   */* __restrict  */)"%s/%d\n", tmp___20, p->masklen);
      }
    }
#line 458
    p = p->next;
  }
  while_break___22: /* CIL Label */ ;
  }
  while_break___10: ;
#line 461
  return (0);
}
}

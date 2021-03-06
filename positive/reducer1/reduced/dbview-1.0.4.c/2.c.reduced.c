/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

#line 48 "/usr/include/stdint.h"
typedef unsigned char uint8_t;
#line 49 "/usr/include/stdint.h"
typedef unsigned short uint16_t;
#line 51 "/usr/include/stdint.h"
typedef unsigned int uint32_t;
#line 55 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/db_dump.h"
struct dbase_head {
   uint8_t version ;
   uint8_t l_update[3] ;
   uint32_t count ;
   uint16_t header ;
   uint16_t lrecl ;
   uint8_t reserv[20] ;
};
#line 55 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/db_dump.h"
typedef struct dbase_head DBASE_HEAD;
#line 75 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/db_dump.h"
struct dbase_fld {
   uint8_t name[11] ;
   uint8_t type ;
   uint8_t *data_ptr ;
   uint8_t length ;
   uint8_t dec_point ;
   uint8_t fill[14] ;
};
#line 75 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/db_dump.h"
typedef struct dbase_fld DBASE_FIELD;
#line 85 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/db_dump.h"
struct fld_list {
   struct fld_list *next ;
   DBASE_FIELD *fld ;
   uint8_t *data ;
};
#line 85 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/db_dump.h"
typedef struct fld_list FLD_LIST;
#line 131 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off_t;
#line 132 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off64_t;
#line 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h"
typedef unsigned long size_t;
#line 44 "/usr/include/stdio.h"
struct _IO_FILE;
#line 44
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
#line 104 "/usr/include/getopt.h"
struct option {
   char const   *name ;
   int has_arg ;
   int *flag ;
   int val ;
};
#line 91 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/db_dump.h"
int db3_process(char *dbfn , int flags , char delim ) ;
#line 101
int db3_read_dic(int flags ) ;
#line 109
void db3_print_recs(int cnt , int flags , char delim ) ;
#line 117
void db3_print(int flags , char delim , char deleted ) ;
#line 125
void stack_field(DBASE_FIELD *fld ) ;
#line 237 "/usr/include/stdio.h"
extern int fclose(FILE *__stream ) ;
#line 272
extern FILE *fopen(char const   * __restrict  __filename , char const   * __restrict  __modes ) ;
#line 362
extern int printf(char const   * __restrict  __format  , ...) ;
#line 709
extern size_t fread(void * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream ) ;
#line 749
extern int fseek(FILE *__stream , long __off , int __whence ) ;
#line 38 "/usr/include/malloc.h"
extern  __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) malloc)(size_t __size )  __attribute__((__malloc__)) ;
#line 41
extern  __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) calloc)(size_t __nmemb ,
                                                                               size_t __size )  __attribute__((__malloc__)) ;
#line 79 "/usr/include/ctype.h"
extern  __attribute__((__nothrow__)) unsigned short const   **( __attribute__((__leaf__)) __ctype_b_loc)(void)  __attribute__((__const__)) ;
#line 124
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) tolower)(int __c ) ;
#line 46 "/usr/include/string.h"
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2), __leaf__)) memcpy)(void * __restrict  __dest ,
                                                                                                 void const   * __restrict  __src ,
                                                                                                 size_t __n ) ;
#line 129
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2), __leaf__)) strcpy)(char * __restrict  __dest ,
                                                                                                 char const   * __restrict  __src ) ;
#line 399
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
#line 459
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1), __leaf__)) bzero)(void *__s ,
                                                                                             size_t __n ) ;
#line 77 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/db_dump.c"
DBASE_HEAD dbhead  =    {(uint8_t )0, {(unsigned char)0, (unsigned char)0, (unsigned char)0}, 0U, (unsigned short)0,
    (unsigned short)0, {(unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0,
                        (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0,
                        (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0,
                        (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0,
                        (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0}};
#line 78 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/db_dump.c"
FLD_LIST *db_fld_root  =    (FLD_LIST *)0;
#line 79 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/db_dump.c"
char *Buffer  ;
#line 80 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/db_dump.c"
char buf_work[255]  ;
#line 81 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/db_dump.c"
FILE *dbfile  ;
#line 116 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/db_dump.c"
int db3_process(char *dbfn , int flags , char delim ) 
{ 
  int tmp ;
  char *__cil_tmp5 ;
  char *__cil_tmp6 ;

  {
  {
#line 122
  dbfile = fopen((char const   */* __restrict  */)((char const   *)dbfn), (char const   */* __restrict  */)"r");
  }
#line 123
  if ((unsigned long )dbfile == (unsigned long )((void *)0)) {
    {
#line 124
    printf((char const   */* __restrict  */)"Unable to open file `%s\'\n", dbfn);
    }
#line 125
    return (0);
  }
  {
#line 127
  tmp = db3_read_dic(flags);
  }
#line 127
  if (tmp) {
#line 128
    if (! (flags & 16)) {
      {
#line 129
      db3_print_recs((int )dbhead.count, flags, delim);
      }
    }
  }
  {
#line 131
  fclose(dbfile);
  }
#line 132
  return (1);
}
}
#line 146 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/db_dump.c"
static char rvar[257]  ;
#line 142 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/db_dump.c"
char *db3_rm_ld_spc(char *var ) 
{ 
  char *c ;
  unsigned short const   **tmp ;

  {
  {
#line 151
  bzero((void *)(rvar), sizeof(rvar));
#line 152
  c = var;
  }
  {
#line 152
  while (1) {
    while_continue: /* CIL Label */ ;
    {
#line 152
    tmp = __ctype_b_loc();
    }
#line 152
    if (! ((int const   )*(*tmp + (int )*c) & 8192)) {
#line 152
      goto while_break;
    }
#line 152
    c ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: 
  {
#line 153
  strcpy((char */* __restrict  */)(rvar), (char const   */* __restrict  */)((char const   *)c));
  }
#line 154
  return (rvar);
}
}
#line 163 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/db_dump.c"
char *db3_rm_tr_spc(char *var ) 
{ 
  char *c ;
  size_t tmp ;
  unsigned short const   **tmp___0 ;

  {
  {
#line 167
  c = var;
#line 169
  tmp = strlen((char const   *)var);
#line 169
  c += tmp - 1UL;
  }
  {
#line 169
  while (1) {
    while_continue: /* CIL Label */ ;
    {
#line 169
    tmp___0 = __ctype_b_loc();
    }
#line 169
    if (! ((int const   )*(*tmp___0 + (int )*c) & 8192)) {
#line 169
      goto while_break;
    }
#line 169
    c --;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: 
#line 171
  c ++;
#line 171
  *c = (char )'\000';
#line 172
  return (var);
}
}
#line 184 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/db_dump.c"
void db3_cvt_fld(DBASE_FIELD *fld ) 
{ 
  uint8_t *c ;
  uint8_t first ;
  int tmp ;
  unsigned short const   **tmp___0 ;

  {
#line 191
  first = (uint8_t )1;
#line 192
  c = fld->name;
  {
#line 192
  while (1) {
    while_continue: /* CIL Label */ ;

#line 192
    if (! *c) {
#line 192
      goto while_break;
    }
#line 193
    if (! first) {
      {
#line 194
      tmp___0 = __ctype_b_loc();
      }
#line 194
      if ((int const   )*(*tmp___0 + (int )*c) & 256) {
        {
#line 195
        tmp = tolower((int )*c);
#line 195
        *c = (uint8_t )tmp;
        }
      } else
#line 197
      if ((int )*c == 95) {
#line 198
        *c = (uint8_t )' ';
#line 198
        first = (uint8_t )1;
      }
#line 199
      first = (uint8_t )0;
    } else {
#line 202
      first = (uint8_t )0;
    }
#line 192
    c ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
#line 203
  return;
}
}
#line 206 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/db_dump.c"
void db3_read_head(DBASE_HEAD *dbh ) 
{ 


  {
  {
#line 210
  fread((void */* __restrict  */)((void *)(& dbh->version)), (size_t )1, (size_t )1,
        (FILE */* __restrict  */)dbfile);
#line 211
  fread((void */* __restrict  */)((void *)(dbh->l_update)), (size_t )1, (size_t )3,
        (FILE */* __restrict  */)dbfile);
#line 212
  fread((void */* __restrict  */)((void *)(& dbh->count)), (size_t )4, (size_t )1,
        (FILE */* __restrict  */)dbfile);
#line 213
  fread((void */* __restrict  */)((void *)(& dbh->header)), (size_t )2, (size_t )1,
        (FILE */* __restrict  */)dbfile);
#line 214
  fread((void */* __restrict  */)((void *)(& dbh->lrecl)), (size_t )2, (size_t )1,
        (FILE */* __restrict  */)dbfile);
#line 215
  fread((void */* __restrict  */)((void *)(dbh->reserv)), (size_t )1, (size_t )20,
        (FILE */* __restrict  */)dbfile);
  }
#line 216
  return;
}
}
#line 218 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/db_dump.c"
void db3_read_field(DBASE_FIELD *fld ) 
{ 


  {
  {
#line 222
  fread((void */* __restrict  */)((void *)(fld->name)), (size_t )1, (size_t )11, (FILE */* __restrict  */)dbfile);
#line 223
  fread((void */* __restrict  */)((void *)(& fld->type)), (size_t )1, (size_t )1,
        (FILE */* __restrict  */)dbfile);
#line 225
  fread((void */* __restrict  */)((void *)(& fld->data_ptr)), (size_t )4, (size_t )1,
        (FILE */* __restrict  */)dbfile);
#line 226
  fread((void */* __restrict  */)((void *)(& fld->length)), (size_t )1, (size_t )1,
        (FILE */* __restrict  */)dbfile);
#line 227
  fread((void */* __restrict  */)((void *)(& fld->dec_point)), (size_t )1, (size_t )1,
        (FILE */* __restrict  */)dbfile);
#line 228
  fread((void */* __restrict  */)((void *)(fld->fill)), (size_t )1, (size_t )14, (FILE */* __restrict  */)dbfile);
  }
#line 229
  return;
}
}
#line 238 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/db_dump.c"
int db3_read_dic(int flags ) 
{ 
  int fields ;
  DBASE_FIELD *fld ;
  void *tmp ;
  void *tmp___0 ;
  int tmp___1 ;
  void *__cil_tmp7 ;
  void *__cil_tmp8 ;
  char *__cil_tmp9 ;
  char *__cil_tmp10 ;
  char *__cil_tmp11 ;
  char *__cil_tmp12 ;
  char *__cil_tmp13 ;
  char *__cil_tmp14 ;
  char *__cil_tmp15 ;
  char *__cil_tmp16 ;
  char *__cil_tmp17 ;
  char *__cil_tmp18 ;
  char *__cil_tmp19 ;

  {
#line 245
  if ((unsigned long )dbfile == (unsigned long )((void *)0)) {
    {
#line 246
    printf((char const   */* __restrict  */)"open failed");
    }
#line 247
    return (0);
  }
  {
#line 249
  db3_read_head(& dbhead);
  }
#line 250
  if (! ((int )dbhead.version == 3)) {
#line 250
    if (! ((int )dbhead.version == 131)) {
      {
#line 251
      printf((char const   */* __restrict  */)"Version %d not supported\n", (int )dbhead.version);
      }
#line 252
      if ((int )dbhead.version == 139) {
        {
#line 253
        printf((char const   */* __restrict  */)"dBase IV - partially known...\n");
        }
      }
#line 255
      return (0);
    }
  }
#line 258
  if (flags & 2) {
    {
#line 259
    printf((char const   */* __restrict  */)"File version  : %d\n", (int )dbhead.version);
#line 260
    printf((char const   */* __restrict  */)"Last update   : %02d/%02d/%2d\n", (int )dbhead.l_update[1],
           (int )dbhead.l_update[2], (int )dbhead.l_update[0] + 1900);
#line 261
    printf((char const   */* __restrict  */)"Number of recs: %d\n", dbhead.count);
#line 262
    printf((char const   */* __restrict  */)"Header length : %d\n", (int )dbhead.header);
#line 263
    printf((char const   */* __restrict  */)"Record length : %d\n", (int )dbhead.lrecl);
    }
  }
  {
#line 266
  tmp = malloc((size_t )dbhead.lrecl);
#line 266
  Buffer = (char *)tmp;
#line 268
  fields = ((int )dbhead.header - 1) / 32 - 1;
  }
#line 270
  if (flags & 4) {
    {
#line 271
    printf((char const   */* __restrict  */)"Field Name\tType\tLength\tDecimal Pos\n");
    }
  }
  {
#line 273
  while (1) {
    while_continue: /* CIL Label */ ;
#line 273
    tmp___1 = fields;
#line 273
    fields --;
#line 273
    if (! tmp___1) {
#line 273
      goto while_break;
    }
    {
#line 274
    tmp___0 = malloc(sizeof(DBASE_FIELD ));
#line 274
    fld = (DBASE_FIELD *)tmp___0;
    }
#line 275
    if (! fld) {
      {
#line 276
      printf((char const   */* __restrict  */)"Not enough memory\n");
      }
#line 277
      return (0);
    }
    {
#line 279
    db3_read_field(fld);
    }
#line 280
    if (! (flags & 8)) {
      {
#line 281
      db3_cvt_fld(fld);
      }
    }
#line 282
    if (flags & 4) {
      {
#line 283
      printf((char const   */* __restrict  */)"%-10s\t  %c\t  %3d\t  %3d\n", fld->name,
             (int )fld->type, (int )fld->length, (int )fld->dec_point);
      }
    }
    {
#line 286
    stack_field(fld);
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: 
  {
#line 289
  fseek(dbfile, (long )dbhead.header, 0);
  }
#line 291
  return (1);
}
}
#line 299 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/db_dump.c"
void db3_print_recs(int cnt , int flags , char delim ) 
{ 
  int bytes ;
  size_t tmp ;

  {
  {
#line 307
  while (1) {
    while_continue: /* CIL Label */ ;

#line 307
    if (! cnt) {
#line 307
      goto while_break;
    }
    {
#line 308
    tmp = fread((void */* __restrict  */)((void *)Buffer), (size_t )1, (size_t )dbhead.lrecl,
                (FILE */* __restrict  */)dbfile);
#line 308
    bytes = (int )tmp;
    }
#line 309
    if (bytes != (int )dbhead.lrecl) {
#line 310
      goto while_break;
    }
#line 312
    if (flags & 64) {
      {
#line 313
      db3_print(flags, delim, *(Buffer + 0));
#line 314
      cnt --;
      }
    } else
#line 312
    if ((int )*(Buffer + 0) == 32) {
      {
#line 313
      db3_print(flags, delim, *(Buffer + 0));
#line 314
      cnt --;
      }
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
#line 317
  return;
}
}
#line 326 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/db_dump.c"
void db3_print(int flags , char delim , char deleted ) 
{ 
  FLD_LIST *temp ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *__cil_tmp9 ;
  char *__cil_tmp10 ;
  char *__cil_tmp11 ;
  char *__cil_tmp12 ;
  char *__cil_tmp13 ;
  char *__cil_tmp14 ;

  {
#line 334
  temp = db_fld_root;
#line 335
  if (flags & 64) {
#line 335
    if (flags & 1) {
      {
#line 336
      printf((char const   */* __restrict  */)"%c%c", (int )deleted, (int )delim);
      }
    }
  }
  {
#line 338
  while (1) {
    while_continue: /* CIL Label */ ;

#line 338
    if (! temp) {
#line 338
      goto while_break;
    }
    {
#line 339
    memcpy((void */* __restrict  */)((void *)(buf_work)), (void const   */* __restrict  */)((void const   *)temp->data),
           (size_t )(temp->fld)->length);
#line 340
    buf_work[(temp->fld)->length] = (char )'\000';
    }
#line 341
    if (flags & 1) {
#line 342
      if (flags & 32) {
        {
#line 343
        tmp = db3_rm_ld_spc(buf_work);
#line 343
        tmp___0 = db3_rm_tr_spc(tmp);
#line 343
        printf((char const   */* __restrict  */)"%s%c", tmp___0, (int )delim);
        }
      } else {
        {
#line 345
        printf((char const   */* __restrict  */)"%s%c", buf_work, (int )delim);
        }
      }
    } else {
      {
#line 347
      tmp___1 = db3_rm_ld_spc(buf_work);
#line 347
      tmp___2 = db3_rm_tr_spc(tmp___1);
#line 347
      printf((char const   */* __restrict  */)"%-11s: %s\n", (temp->fld)->name, tmp___2);
      }
    }
#line 348
    temp = temp->next;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
#line 351
  if (flags & 64) {
#line 351
    if ((flags & 1) == 0) {
#line 351
      if ((int )deleted != 32) {
        {
#line 352
        printf((char const   */* __restrict  */)"*Deleted*  : %c\n", (int )deleted);
        }
      }
    }
  }
  {
#line 354
  printf((char const   */* __restrict  */)"\n");
  }
#line 355
  return;
}
}
#line 363 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/db_dump.c"
void stack_field(DBASE_FIELD *fld ) 
{ 
  FLD_LIST *list ;
  FLD_LIST *temp ;
  void *tmp ;
  char *__cil_tmp5 ;

  {
  {
#line 369
  tmp = calloc((size_t )1, sizeof(FLD_LIST ));
#line 369
  list = (FLD_LIST *)tmp;
  }
#line 370
  if (! list) {
    {
#line 371
    printf((char const   */* __restrict  */)"Not enough memory\n");
    }
#line 372
    return;
  }
#line 374
  list->fld = fld;
#line 375
  if (! db_fld_root) {
#line 376
    list->data = (uint8_t *)Buffer + 1;
#line 377
    db_fld_root = list;
#line 378
    return;
  }
#line 380
  temp = db_fld_root;
  {
#line 381
  while (1) {
    while_continue: /* CIL Label */ ;

#line 381
    if (! temp->next) {
#line 381
      goto while_break;
    }
#line 382
    temp = temp->next;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: 
#line 383
  temp->next = list;
#line 384
  list->data = temp->data + (int )(temp->fld)->length;
#line 385
  return;
}
}
#line 23 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/version.c"
char progname[7]  = {      (char )'d',      (char )'b',      (char )'v',      (char )'i', 
        (char )'e',      (char )'w',      (char )'\000'};
#line 24 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/version.c"
char longname[21]  = 
#line 24
  {      (char )'V',      (char )'i',      (char )'e',      (char )'w', 
        (char )' ',      (char )'d',      (char )'B',      (char )'a', 
        (char )'s',      (char )'e',      (char )' ',      (char )'I', 
        (char )'I',      (char )'I',      (char )' ',      (char )'f', 
        (char )'i',      (char )'l',      (char )'e',      (char )'s', 
        (char )'\000'};
#line 26 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/version.c"
char version[6]  = {      (char )'1',      (char )'.',      (char )'0',      (char )'.', 
        (char )'4',      (char )'\000'};
#line 543 "/usr/include/stdlib.h"
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
#line 57 "/usr/include/getopt.h"
extern char *optarg ;
#line 71
extern int optind ;
#line 173
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) getopt_long)(int ___argc ,
                                                                                  char * const  *___argv ,
                                                                                  char const   *__shortopts ,
                                                                                  struct option  const  *__longopts ,
                                                                                  int *__longind ) ;
#line 38 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/dbview.c"
void help_short(void) 
{ 
  char *__cil_tmp1 ;
  char *__cil_tmp2 ;
  char *__cil_tmp3 ;

  {
  {
#line 40
  printf((char const   */* __restrict  */)"%s %s - %s, (c) 1996 by Martin Schulze\n",
         progname, version, longname);
#line 41
  printf((char const   */* __restrict  */)"\n");
#line 42
  printf((char const   */* __restrict  */)"%s [-b [-t]] [-d delim] [-e] [-h] [-i] [-D] [-o] [-v] dbfile\n",
         progname);
  }
#line 43
  return;
}
}
#line 45 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/dbview.c"
void help_long(void) 
{ 
  char *__cil_tmp1 ;
  char *__cil_tmp2 ;
  char *__cil_tmp3 ;
  char *__cil_tmp4 ;
  char *__cil_tmp5 ;
  char *__cil_tmp6 ;
  char *__cil_tmp7 ;
  char *__cil_tmp8 ;
  char *__cil_tmp9 ;
  char *__cil_tmp10 ;
  char *__cil_tmp11 ;
  char *__cil_tmp12 ;

  {
  {
#line 47
  printf((char const   */* __restrict  */)"%s %s - %s, (c) 1996 by Martin Schulze\n",
         progname, version, longname);
#line 48
  printf((char const   */* __restrict  */)"\n");
#line 49
  printf((char const   */* __restrict  */)"  --browse, -b           browse the database\n");
#line 50
  printf((char const   */* __restrict  */)"  --delimiter, -d        set the delimiter for browse output\n");
#line 51
  printf((char const   */* __restrict  */)"  --description, -e      display field description\n");
#line 52
  printf((char const   */* __restrict  */)"  --help, -h             display help\n");
#line 53
  printf((char const   */* __restrict  */)"  --info, -i             display db information\n");
#line 54
  printf((char const   */* __restrict  */)"  --deleted, -D          display deleted records\n");
#line 55
  printf((char const   */* __restrict  */)"  --omit, -o             omit db records\n");
#line 56
  printf((char const   */* __restrict  */)"  --reserve, -r          reserve fieldnames from beeing translated\n");
#line 57
  printf((char const   */* __restrict  */)"  --trim, -t             trim browse fields\n");
#line 58
  printf((char const   */* __restrict  */)"  --version, -v          display version\n");
  }
#line 59
  return;
}
}
#line 65
int main(int argc , char **argv ) ;
#line 65 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/dbview.c"
static struct option  const  long_options[11]  = 
#line 65
  {      {"browse", 0, (int *)0, 'b'}, 
        {"delimiter", 1, (int *)0, 'd'}, 
        {"description", 0, (int *)0, 'e'}, 
        {"help", 0, (int *)0, 'H'}, 
        {"info", 0, (int *)0, 'i'}, 
        {"omit", 0, (int *)0, 'o'}, 
        {"deleted", 0, (int *)0, 'D'}, 
        {"reserve", 0, (int *)0, 'r'}, 
        {"trim", 0, (int *)0, 't'}, 
        {"version", 0, (int *)0, 'v'}, 
        {(char const   *)0, 0, (int *)0, 0}};
#line 61 "/home/june/repo/benchmarks/collector/temp/dbview-1.0.4/dbview.c"
int main(int argc , char **argv ) 
{ 
  int opt_index ;
  int c ;
  char dbfile___0[256] ;
  int flags ;
  char delim ;
  int tmp ;
  void *__cil_tmp9 ;
  char *__cil_tmp10 ;
  char *__cil_tmp11 ;
  char *__cil_tmp12 ;

  {
#line 80
  flags = 0;
#line 81
  delim = (char )':';
#line 83
  optind = 0;
  {
#line 84
  while (1) {
    while_continue: /* CIL Label */ ;
    {
#line 84
    c = getopt_long(argc, (char * const  *)argv, "Hbd:ehiDortv", long_options, & opt_index);
    }
#line 84
    if (! (c != -1)) {
#line 84
      goto while_break;
    }
#line 86
    if (c == 72) {
#line 86
      goto case_72;
    }
#line 88
    if (c == 98) {
#line 88
      goto case_98;
    }
#line 91
    if (c == 100) {
#line 91
      goto case_100;
    }
#line 98
    if (c == 101) {
#line 98
      goto case_101;
    }
#line 101
    if (c == 104) {
#line 101
      goto case_104;
    }
#line 103
    if (c == 105) {
#line 103
      goto case_105;
    }
#line 106
    if (c == 68) {
#line 106
      goto case_68;
    }
#line 109
    if (c == 111) {
#line 109
      goto case_111;
    }
#line 112
    if (c == 114) {
#line 112
      goto case_114;
    }
#line 115
    if (c == 116) {
#line 115
      goto case_116;
    }
#line 118
    if (c == 118) {
#line 118
      goto case_118;
    }
#line 85
    goto switch_break;
    case_72: 
    {
#line 87
    help_long();
#line 87
    exit(0);
    }
    case_98: 
#line 89
    flags |= 1;
#line 90
    goto switch_break;
    case_100: 
    {

    case_100: 
#line 92
    if (! *(argv + optind)) {
      {
#line 93
      printf((char const   */* __restrict  */)"Too few arguments.\n");
      }
#line 94
      goto switch_break;
    }
    }
#line 96
    delim = *(optarg + 0);
#line 97
    goto switch_break;
    case_101: 
#line 99
    flags |= 4;
#line 100
    goto switch_break;
    case_104: 
    {
#line 102
    help_short();
#line 102
    exit(0);
    }
    case_105: 
#line 104
    flags |= 2;
#line 105
    goto switch_break;
    case_68: 
#line 107
    flags |= 64;
#line 108
    goto switch_break;
    case_111: 
#line 110
    flags |= 16;
#line 111
    goto switch_break;
    case_114: 
#line 113
    flags |= 8;
#line 114
    goto switch_break;
    case_116: 
#line 116
    flags |= 32;
#line 117
    goto switch_break;
    case_118: 
    {
#line 119
    printf((char const   */* __restrict  */)"%s %s - %s\n", progname, version, longname);
#line 119
    exit(0);
    }
    switch_break: ;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
#line 124
  if (argc - optind < 1) {
    {
#line 125
    help_short();
#line 126
    exit(0);
    }
  }
  {
#line 129
  airac_observe(argv, optind);
#line 129
  strcpy((char */* __restrict  */)(dbfile___0), (char const   */* __restrict  */)((char const   *)*(argv + optind)));
#line 132
  tmp = db3_process(dbfile___0, flags, delim);
#line 132
  exit(tmp);
  }
}
}

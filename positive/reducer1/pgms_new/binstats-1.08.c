/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

#line 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h"
typedef unsigned long size_t;
#line 124 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long __dev_t;
#line 125 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __uid_t;
#line 126 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __gid_t;
#line 127 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long __ino_t;
#line 129 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __mode_t;
#line 130 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long __nlink_t;
#line 131 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off_t;
#line 132 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off64_t;
#line 139 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __time_t;
#line 153 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __blksize_t;
#line 158 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __blkcnt_t;
#line 172 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __ssize_t;
#line 175 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __syscall_slong_t;
#line 44 "/usr/include/stdio.h"
struct _IO_FILE;
#line 44
struct _IO_FILE;
#line 48 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE;
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
#line 102 "/usr/include/stdio.h"
typedef __ssize_t ssize_t;
#line 120 "/usr/include/time.h"
struct timespec {
   __time_t tv_sec ;
   __syscall_slong_t tv_nsec ;
};
#line 46 "/usr/include/x86_64-linux-gnu/bits/stat.h"
struct stat {
   __dev_t st_dev ;
   __ino_t st_ino ;
   __nlink_t st_nlink ;
   __mode_t st_mode ;
   __uid_t st_uid ;
   __gid_t st_gid ;
   int __pad0 ;
   __dev_t st_rdev ;
   __off_t st_size ;
   __blksize_t st_blksize ;
   __blkcnt_t st_blocks ;
   struct timespec st_atim ;
   struct timespec st_mtim ;
   struct timespec st_ctim ;
   __syscall_slong_t __glibc_reserved[3] ;
};
#line 168 "/usr/include/stdio.h"
extern struct _IO_FILE *stdin ;
#line 169
extern struct _IO_FILE *stdout ;
#line 170
extern struct _IO_FILE *stderr ;
#line 237
extern int fclose(FILE *__stream ) ;
#line 272
extern FILE *fopen(char const   * __restrict  __filename , char const   * __restrict  __modes ) ;
#line 356
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
#line 362
extern int printf(char const   * __restrict  __format  , ...) ;
#line 425
extern int fscanf(FILE * __restrict  __stream , char const   * __restrict  __format 
                  , ...)  __asm__("__isoc99_fscanf")  ;
#line 543 "/usr/include/stdlib.h"
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
#line 129 "/usr/include/string.h"
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2), __leaf__)) strcpy)(char * __restrict  __dest ,
                                                                                                 char const   * __restrict  __src ) ;
#line 132
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2), __leaf__)) strncpy)(char * __restrict  __dest ,
                                                                                                  char const   * __restrict  __src ,
                                                                                                  size_t __n ) ;
#line 140
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2), __leaf__)) strncat)(char * __restrict  __dest ,
                                                                                                  char const   * __restrict  __src ,
                                                                                                  size_t __n ) ;
#line 147
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strncmp)(char const   *__s1 ,
                                                                                                char const   *__s2 ,
                                                                                                size_t __n )  __attribute__((__pure__)) ;
#line 263
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strrchr)(char const   *__s ,
                                                                                                int __c )  __attribute__((__pure__)) ;
#line 342
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2), __leaf__)) strstr)(char const   *__haystack ,
                                                                                                 char const   *__needle )  __attribute__((__pure__)) ;
#line 399
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
#line 511 "/usr/include/unistd.h"
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) getcwd)(char *__buf ,
                                                                               size_t __size ) ;
#line 809
extern  __attribute__((__nothrow__)) ssize_t ( __attribute__((__nonnull__(1,2), __leaf__)) readlink)(char const   * __restrict  __path ,
                                                                                                     char * __restrict  __buf ,
                                                                                                     size_t __len ) ;
#line 263 "/usr/include/x86_64-linux-gnu/sys/stat.h"
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) lstat)(char const   * __restrict  __file ,
                                                                                              struct stat * __restrict  __buf ) ;
#line 38 "/home/june/collector/temp/binstats-1.08/derefsymlink.c"
int in_method  =    0;
#line 39 "/home/june/collector/temp/binstats-1.08/derefsymlink.c"
int out_method  =    0;
#line 40 "/home/june/collector/temp/binstats-1.08/derefsymlink.c"
int verbose  =    0;
#line 44 "/home/june/collector/temp/binstats-1.08/derefsymlink.c"
static char iname[4096]  ;
#line 44 "/home/june/collector/temp/binstats-1.08/derefsymlink.c"
static char oname[4096]  ;
#line 44 "/home/june/collector/temp/binstats-1.08/derefsymlink.c"
static char cname[4096]  ;
#line 49
int pcl(int argc , char **argv , char *iname___0 , char *oname___0 ) ;
#line 50
int derefname(char *name , int depth ) ;
#line 42 "/home/june/collector/temp/binstats-1.08/derefsymlink.c"
int main(int argc , char **argv ) 
{ 
  int al ;
  int i ;
  FILE *fi ;
  FILE *fo ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
#line 53
  al = pcl(argc, argv, iname, oname);
  }
#line 56
  if (out_method == 1) {
    {
#line 57
    fo = fopen((char const   */* __restrict  */)(oname), (char const   */* __restrict  */)"w");
    }
#line 57
    if ((unsigned long )fo == (unsigned long )((void *)0)) {
#line 58
      if (verbose) {
        {
#line 58
        fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"can\'t open output file %s",
                oname);
        }
      }
      {
#line 59
      exit(1);
      }
    }
  } else {
#line 61
    fo = stdout;
  }
#line 65
  if (in_method != 0) {
#line 66
    if (in_method == 1) {
      {
#line 67
      fi = fopen((char const   */* __restrict  */)(iname), (char const   */* __restrict  */)"r");
      }
#line 67
      if ((unsigned long )fi == (unsigned long )((void *)0)) {
#line 68
        if (verbose) {
          {
#line 68
          fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"can\'t open input file %s",
                  iname);
          }
        }
        {
#line 69
        exit(1);
        }
      }
    } else {
#line 71
      fi = stdin;
    }
    {
#line 72
    while (1) {
      while_continue: /* CIL Label */ ;
      {
#line 72
      i = fscanf((FILE */* __restrict  */)fi, (char const   */* __restrict  */)"%s",
                 cname);
      }
#line 72
      if (! (i != -1)) {
#line 72
        goto while_break;
      }
      {
#line 73
      tmp = derefname(cname, 0);
      }
#line 73
      if (tmp >= 0) {
        {
#line 73
        fprintf((FILE */* __restrict  */)fo, (char const   */* __restrict  */)"%s\n",
                cname);
        }
      }
    }
    while_break: /* CIL Label */ ;
    }
  }
  {
#line 78
  while (1) {
    while_continue___0: /* CIL Label */ ;
#line 78
    if (! (al < argc)) {
#line 78
      goto while_break___0;
    }
    {
#line 79
    tmp___0 = al;
#line 79
    al ++;
#line 79
    strncpy((char */* __restrict  */)(cname), (char const   */* __restrict  */)*(argv + tmp___0),
            (size_t )4095);
#line 80
    tmp___1 = derefname(cname, 0);
    }
#line 80
    if (tmp___1 >= 0) {
      {
#line 80
      fprintf((FILE */* __restrict  */)fo, (char const   */* __restrict  */)"%s\n",
              cname);
      }
    }
  }
  while_break___0: /* CIL Label */ ;
  }
#line 83
  if (out_method == 1) {
    {
#line 83
    fclose(fo);
    }
  }
#line 85
  return (0);
}
}
#line 89 "/home/june/collector/temp/binstats-1.08/derefsymlink.c"
static char curdir[4096]  ;
#line 99
int striprel(char *name ) ;
#line 92 "/home/june/collector/temp/binstats-1.08/derefsymlink.c"
int derefname(char *name , int depth ) 
{ 
  char tempa[4096] ;
  char cname___0[4096] ;
  struct stat sbuf ;
  int len ;
  int sc ;
  char *ptra ;
  int tmp ;
  int tmp___0 ;
  ssize_t tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
#line 102
  if (depth < 0) {
#line 102
    return (depth);
  }
#line 103
  if (depth > 25) {
#line 105
    if (verbose) {
      {
#line 105
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"circular symbolic link: %s\n",
              name);
      }
    }
#line 106
    return (-1);
  }
  {
#line 108
  strncpy((char */* __restrict  */)(cname___0), (char const   */* __restrict  */)name,
          (size_t )4095);
  }
#line 109
  if ((int )*(name + 0) != 47) {
#line 110
    if ((int )curdir[0] == 0) {
      {
#line 111
      getcwd(curdir, (size_t )4095);
#line 112
      strncat((char */* __restrict  */)(curdir), (char const   */* __restrict  */)"/",
              (size_t )4095);
      }
    }
    {
#line 115
    strncpy((char */* __restrict  */)(cname___0), (char const   */* __restrict  */)(curdir),
            (size_t )4095);
#line 116
    strncat((char */* __restrict  */)(cname___0), (char const   */* __restrict  */)name,
            (size_t )4095);
    }
  }
  {
#line 118
  tmp = striprel(cname___0);
  }
#line 118
  if (tmp != 0) {
#line 118
    return (-1);
  }
  {
#line 119
  tmp___0 = lstat((char const   */* __restrict  */)(cname___0), (struct stat */* __restrict  */)(& sbuf));
  }
#line 119
  if (tmp___0 != 0) {
#line 120
    if (verbose) {
      {
#line 120
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s does not exist\n",
              cname___0);
      }
    }
#line 121
    return (-1);
  }
#line 123
  sc = 0;
  {
#line 124
  while (1) {
    while_continue: /* CIL Label */ ;
#line 124
    if (! ((sbuf.st_mode & 61440U) == 40960U)) {
#line 124
      goto while_break;
    }
#line 125
    if (sc > 25) {
#line 127
      if (verbose) {
        {
#line 127
        fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"circular symbolic link: %s\n",
                cname___0);
        }
      }
#line 128
      return (-1);
    }
    {
#line 130
    tmp___1 = readlink((char const   */* __restrict  */)(cname___0), (char */* __restrict  */)(tempa),
                       (size_t )4095);
#line 130
    len = (int )tmp___1;
#line 131
    tempa[len] = (char )'\000';
    }
#line 132
    if ((int )tempa[0] != 47) {
      {
#line 133
      ptra = strrchr((char const   *)(cname___0), '/');
      }
#line 133
      if ((unsigned long )ptra == (unsigned long )((void *)0)) {
#line 134
        if (verbose) {
          {
#line 134
          fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Error in stripping link\n");
          }
        }
#line 135
        return (-1);
      }
      {
#line 137
      *(ptra + 1) = (char )'\000';
#line 138
      strncat((char */* __restrict  */)(cname___0), (char const   */* __restrict  */)(tempa),
              (size_t )4095);
      }
    } else {
      {
#line 140
      strncpy((char */* __restrict  */)(cname___0), (char const   */* __restrict  */)(tempa),
              (size_t )4095);
      }
    }
    {
#line 142
    tmp___2 = striprel(cname___0);
    }
#line 142
    if (tmp___2 != 0) {
#line 142
      return (-1);
    }
    {
#line 143
    tmp___3 = lstat((char const   */* __restrict  */)(cname___0), (struct stat */* __restrict  */)(& sbuf));
    }
#line 143
    if (tmp___3 != 0) {
#line 144
      if (verbose) {
        {
#line 144
        fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s does not exist\n",
                cname___0);
        }
      }
#line 145
      return (-1);
    }
#line 147
    sc ++;
  }
  while_break: /* CIL Label */ ;
  }
  {
#line 151
  ptra = strrchr((char const   *)(cname___0), '/');
  }
#line 151
  if ((unsigned long )ptra == (unsigned long )((void *)0)) {
#line 152
    if (verbose) {
      {
#line 152
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Error in stripping name\n");
      }
    }
#line 153
    return (-1);
  }
#line 155
  if ((unsigned long )ptra != (unsigned long )(cname___0)) {
    {
#line 156
    strncpy((char */* __restrict  */)(tempa), (char const   */* __restrict  */)ptra,
            (size_t )4095);
#line 157
    *ptra = (char )'\000';
#line 159
    depth = derefname(cname___0, depth + 1);
#line 160
    strncpy((char */* __restrict  */)name, (char const   */* __restrict  */)(cname___0),
            (size_t )4095);
#line 161
    strncat((char */* __restrict  */)name, (char const   */* __restrict  */)(tempa),
            (size_t )4095);
    }
  } else {
    {
#line 162
    strncpy((char */* __restrict  */)name, (char const   */* __restrict  */)(cname___0),
            (size_t )4095);
    }
  }
#line 164
  return (depth);
}
}
#line 171 "/home/june/collector/temp/binstats-1.08/derefsymlink.c"
static char tempa[4096]  ;
#line 171 "/home/june/collector/temp/binstats-1.08/derefsymlink.c"
static char tempb[4096]  ;
#line 169 "/home/june/collector/temp/binstats-1.08/derefsymlink.c"
int striprel(char *name ) 
{ 
  char *ptra ;
  char *ptrb ;

  {
  {
#line 174
  strncpy((char */* __restrict  */)(tempa), (char const   */* __restrict  */)name,
          (size_t )4095);
  }
  {
#line 175
  while (1) {
    while_continue: /* CIL Label */ ;
    {
#line 175
    ptra = strstr((char const   *)(tempa), "/../");
    }
#line 175
    if (! ((unsigned long )ptra != (unsigned long )((void *)0))) {
#line 175
      goto while_break;
    }
    {
#line 176
    *ptra = (char )'\000';
#line 177
    ptrb = strrchr((char const   *)(tempa), '/');
    }
#line 177
    if ((unsigned long )ptrb == (unsigned long )((void *)0)) {
#line 178
      if (verbose) {
        {
#line 178
        fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Error in stripping \'..\'\n");
        }
      }
#line 179
      return (-1);
    }
    {
#line 181
    *(ptrb + 1) = (char )'\000';
#line 182
    strncpy((char */* __restrict  */)(tempb), (char const   */* __restrict  */)(ptra + 4),
            (size_t )4095);
#line 183
    strncat((char */* __restrict  */)(tempa), (char const   */* __restrict  */)(tempb),
            (size_t )4095);
    }
  }
  while_break: /* CIL Label */ ;
  }
  {
#line 186
  while (1) {
    while_continue___0: /* CIL Label */ ;
    {
#line 186
    ptra = strstr((char const   *)(tempa), "/./");
    }
#line 186
    if (! ((unsigned long )ptra != (unsigned long )((void *)0))) {
#line 186
      goto while_break___0;
    }
    {
#line 187
    *ptra = (char )'\000';
#line 188
    strncpy((char */* __restrict  */)(tempb), (char const   */* __restrict  */)(ptra + 2),
            (size_t )4095);
#line 189
    strncat((char */* __restrict  */)(tempa), (char const   */* __restrict  */)(tempb),
            (size_t )4095);
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  {
#line 191
  strncpy((char */* __restrict  */)name, (char const   */* __restrict  */)(tempa),
          (size_t )4095);
  }
#line 192
  return (0);
}
}
#line 201
int pcl(int argc , char **argv , char *iname___0 , char *oname___0 ) ;
#line 201 "/home/june/collector/temp/binstats-1.08/derefsymlink.c"
static char const   *options[6]  = {      "help                    print this message",      "file <list>        use a list of filenames",      "output <file>   use file instead of stdout",      "stdin                   use stdin as input", 
        "verbose               print error messages",      (char const   *)((void *)0)};
#line 209
int pcl(int argc , char **argv , char *iname___0 , char *oname___0 ) ;
#line 209 "/home/june/collector/temp/binstats-1.08/derefsymlink.c"
static char const   usage0[45]  = 
#line 209
  {      (char const   )'u',      (char const   )'s',      (char const   )'a',      (char const   )'g', 
        (char const   )'e',      (char const   )':',      (char const   )' ',      (char const   )'d', 
        (char const   )'e',      (char const   )'r',      (char const   )'e',      (char const   )'f', 
        (char const   )'s',      (char const   )'y',      (char const   )'m',      (char const   )'l', 
        (char const   )'i',      (char const   )'n',      (char const   )'k',      (char const   )' ', 
        (char const   )'[',      (char const   )'o',      (char const   )'p',      (char const   )'t', 
        (char const   )'i',      (char const   )'o',      (char const   )'n',      (char const   )'s', 
        (char const   )']',      (char const   )' ',      (char const   )'[',      (char const   )'f', 
        (char const   )'i',      (char const   )'l',      (char const   )'e',      (char const   )'n', 
        (char const   )'a',      (char const   )'m',      (char const   )'e',      (char const   )']', 
        (char const   )' ',      (char const   )'.',      (char const   )'.',      (char const   )'.', 
        (char const   )'\000'};
#line 209
int pcl(int argc , char **argv , char *iname___0 , char *oname___0 ) ;
#line 209 "/home/june/collector/temp/binstats-1.08/derefsymlink.c"
static char const   usage1[46]  = 
#line 209
  {      (char const   )' ',      (char const   )'t',      (char const   )'r',      (char const   )'y', 
        (char const   )' ',      (char const   )'d',      (char const   )'e',      (char const   )'r', 
        (char const   )'e',      (char const   )'f',      (char const   )'s',      (char const   )'y', 
        (char const   )'m',      (char const   )'l',      (char const   )'i',      (char const   )'n', 
        (char const   )'k',      (char const   )' ',      (char const   )'-',      (char const   )'h', 
        (char const   )'e',      (char const   )'l',      (char const   )'p',      (char const   )' ', 
        (char const   )'f',      (char const   )'o',      (char const   )'r',      (char const   )' ', 
        (char const   )'a',      (char const   )' ',      (char const   )'l',      (char const   )'i', 
        (char const   )'s',      (char const   )'t',      (char const   )' ',      (char const   )'o', 
        (char const   )'f',      (char const   )' ',      (char const   )'o',      (char const   )'p', 
        (char const   )'t',      (char const   )'i',      (char const   )'o',      (char const   )'n', 
        (char const   )'s',      (char const   )'\000'};
#line 199 "/home/june/collector/temp/binstats-1.08/derefsymlink.c"
int pcl(int argc , char **argv , char *iname___0 , char *oname___0 ) 
{ 
  int i ;
  int optno ;
  int olen ;
  char const   **sptr ;
  size_t tmp ;
  int tmp___0 ;

  {
#line 214
  i = 1;
  {
#line 214
  while (1) {
    while_continue: /* CIL Label */ ;
#line 214
    if (! (i < argc)) {
#line 214
      goto while_break;
    }
    {
#line 215
    tmp = strlen((char const   *)*(argv + i));
#line 215
    olen = (int )(tmp - 1UL);
    }
#line 216
    if ((int )*(*(argv + i) + 0) == 45) {
#line 217
      sptr = options;
#line 217
      optno = 0;
      {
#line 217
      while (1) {
        while_continue___0: /* CIL Label */ ;
#line 217
        if (! ((unsigned long )*sptr != (unsigned long )((void *)0))) {
#line 217
          goto while_break___0;
        }
        {
#line 218
        tmp___0 = strncmp((char const   *)(*(argv + i) + 1), *sptr, (size_t )olen);
        }
#line 218
        if (tmp___0 == 0) {
#line 218
          goto while_break___0;
        }
#line 217
        sptr ++;
#line 217
        optno ++;
      }
      while_break___0: /* CIL Label */ ;
      }
      {
#line 221
      if (optno == 0) {
#line 221
        goto case_0;
      }
#line 229
      if (optno == 1) {
#line 229
        goto case_1;
      }
#line 233
      if (optno == 2) {
#line 233
        goto case_2;
      }
#line 237
      if (optno == 3) {
#line 237
        goto case_3;
      }
#line 240
      if (optno == 4) {
#line 240
        goto case_4;
      }
#line 243
      goto switch_default;
      case_0: /* CIL Label */ 
      {
#line 222
      printf((char const   */* __restrict  */)"%s\n", usage0);
#line 223
      printf((char const   */* __restrict  */)"Options:\n");
#line 224
      sptr = options;
      }
      {
#line 224
      while (1) {
        while_continue___1: /* CIL Label */ ;
#line 224
        if (! ((unsigned long )*sptr != (unsigned long )((void *)0))) {
#line 224
          goto while_break___1;
        }
        {
#line 225
        printf((char const   */* __restrict  */)" -%s\n", *sptr);
#line 224
        sptr ++;
        }
      }
      while_break___1: /* CIL Label */ ;
      }
      {
#line 226
      printf((char const   */* __restrict  */)"\n");
#line 227
      exit(0);
      }
#line 228
      goto switch_break;
      case_1: /* CIL Label */ 
      {
#line 230
      in_method = 1;
#line 231
      i ++;
#line 231
      strcpy((char */* __restrict  */)iname___0, (char const   */* __restrict  */)*(argv + i));
      }
#line 232
      goto switch_break;
      case_2: /* CIL Label */ 
      {
#line 234
      out_method = 1;
#line 235
      i ++;
#line 235
      strcpy((char */* __restrict  */)oname___0, (char const   */* __restrict  */)*(argv + i));
      }
#line 236
      goto switch_break;
      case_3: /* CIL Label */ 
#line 238
      in_method = 2;
#line 239
      goto switch_break;
      case_4: /* CIL Label */ 
#line 241
      verbose = 1;
#line 242
      goto switch_break;
      switch_default: /* CIL Label */ 
      {
#line 244
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s\n%s\n",
              usage0, usage1);
#line 245
      exit(1);
      }
#line 246
      goto switch_break;
      switch_break: /* CIL Label */ ;
      }
    } else {
#line 248
      return (i);
    }
#line 214
    i ++;
  }
  while_break: /* CIL Label */ ;
  }
#line 250
  return (i);
}
}

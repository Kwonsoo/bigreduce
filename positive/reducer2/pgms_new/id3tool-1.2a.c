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
#line 104 "/usr/include/getopt.h"
struct option {
   char const   *name ;
   int has_arg ;
   int *flag ;
   int val ;
};
#line 45 "/home/june/repo/benchmarks/collector/temp/id3tool-1.2a/id3.h"
struct __anonstruct_v10_30 {
   char note[30] ;
};
#line 45 "/home/june/repo/benchmarks/collector/temp/id3tool-1.2a/id3.h"
struct __anonstruct_v11_31 {
   char note[28] ;
   char marker ;
   unsigned char track ;
};
#line 45 "/home/june/repo/benchmarks/collector/temp/id3tool-1.2a/id3.h"
union __anonunion_note_29 {
   struct __anonstruct_v10_30 v10 ;
   struct __anonstruct_v11_31 v11 ;
};
#line 45 "/home/june/repo/benchmarks/collector/temp/id3tool-1.2a/id3.h"
struct id3tag_s {
   char magic[3] ;
   char songname[30] ;
   char artist[30] ;
   char album[30] ;
   char year[4] ;
   union __anonunion_note_29 note ;
   unsigned char style ;
};
#line 45 "/home/june/repo/benchmarks/collector/temp/id3tool-1.2a/id3.h"
typedef struct id3tag_s id3tag_t;
#line 64 "/home/june/repo/benchmarks/collector/temp/id3tool-1.2a/id3.h"
struct style_s {
   unsigned char styleid ;
   char *name ;
};
#line 170 "/usr/include/stdio.h"
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
#line 364
extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s , char const   * __restrict  __format 
                                                 , ...) ;
#line 147 "/usr/include/stdlib.h"
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) atoi)(char const   *__nptr )  __attribute__((__pure__)) ;
#line 483
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) free)(void *__ptr ) ;
#line 543
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
#line 66 "/usr/include/string.h"
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1), __leaf__)) memset)(void *__s ,
                                                                                               int __c ,
                                                                                               size_t __n ) ;
#line 132
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2), __leaf__)) strncpy)(char * __restrict  __dest ,
                                                                                                  char const   * __restrict  __src ,
                                                                                                  size_t __n ) ;
#line 176
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strdup)(char const   *__s )  __attribute__((__malloc__)) ;
#line 534
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strcasecmp)(char const   *__s1 ,
                                                                                                   char const   *__s2 )  __attribute__((__pure__)) ;
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
#line 69 "/home/june/repo/benchmarks/collector/temp/id3tool-1.2a/id3.h"
struct style_s id3_styles[146] ;
#line 71
extern int id3_readtag(FILE *fin , id3tag_t *id3tag ) ;
#line 72
extern int id3_appendtag(FILE *fout , id3tag_t *id3tag ) ;
#line 73
extern int id3_replacetag(FILE *fout , id3tag_t *id3tag ) ;
#line 74
extern void id3_cleartag(id3tag_t *id3tag ) ;
#line 75
extern char *id3_findstyle(int styleid ) ;
#line 55 "/home/june/repo/benchmarks/collector/temp/id3tool-1.2a/id3tool.c"
struct option id3options[12]  = 
#line 55 "/home/june/repo/benchmarks/collector/temp/id3tool-1.2a/id3tool.c"
  {      {"set-title", 1, (int *)((void *)0), 't'}, 
        {"set-album", 1, (int *)((void *)0), 'a'}, 
        {"set-artist", 1, (int *)((void *)0), 'r'}, 
        {"set-year", 1, (int *)((void *)0), 'y'}, 
        {"set-note", 1, (int *)((void *)0), 'n'}, 
        {"set-genre", 1, (int *)((void *)0), 'g'}, 
        {"set-genre-word", 1, (int *)((void *)0), 'G'}, 
        {"set-track", 1, (int *)((void *)0), 'c'}, 
        {"genre-list", 0, (int *)((void *)0), 'l'}, 
        {"version", 0, (int *)((void *)0), 'v'}, 
        {"help", 0, (int *)((void *)0), 'h'}, 
        {(char const   *)0, 0, (int *)0, 0}};
#line 86 "/home/june/repo/benchmarks/collector/temp/id3tool-1.2a/id3tool.c"
void showblurb(void) 
{ 


  {
  {
#line 89
  printf((char const   */* __restrict  */)"id3tool version %s\n", "1.2a");
#line 90
  printf((char const   */* __restrict  */)"Copyright (C) 1999-2005, Christopher Collins\n");
#line 91
  printf((char const   */* __restrict  */)"id3tool comes with ABSOLUTELY NO WARRANTY.  This is free software, and you are\n");
#line 93
  printf((char const   */* __restrict  */)"welcome to redistribute it under certain conditions.  For details refer to the\n");
#line 95
  printf((char const   */* __restrict  */)"file \"COPYING\" included with this program.\n");
  }
#line 103
  return;
}
}
#line 105 "/home/june/repo/benchmarks/collector/temp/id3tool-1.2a/id3tool.c"
void showusage(int argc , char **argv ) 
{ 


  {
  {
#line 108
  printf((char const   */* __restrict  */)"usage:\n");
#line 109
  printf((char const   */* __restrict  */)"%s [<options>] <filename>\n", *(argv + 0));
#line 110
  printf((char const   */* __restrict  */)"  -t, --set-title=WORD\t\tSets the title to WORD\n");
#line 111
  printf((char const   */* __restrict  */)"  -a, --set-album=WORD\t\tSets the album to WORD\n");
#line 112
  printf((char const   */* __restrict  */)"  -r, --set-artist=WORD\t\tSets the artist to WORD\n");
#line 113
  printf((char const   */* __restrict  */)"  -y, --set-year=YEAR\t\tSets the year to YEAR [4 digits]\n");
#line 114
  printf((char const   */* __restrict  */)"  -n, --set-note=WORD\t\tSets the note to WORD\n");
#line 115
  printf((char const   */* __restrict  */)"  -g, --set-genre=INT\t\tSets the genre code to INT\n");
#line 116
  printf((char const   */* __restrict  */)"  -G, --set-genre-word=WORD\tSets the genre to WORD\n");
#line 117
  printf((char const   */* __restrict  */)"  -c, --set-track=INT\t\tSets the track number to INT\n");
#line 118
  printf((char const   */* __restrict  */)"  -l, --genre-list\t\tShows the Genre\'s and their codes\n");
#line 119
  printf((char const   */* __restrict  */)"  -v, --version\t\t\tDisplays the version\n");
#line 120
  printf((char const   */* __restrict  */)"  -h, --help\t\t\tDisplays this message\n");
#line 121
  printf((char const   */* __restrict  */)"\nReport bugs to Chris Collins <ccollins@pcug.org.au>\n");
  }
#line 122
  return;
}
}
#line 124 "/home/june/repo/benchmarks/collector/temp/id3tool-1.2a/id3tool.c"
int main(int argc , char **argv ) 
{ 
  int retval ;
  char *newtitle ;
  char *newalbum ;
  char *newartist ;
  char *newnote ;
  long newyear ;
  long newgenre ;
  long newtrack ;
  id3tag_t mytag ;
  FILE *fptr ;
  int newtag ;
  char strbuf[31] ;
  int opt_index ;
  int ctr ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  char *tmp___4 ;

  {
  {
#line 128
  newtitle = (char *)((void *)0);
#line 129
  newalbum = (char *)((void *)0);
#line 130
  newartist = (char *)((void *)0);
#line 131
  newnote = (char *)((void *)0);
#line 132
  newyear = -1L;
#line 133
  newgenre = -1L;
#line 134
  newtrack = -1L;
#line 136
  fptr = (FILE *)((void *)0);
#line 137
  newtag = 0;
#line 139
  opt_index = 0;
#line 142
  retval = getopt_long(argc, (char * const  *)argv, "t:a:r:y:n:g:G:c:lvh", (struct option  const  *)(id3options),
                       & opt_index);
  }
  {
#line 144
  while (1) {
    while_continue: /* CIL Label */ ;
#line 144
    if (! (retval != -1)) {
#line 144
      goto while_break;
    }
    {
#line 146
    if (retval == 116) {
#line 146
      goto case_116;
    }
#line 154
    if (retval == 97) {
#line 154
      goto case_97;
    }
#line 162
    if (retval == 114) {
#line 162
      goto case_114;
    }
#line 170
    if (retval == 121) {
#line 170
      goto case_121;
    }
#line 178
    if (retval == 110) {
#line 178
      goto case_110;
    }
#line 186
    if (retval == 103) {
#line 186
      goto case_103;
    }
#line 194
    if (retval == 99) {
#line 194
      goto case_99;
    }
#line 202
    if (retval == 71) {
#line 202
      goto case_71;
    }
#line 218
    if (retval == 108) {
#line 218
      goto case_108;
    }
#line 228
    if (retval == 118) {
#line 228
      goto case_118;
    }
#line 232
    if (retval == 104) {
#line 232
      goto case_104;
    }
#line 237
    if (retval == 63) {
#line 237
      goto case_63;
    }
#line 239
    goto switch_default;
    case_116: /* CIL Label */ 
#line 147
    if ((unsigned long )((void *)0) != (unsigned long )newtitle) {
      {
#line 148
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s: title already set\n",
              *(argv + 0));
#line 150
      exit(1);
      }
    }
    {
#line 152
    newtitle = strdup((char const   *)optarg);
    }
#line 153
    goto switch_break;
    case_97: /* CIL Label */ 
#line 155
    if ((unsigned long )((void *)0) != (unsigned long )newalbum) {
      {
#line 156
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s: album already set\n",
              *(argv + 0));
#line 158
      exit(1);
      }
    }
    {
#line 160
    newalbum = strdup((char const   *)optarg);
    }
#line 161
    goto switch_break;
    case_114: /* CIL Label */ 
#line 163
    if ((unsigned long )((void *)0) != (unsigned long )newartist) {
      {
#line 164
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s: artist already set\n",
              *(argv + 0));
#line 166
      exit(1);
      }
    }
    {
#line 168
    newartist = strdup((char const   *)optarg);
    }
#line 169
    goto switch_break;
    case_121: /* CIL Label */ 
#line 171
    if (newyear >= 0L) {
      {
#line 172
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s: year already set\n",
              *(argv + 0));
#line 174
      exit(1);
      }
    }
    {
#line 176
    tmp = atoi((char const   *)optarg);
#line 176
    newyear = (long )tmp;
    }
#line 177
    goto switch_break;
    case_110: /* CIL Label */ 
#line 179
    if ((unsigned long )((void *)0) != (unsigned long )newnote) {
      {
#line 180
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s: note already set\n",
              *(argv + 0));
#line 182
      exit(1);
      }
    }
    {
#line 184
    newnote = strdup((char const   *)optarg);
    }
#line 185
    goto switch_break;
    case_103: /* CIL Label */ 
#line 187
    if (newgenre >= 0L) {
      {
#line 188
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s: genre already set\n",
              *(argv + 0));
#line 190
      exit(1);
      }
    }
    {
#line 192
    tmp___0 = atoi((char const   *)optarg);
#line 192
    newgenre = (long )tmp___0;
    }
#line 193
    goto switch_break;
    case_99: /* CIL Label */ 
#line 195
    if (newtrack >= 0L) {
      {
#line 196
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s: track already set\n",
              *(argv + 0));
#line 198
      exit(1);
      }
    }
    {
#line 200
    tmp___1 = atoi((char const   *)optarg);
#line 200
    newtrack = (long )tmp___1;
    }
#line 201
    goto switch_break;
    case_71: /* CIL Label */ 
#line 203
    ctr = 0;
    {
#line 203
    while (1) {
      while_continue___0: /* CIL Label */ ;
#line 203
      if (! ((unsigned long )id3_styles[ctr].name != (unsigned long )((void *)0))) {
#line 203
        goto while_break___0;
      }
      {
#line 204
      tmp___2 = strcasecmp((char const   *)optarg, (char const   *)id3_styles[ctr].name);
      }
#line 204
      if (! tmp___2) {
#line 207
        goto while_break___0;
      }
#line 203
      ctr ++;
    }
    while_break___0: /* CIL Label */ ;
    }
#line 210
    if ((unsigned long )id3_styles[ctr].name == (unsigned long )((void *)0)) {
      {
#line 211
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s: Couldn\'t find genre \"%s\"\n",
              *(argv + 0), optarg);
#line 214
      exit(1);
      }
    }
#line 216
    newgenre = (long )id3_styles[ctr].styleid;
#line 217
    goto switch_break;
    case_108: /* CIL Label */ 
    {
#line 219
    printf((char const   */* __restrict  */)"%-40s | %s\n", "Style", "ID");
#line 220
    printf((char const   */* __restrict  */)"-----------------------------------------+-----\n");
#line 222
    ctr = 0;
    }
    {
#line 222
    while (1) {
      while_continue___1: /* CIL Label */ ;
#line 222
      if (! ((unsigned long )id3_styles[ctr].name != (unsigned long )((void *)0))) {
#line 222
        goto while_break___1;
      }
      {
#line 223
      printf((char const   */* __restrict  */)"%-40s | 0x%02X\n", id3_styles[ctr].name,
             (int )id3_styles[ctr].styleid);
#line 222
      ctr ++;
      }
    }
    while_break___1: /* CIL Label */ ;
    }
    {
#line 227
    exit(0);
    }
    case_118: /* CIL Label */ 
    {
#line 229
    showblurb();
#line 231
    exit(0);
    }
    case_104: /* CIL Label */ 
    {
#line 233
    showblurb();
#line 234
    printf((char const   */* __restrict  */)"\n");
#line 235
    showusage(argc, argv);
#line 236
    exit(0);
    }
    case_63: /* CIL Label */ 
    {
#line 238
    exit(1);
    }
    switch_default: /* CIL Label */ 
#line 240
    goto switch_break;
    switch_break: /* CIL Label */ ;
    }
    {
#line 242
    retval = getopt_long(argc, (char * const  *)argv, "t:a:r:y:n:g:G:c:lvh", (struct option  const  *)(id3options),
                         & opt_index);
    }
  }
  while_break: /* CIL Label */ ;
  }
#line 245
  if (optind + 1 > argc) {
    {
#line 246
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s: Not enough arguments\n",
            *(argv + 0));
#line 247
    showblurb();
#line 248
    printf((char const   */* __restrict  */)"\n");
#line 249
    showusage(argc, argv);
#line 250
    exit(1);
    }
  }
#line 252
  ctr = optind;
  {
#line 252
  while (1) {
    while_continue___2: /* CIL Label */ ;
#line 252
    if (! (ctr < argc)) {
#line 252
      goto while_break___2;
    }
    {
#line 253
    fptr = fopen((char const   */* __restrict  */)*(argv + ctr), (char const   */* __restrict  */)"rb");
    }
#line 254
    if ((unsigned long )((void *)0) == (unsigned long )fptr) {
      {
#line 255
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s: Can\'t open file \"%s\" for read.\n",
              *(argv + 0), *(argv + ctr));
#line 257
      exit(1);
      }
    }
    {
#line 259
    tmp___3 = id3_readtag(fptr, & mytag);
    }
#line 259
    if (tmp___3) {
      {
#line 260
      newtag = 1;
#line 261
      id3_cleartag(& mytag);
      }
    } else {
#line 263
      newtag = 0;
    }
    {
#line 265
    fclose(fptr);
    }
#line 266
    if (! newtitle) {
#line 266
      if (! newartist) {
#line 266
        if (! newalbum) {
#line 266
          if (! newnote) {
#line 266
            if (newyear < 0L) {
#line 266
              if (newgenre < 0L) {
#line 266
                if (newtrack < 0L) {
                  {
#line 269
                  printf((char const   */* __restrict  */)"Filename: %s\n", *(argv + ctr));
                  }
#line 270
                  if (newtag) {
                    {
#line 271
                    printf((char const   */* __restrict  */)"No ID3 Tag\n");
                    }
                  } else {
#line 273
                    if ((int )mytag.songname[0] != 0) {
                      {
#line 274
                      strncpy((char */* __restrict  */)(strbuf), (char const   */* __restrict  */)(mytag.songname),
                              (size_t )30);
#line 275
                      strbuf[30] = (char )'\000';
#line 276
                      printf((char const   */* __restrict  */)"Song Title:\t%-30s\n",
                             strbuf);
                      }
                    }
#line 278
                    if ((int )mytag.artist[0] != 0) {
                      {
#line 279
                      strncpy((char */* __restrict  */)(strbuf), (char const   */* __restrict  */)(mytag.artist),
                              (size_t )30);
#line 280
                      strbuf[30] = (char )'\000';
#line 281
                      printf((char const   */* __restrict  */)"Artist:\t\t%-30s\n",
                             strbuf);
                      }
                    }
#line 283
                    if ((int )mytag.album[0] != 0) {
                      {
#line 284
                      strncpy((char */* __restrict  */)(strbuf), (char const   */* __restrict  */)(mytag.album),
                              (size_t )30);
#line 285
                      strbuf[30] = (char )'\000';
#line 286
                      printf((char const   */* __restrict  */)"Album:\t\t%-30s\n",
                             strbuf);
                      }
                    }
#line 288
                    if ((int )mytag.note.v11.marker == 0) {
#line 290
                      if ((int )mytag.note.v11.note[0] != 0) {
                        {
#line 291
                        strncpy((char */* __restrict  */)(strbuf), (char const   */* __restrict  */)(mytag.note.v11.note),
                                (size_t )28);
#line 292
                        strbuf[28] = (char )'\000';
#line 293
                        printf((char const   */* __restrict  */)"Note:\t\t%-28s\n",
                               strbuf);
                        }
                      }
#line 295
                      if ((int )mytag.note.v11.track != 0) {
                        {
#line 296
                        printf((char const   */* __restrict  */)"Track:\t\t%d\n",
                               (int )mytag.note.v11.track);
                        }
                      }
                    } else
#line 299
                    if ((int )mytag.note.v10.note[0] != 0) {
                      {
#line 300
                      strncpy((char */* __restrict  */)(strbuf), (char const   */* __restrict  */)(mytag.note.v10.note),
                              (size_t )30);
#line 301
                      strbuf[30] = (char )'\000';
#line 302
                      printf((char const   */* __restrict  */)"Note:\t\t%-30s\n",
                             strbuf);
                      }
                    }
#line 305
                    if ((int )mytag.year[0] != 0) {
                      {
#line 306
                      strncpy((char */* __restrict  */)(strbuf), (char const   */* __restrict  */)(mytag.year),
                              (size_t )4);
#line 307
                      strbuf[4] = (char )'\000';
#line 308
                      printf((char const   */* __restrict  */)"Year:\t\t%-4s\n", strbuf);
                      }
                    }
#line 310
                    if ((int )mytag.style != 255) {
                      {
#line 311
                      tmp___4 = id3_findstyle((int )mytag.style);
#line 311
                      printf((char const   */* __restrict  */)"Genre:\t\t%s (0x%X)\n",
                             tmp___4, (int )mytag.style);
                      }
                    }
                  }
                  {
#line 316
                  printf((char const   */* __restrict  */)"\n");
                  }
                } else {
#line 266
                  goto _L___4;
                }
              } else {
#line 266
                goto _L___4;
              }
            } else {
#line 266
              goto _L___4;
            }
          } else {
#line 266
            goto _L___4;
          }
        } else {
#line 266
          goto _L___4;
        }
      } else {
#line 266
        goto _L___4;
      }
    } else {
      _L___4: /* CIL Label */ 
#line 319
      if (newtitle) {
        {
#line 320
        memset((void *)(mytag.songname), 0, (size_t )30);
#line 321
        strncpy((char */* __restrict  */)(mytag.songname), (char const   */* __restrict  */)newtitle,
                (size_t )30);
        }
      }
#line 323
      if (newartist) {
        {
#line 324
        memset((void *)(mytag.artist), 0, (size_t )30);
#line 325
        strncpy((char */* __restrict  */)(mytag.artist), (char const   */* __restrict  */)newartist,
                (size_t )30);
        }
      }
#line 327
      if (newalbum) {
        {
#line 328
        memset((void *)(mytag.album), 0, (size_t )30);
#line 329
        strncpy((char */* __restrict  */)(mytag.album), (char const   */* __restrict  */)newalbum,
                (size_t )30);
        }
      }
#line 331
      if (newnote) {
#line 333
        if ((int )mytag.note.v11.marker == 0) {
#line 333
          if ((int )mytag.note.v11.track != 0) {
#line 333
            if (newtrack != 0L) {
              {
#line 336
              memset((void *)(mytag.note.v10.note), 0, (size_t )28);
#line 337
              strncpy((char */* __restrict  */)(mytag.note.v11.note), (char const   */* __restrict  */)newnote,
                      (size_t )28);
              }
            } else {
              {
#line 339
              memset((void *)(mytag.note.v10.note), 0, (size_t )30);
#line 340
              strncpy((char */* __restrict  */)(mytag.note.v10.note), (char const   */* __restrict  */)newnote,
                      (size_t )30);
              }
            }
          } else {
            {
#line 339
            memset((void *)(mytag.note.v10.note), 0, (size_t )30);
#line 340
            strncpy((char */* __restrict  */)(mytag.note.v10.note), (char const   */* __restrict  */)newnote,
                    (size_t )30);
            }
          }
        } else {
          {
#line 339
          memset((void *)(mytag.note.v10.note), 0, (size_t )30);
#line 340
          strncpy((char */* __restrict  */)(mytag.note.v10.note), (char const   */* __restrict  */)newnote,
                  (size_t )30);
          }
        }
      }
#line 344
      if (newyear >= 0L) {
#line 345
        if (newyear < 100L) {
#line 346
          if (newyear > 70L) {
#line 347
            newyear += 1900L;
          } else {
#line 349
            newyear += 2000L;
          }
        }
        {
#line 352
        sprintf((char */* __restrict  */)(strbuf), (char const   */* __restrict  */)"%4.4ld",
                newyear);
#line 353
        memset((void *)(mytag.year), 0, (size_t )4);
#line 354
        strncpy((char */* __restrict  */)(mytag.year), (char const   */* __restrict  */)(strbuf),
                (size_t )4);
        }
      }
#line 356
      if (newgenre >= 0L) {
#line 357
        mytag.style = (unsigned char )newgenre;
      }
#line 359
      if (newtrack > 0L) {
#line 360
        mytag.note.v11.marker = (char )'\000';
#line 361
        mytag.note.v11.track = (unsigned char )newtrack;
      }
      {
#line 364
      fptr = fopen((char const   */* __restrict  */)*(argv + ctr), (char const   */* __restrict  */)"r+b");
      }
#line 365
      if ((unsigned long )((void *)0) == (unsigned long )fptr) {
        {
#line 366
        fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s: Can\'t open file \"%s\" for write.\n",
                *(argv + 0), *(argv + ctr));
#line 368
        exit(1);
        }
      }
#line 370
      if (newtag) {
        {
#line 371
        id3_appendtag(fptr, & mytag);
        }
      } else {
        {
#line 373
        id3_replacetag(fptr, & mytag);
        }
      }
      {
#line 375
      fclose(fptr);
      }
    }
#line 252
    ctr ++;
  }
  while_break___2: /* CIL Label */ ;
  }
#line 380
  if (newtitle) {
    {
#line 381
    free((void *)newtitle);
    }
  }
#line 383
  if (newartist) {
    {
#line 384
    free((void *)newartist);
    }
  }
#line 386
  if (newalbum) {
    {
#line 387
    free((void *)newalbum);
    }
  }
#line 389
  if (newnote) {
    {
#line 390
    free((void *)newnote);
    }
  }
#line 392
  return (0);
}
}
#line 709 "/usr/include/stdio.h"
extern size_t fread(void * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream ) ;
#line 715
extern size_t fwrite(void const   * __restrict  __ptr , size_t __size , size_t __n ,
                     FILE * __restrict  __s ) ;
#line 749
extern int fseek(FILE *__stream , long __off , int __whence ) ;
#line 754
extern long ftell(FILE *__stream ) ;
#line 147 "/usr/include/string.h"
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strncmp)(char const   *__s1 ,
                                                                                                char const   *__s2 ,
                                                                                                size_t __n )  __attribute__((__pure__)) ;
#line 49 "/home/june/repo/benchmarks/collector/temp/id3tool-1.2a/id3.c"
struct style_s id3_styles[146]  = 
#line 49 "/home/june/repo/benchmarks/collector/temp/id3tool-1.2a/id3.c"
  {      {(unsigned char)0, (char *)"Blues"}, 
        {(unsigned char)1, (char *)"Classic Rock"}, 
        {(unsigned char)2, (char *)"Country"}, 
        {(unsigned char)3, (char *)"Dance"}, 
        {(unsigned char)4, (char *)"Disco"}, 
        {(unsigned char)5, (char *)"Funk"}, 
        {(unsigned char)6, (char *)"Grunge"}, 
        {(unsigned char)7, (char *)"Hip-Hop"}, 
        {(unsigned char)8, (char *)"Jazz"}, 
        {(unsigned char)9, (char *)"Metal"}, 
        {(unsigned char)10, (char *)"New Age"}, 
        {(unsigned char)11, (char *)"Oldies"}, 
        {(unsigned char)12, (char *)"Other"}, 
        {(unsigned char)13, (char *)"Pop"}, 
        {(unsigned char)14, (char *)"R&B"}, 
        {(unsigned char)15, (char *)"Rap"}, 
        {(unsigned char)16, (char *)"Reggae"}, 
        {(unsigned char)17, (char *)"Rock"}, 
        {(unsigned char)18, (char *)"Techno"}, 
        {(unsigned char)19, (char *)"Industrial"}, 
        {(unsigned char)20, (char *)"Alternative"}, 
        {(unsigned char)21, (char *)"Ska"}, 
        {(unsigned char)22, (char *)"Death Metal"}, 
        {(unsigned char)23, (char *)"Pranks"}, 
        {(unsigned char)24, (char *)"Soundtrack"}, 
        {(unsigned char)25, (char *)"Euro-Techno"}, 
        {(unsigned char)26, (char *)"Ambient"}, 
        {(unsigned char)27, (char *)"Trip-Hop"}, 
        {(unsigned char)28, (char *)"Vocal"}, 
        {(unsigned char)29, (char *)"Jazz+Funk"}, 
        {(unsigned char)30, (char *)"Fusion"}, 
        {(unsigned char)31, (char *)"Trance"}, 
        {(unsigned char)32, (char *)"Classical"}, 
        {(unsigned char)33, (char *)"Instrumental"}, 
        {(unsigned char)34, (char *)"Acid"}, 
        {(unsigned char)35, (char *)"House"}, 
        {(unsigned char)36, (char *)"Game"}, 
        {(unsigned char)37, (char *)"Sound Clip"}, 
        {(unsigned char)38, (char *)"Gospel"}, 
        {(unsigned char)39, (char *)"Noise"}, 
        {(unsigned char)40, (char *)"Alt. Rock"}, 
        {(unsigned char)41, (char *)"Bass"}, 
        {(unsigned char)42, (char *)"Soul"}, 
        {(unsigned char)43, (char *)"Punk"}, 
        {(unsigned char)44, (char *)"Space"}, 
        {(unsigned char)45, (char *)"Meditative"}, 
        {(unsigned char)46, (char *)"Instrumental Pop"}, 
        {(unsigned char)47, (char *)"Instrumental Rock"}, 
        {(unsigned char)48, (char *)"Ethnic"}, 
        {(unsigned char)49, (char *)"Gothic"}, 
        {(unsigned char)50, (char *)"Darkwave"}, 
        {(unsigned char)51, (char *)"Techno-Industrial"}, 
        {(unsigned char)52, (char *)"Electronic"}, 
        {(unsigned char)53, (char *)"Pop-Folk"}, 
        {(unsigned char)54, (char *)"Eurodance"}, 
        {(unsigned char)55, (char *)"Dream"}, 
        {(unsigned char)56, (char *)"Southern Rock"}, 
        {(unsigned char)57, (char *)"Comedy"}, 
        {(unsigned char)58, (char *)"Cult"}, 
        {(unsigned char)59, (char *)"Gangsta"}, 
        {(unsigned char)60, (char *)"Top 40"}, 
        {(unsigned char)61, (char *)"Christian Rap"}, 
        {(unsigned char)62, (char *)"Pop/Funk"}, 
        {(unsigned char)63, (char *)"Jungle"}, 
        {(unsigned char)64, (char *)"Native US"}, 
        {(unsigned char)65, (char *)"Cabaret"}, 
        {(unsigned char)66, (char *)"New Wave"}, 
        {(unsigned char)67, (char *)"Psychadelic"}, 
        {(unsigned char)68, (char *)"Rave"}, 
        {(unsigned char)69, (char *)"Showtunes"}, 
        {(unsigned char)70, (char *)"Trailer"}, 
        {(unsigned char)71, (char *)"Lo-Fi"}, 
        {(unsigned char)72, (char *)"Tribal"}, 
        {(unsigned char)73, (char *)"Acid Punk"}, 
        {(unsigned char)74, (char *)"Acid Jazz"}, 
        {(unsigned char)75, (char *)"Polka"}, 
        {(unsigned char)76, (char *)"Retro"}, 
        {(unsigned char)77, (char *)"Musical"}, 
        {(unsigned char)78, (char *)"Rock & Roll"}, 
        {(unsigned char)79, (char *)"Hard Rock"}, 
        {(unsigned char)80, (char *)"Folk"}, 
        {(unsigned char)81, (char *)"Folk-Rock"}, 
        {(unsigned char)82, (char *)"National Folk"}, 
        {(unsigned char)83, (char *)"Swing"}, 
        {(unsigned char)84, (char *)"Fast Fusion"}, 
        {(unsigned char)85, (char *)"Bebob"}, 
        {(unsigned char)86, (char *)"Latin"}, 
        {(unsigned char)87, (char *)"Revival"}, 
        {(unsigned char)88, (char *)"Celtic"}, 
        {(unsigned char)89, (char *)"Bluegrass"}, 
        {(unsigned char)90, (char *)"Avantgarde"}, 
        {(unsigned char)91, (char *)"Gothic Rock"}, 
        {(unsigned char)92, (char *)"Progressive Rock"}, 
        {(unsigned char)93, (char *)"Psychedelic Rock"}, 
        {(unsigned char)94, (char *)"Symphonic Rock"}, 
        {(unsigned char)95, (char *)"Slow Rock"}, 
        {(unsigned char)96, (char *)"Big Band"}, 
        {(unsigned char)97, (char *)"Chorus"}, 
        {(unsigned char)98, (char *)"Easy Listening"}, 
        {(unsigned char)99, (char *)"Acoustic"}, 
        {(unsigned char)100, (char *)"Humour"}, 
        {(unsigned char)101, (char *)"Speech"}, 
        {(unsigned char)102, (char *)"Chanson"}, 
        {(unsigned char)103, (char *)"Opera"}, 
        {(unsigned char)104, (char *)"Chamber Music"}, 
        {(unsigned char)105, (char *)"Sonata"}, 
        {(unsigned char)106, (char *)"Symphony"}, 
        {(unsigned char)107, (char *)"Booty Bass"}, 
        {(unsigned char)108, (char *)"Primus"}, 
        {(unsigned char)109, (char *)"Porn Groove"}, 
        {(unsigned char)110, (char *)"Satire"}, 
        {(unsigned char)111, (char *)"Slow Jam"}, 
        {(unsigned char)112, (char *)"Club"}, 
        {(unsigned char)113, (char *)"Tango"}, 
        {(unsigned char)114, (char *)"Samba"}, 
        {(unsigned char)115, (char *)"Folklore"}, 
        {(unsigned char)116, (char *)"Ballad"}, 
        {(unsigned char)117, (char *)"Power Ballad"}, 
        {(unsigned char)118, (char *)"Rhytmic Soul"}, 
        {(unsigned char)119, (char *)"Freestyle"}, 
        {(unsigned char)120, (char *)"Duet"}, 
        {(unsigned char)121, (char *)"Punk Rock"}, 
        {(unsigned char)122, (char *)"Drum Solo"}, 
        {(unsigned char)123, (char *)"Acapella"}, 
        {(unsigned char)124, (char *)"Euro-House"}, 
        {(unsigned char)125, (char *)"Dance Hall"}, 
        {(unsigned char)126, (char *)"Goa"}, 
        {(unsigned char)127, (char *)"Drum & Bass"}, 
        {(unsigned char)128, (char *)"Club-House"}, 
        {(unsigned char)129, (char *)"Hardcore"}, 
        {(unsigned char)130, (char *)"Terror"}, 
        {(unsigned char)131, (char *)"Indie"}, 
        {(unsigned char)132, (char *)"BritPop"}, 
        {(unsigned char)133, (char *)"Negerpunk"}, 
        {(unsigned char)134, (char *)"Polsk Punk"}, 
        {(unsigned char)135, (char *)"Beat"}, 
        {(unsigned char)136, (char *)"Christian Gangsta Rap"}, 
        {(unsigned char)137, (char *)"Heavy Metal"}, 
        {(unsigned char)138, (char *)"Black Metal"}, 
        {(unsigned char)139, (char *)"Crossover"}, 
        {(unsigned char)140, (char *)"Contemporary Christian"}, 
        {(unsigned char)141, (char *)"Christian Rock"}, 
        {(unsigned char)142, (char *)"Merengue"}, 
        {(unsigned char)143, (char *)"Salsa"}, 
        {(unsigned char)144, (char *)"Trash Metal"}, 
        {(unsigned char)255, (char *)((void *)0)}};
#line 198 "/home/june/repo/benchmarks/collector/temp/id3tool-1.2a/id3.c"
extern int id3_readtag(FILE *fin , id3tag_t *id3tag ) 
{ 
  int n ;
  long tmp ;
  size_t tmp___0 ;
  int tmp___1 ;

  {
#line 202
  if ((unsigned long )((void *)0) == (unsigned long )fin) {
#line 203
    return (-1);
  } else
#line 202
  if ((unsigned long )((void *)0) == (unsigned long )id3tag) {
#line 203
    return (-1);
  }
  {
#line 205
  fseek(fin, 0L, 2);
#line 206
  tmp = ftell(fin);
#line 206
  fseek(fin, tmp - 128L, 0);
#line 207
  tmp___0 = fread((void */* __restrict  */)id3tag, (size_t )128, (size_t )1, (FILE */* __restrict  */)fin);
#line 207
  n = (int )tmp___0;
  }
#line 208
  if (1 != n) {
#line 209
    return (1);
  } else {
    {
#line 208
    tmp___1 = strncmp((char const   *)(id3tag->magic), "TAG", (size_t )3);
    }
#line 208
    if (tmp___1) {
#line 209
      return (1);
    }
  }
#line 211
  return (0);
}
}
#line 214 "/home/june/repo/benchmarks/collector/temp/id3tool-1.2a/id3.c"
extern int id3_appendtag(FILE *fout , id3tag_t *id3tag ) 
{ 


  {
#line 217
  if ((unsigned long )((void *)0) == (unsigned long )fout) {
#line 218
    return (-1);
  } else
#line 217
  if ((unsigned long )((void *)0) == (unsigned long )id3tag) {
#line 218
    return (-1);
  }
  {
#line 220
  fseek(fout, 0L, 2);
#line 222
  fwrite((void const   */* __restrict  */)id3tag, (size_t )128, (size_t )1, (FILE */* __restrict  */)fout);
  }
#line 224
  return (0);
}
}
#line 227 "/home/june/repo/benchmarks/collector/temp/id3tool-1.2a/id3.c"
extern int id3_replacetag(FILE *fout , id3tag_t *id3tag ) 
{ 
  long tmp ;

  {
#line 230
  if ((unsigned long )((void *)0) == (unsigned long )fout) {
#line 231
    return (-1);
  } else
#line 230
  if ((unsigned long )((void *)0) == (unsigned long )id3tag) {
#line 231
    return (-1);
  }
  {
#line 233
  fseek(fout, 0L, 2);
#line 234
  tmp = ftell(fout);
#line 234
  fseek(fout, tmp - 128L, 0);
#line 236
  fwrite((void const   */* __restrict  */)id3tag, (size_t )128, (size_t )1, (FILE */* __restrict  */)fout);
  }
#line 238
  return (0);
}
}
#line 241 "/home/june/repo/benchmarks/collector/temp/id3tool-1.2a/id3.c"
extern void id3_cleartag(id3tag_t *id3tag ) 
{ 


  {
#line 244
  if ((unsigned long )((void *)0) == (unsigned long )id3tag) {
#line 245
    return;
  }
  {
#line 247
  memset((void *)id3tag, 0, sizeof(*id3tag));
#line 248
  strncpy((char */* __restrict  */)(id3tag->magic), (char const   */* __restrict  */)"TAG",
          (size_t )3);
#line 249
  id3tag->style = (unsigned char)255;
  }
#line 250
  return;
}
}
#line 252 "/home/june/repo/benchmarks/collector/temp/id3tool-1.2a/id3.c"
extern char *id3_findstyle(int styleid ) 
{ 
  int ctr ;

  {
#line 256
  ctr = 0;
  {
#line 256
  while (1) {
    while_continue: /* CIL Label */ ;
#line 256
    if (! ((unsigned long )id3_styles[ctr].name != (unsigned long )((void *)0))) {
#line 256
      goto while_break;
    }
#line 257
    if ((int )id3_styles[ctr].styleid == styleid) {
#line 258
      return (id3_styles[ctr].name);
    }
#line 256
    ctr ++;
  }
  while_break: /* CIL Label */ ;
  }
#line 261
  return ((char *)"Unknown Style");
}
}

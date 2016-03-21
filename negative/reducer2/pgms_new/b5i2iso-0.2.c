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
#line 180 "/usr/include/stdio.h"
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) rename)(char const   *__old ,
                                                                             char const   *__new ) ;
#line 237
extern int fclose(FILE *__stream ) ;
#line 272
extern FILE *fopen(char const   * __restrict  __filename , char const   * __restrict  __modes ) ;
#line 356
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
#line 362
extern int printf(char const   * __restrict  __format  , ...) ;
#line 709
extern size_t fread(void * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream ) ;
#line 715
extern size_t fwrite(void const   * __restrict  __ptr , size_t __size , size_t __n ,
                     FILE * __restrict  __s ) ;
#line 749
extern int fseek(FILE *__stream , long __off , int __whence ) ;
#line 754
extern long ftell(FILE *__stream ) ;
#line 543 "/usr/include/stdlib.h"
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
#line 69 "/usr/include/string.h"
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) memcmp)(void const   *__s1 ,
                                                                                               void const   *__s2 ,
                                                                                               size_t __n )  __attribute__((__pure__)) ;
#line 129
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2), __leaf__)) strcpy)(char * __restrict  __dest ,
                                                                                                 char const   * __restrict  __src ) ;
#line 144
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strcmp)(char const   *__s1 ,
                                                                                               char const   *__s2 )  __attribute__((__pure__)) ;
#line 399
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
#line 30 "/home/june/collector/temp/b5i2iso-0.2/./src/b5i2iso.c"
void cuesheets(char *destfilename ) 
{ 
  char destfilecue[1024] ;
  char destfilebin[1024] ;
  FILE *fcue ;
  size_t tmp ;
  size_t tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  {
#line 35
  strcpy((char */* __restrict  */)(destfilecue), (char const   */* __restrict  */)destfilename);
#line 36
  strcpy((char */* __restrict  */)(destfilebin), (char const   */* __restrict  */)destfilename);
#line 38
  tmp = strlen((char const   *)destfilename);
#line 38
  strcpy((char */* __restrict  */)((destfilecue + tmp) - 4), (char const   */* __restrict  */)".cue");
#line 39
  tmp___0 = strlen((char const   *)destfilename);
#line 39
  strcpy((char */* __restrict  */)((destfilebin + tmp___0) - 4), (char const   */* __restrict  */)".bin");
#line 40
  fcue = fopen((char const   */* __restrict  */)(destfilecue), (char const   */* __restrict  */)"w");
#line 42
  fprintf((FILE */* __restrict  */)fcue, (char const   */* __restrict  */)"FILE \"%s\" BINARY\n",
          destfilebin);
#line 43
  fprintf((FILE */* __restrict  */)fcue, (char const   */* __restrict  */)"TRACK 1 MODE1/2352\n");
#line 44
  fprintf((FILE */* __restrict  */)fcue, (char const   */* __restrict  */)"INDEX 1 00:00:00\n");
#line 46
  tmp___1 = rename((char const   *)destfilename, (char const   *)(destfilebin));
  }
#line 46
  if (tmp___1) {
#line 46
    tmp___2 = 0;
  } else {
#line 46
    tmp___2 = 1;
  }
#line 46
  if (tmp___2 == 0) {
    {
#line 48
    printf((char const   */* __restrict  */)"\nSorry, I don\'t create %s,\nbecause is in use",
           destfilebin);
#line 49
    printf((char const   */* __restrict  */)" or this file exists\n\n");
    }
  } else {
    {
#line 51
    printf((char const   */* __restrict  */)"Create Bin       : %s\n", destfilebin);
    }
  }
  {
#line 53
  printf((char const   */* __restrict  */)"Create Cuesheets : %s\n", destfilecue);
#line 55
  fclose(fcue);
  }
#line 56
  return;
}
}
#line 58 "/home/june/collector/temp/b5i2iso-0.2/./src/b5i2iso.c"
void main_percent(int percent_bar ) 
{ 
  int progress_bar ;
  int progress_space ;

  {
  {
#line 62
  printf((char const   */* __restrict  */)"%d%% [:", percent_bar);
#line 63
  progress_bar = 1;
  }
  {
#line 63
  while (1) {
    while_continue: /* CIL Label */ ;
#line 63
    if (! (progress_bar <= percent_bar / 5)) {
#line 63
      goto while_break;
    }
    {
#line 63
    printf((char const   */* __restrict  */)"=");
#line 63
    progress_bar ++;
    }
  }
  while_break: /* CIL Label */ ;
  }
  {
#line 64
  printf((char const   */* __restrict  */)">");
#line 65
  progress_space = 0;
  }
  {
#line 65
  while (1) {
    while_continue___0: /* CIL Label */ ;
#line 65
    if (! (progress_space < 20 - progress_bar)) {
#line 65
      goto while_break___0;
    }
    {
#line 65
    printf((char const   */* __restrict  */)" ");
#line 65
    progress_space ++;
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  {
#line 66
  printf((char const   */* __restrict  */)":]\r");
  }
#line 67
  return;
}
}
#line 69 "/home/june/collector/temp/b5i2iso-0.2/./src/b5i2iso.c"
void usage(void) 
{ 


  {
  {
#line 70
  printf((char const   */* __restrict  */)"b5i2iso v%s by Salvatore Santagati\n",
         "0.2");
#line 71
  printf((char const   */* __restrict  */)"Web     : http//b5i2iso.berlios.de\n");
#line 72
  printf((char const   */* __restrict  */)"Email   : salvatore.santagati@gmail.com\n");
#line 73
  printf((char const   */* __restrict  */)"Irc     : irc.freenode.net #ignus\n");
#line 74
  printf((char const   */* __restrict  */)"Note\t: Happy Birthday salsan !!!\n");
#line 75
  printf((char const   */* __restrict  */)"License : released under the GNU GPL v2 or later\n\n");
#line 76
  printf((char const   */* __restrict  */)"Usage :\n");
#line 77
  printf((char const   */* __restrict  */)"b5i2iso [OPTION] [BASENAME.b*i]\n\n");
#line 78
  printf((char const   */* __restrict  */)"OPTION\n");
#line 79
  printf((char const   */* __restrict  */)"\t--cue  Generate cue file\n");
#line 80
  printf((char const   */* __restrict  */)"\t--help display this notice\n\n");
  }
#line 81
  return;
}
}
#line 83 "/home/june/collector/temp/b5i2iso-0.2/./src/b5i2iso.c"
int main(int argc , char **argv ) 
{ 
  int seek_ecc ;
  int sector_size ;
  int seek_head ;
  int sector_data ;
  int cue ;
  int cue_mode ;
  int sub ;
  int bw ;
  int dump ;
  double size_iso ;
  double write_iso ;
  long percent ;
  long i ;
  long source_length ;
  char buf[2448] ;
  char destfilename[2354] ;
  FILE *fdest ;
  FILE *fsource ;
  char SYNC_HEADER_B5I_96[16] ;
  char SYNC_HEADER_B5I[16] ;
  char SYNC_HEADER_BWI[16] ;
  char ISO_9660[8] ;
  char BWI_IMG[16] ;
  char B5I_IMG[16] ;
  int tmp ;
  int tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  size_t tmp___4 ;
  int tmp___5 ;
  size_t tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  long tmp___13 ;
  int tmp___14 ;

  {
#line 86
  cue = 0;
#line 86
  cue_mode = 0;
#line 86
  sub = 1;
#line 86
  bw = 1;
#line 88
  percent = 0L;
#line 93
  SYNC_HEADER_B5I_96[0] = (char)-1;
#line 93
  SYNC_HEADER_B5I_96[1] = (char)-1;
#line 93
  SYNC_HEADER_B5I_96[2] = (char)-1;
#line 93
  SYNC_HEADER_B5I_96[3] = (char)-1;
#line 93
  SYNC_HEADER_B5I_96[4] = (char)-1;
#line 93
  SYNC_HEADER_B5I_96[5] = (char)-1;
#line 93
  SYNC_HEADER_B5I_96[6] = (char)-1;
#line 93
  SYNC_HEADER_B5I_96[7] = (char)-1;
#line 93
  SYNC_HEADER_B5I_96[8] = (char)-1;
#line 93
  SYNC_HEADER_B5I_96[9] = (char)-1;
#line 93
  SYNC_HEADER_B5I_96[10] = (char)-1;
#line 93
  SYNC_HEADER_B5I_96[11] = (char)-1;
#line 93
  SYNC_HEADER_B5I_96[12] = (char)65;
#line 93
  SYNC_HEADER_B5I_96[13] = (char)1;
#line 93
  SYNC_HEADER_B5I_96[14] = (char)0;
#line 93
  SYNC_HEADER_B5I_96[15] = (char)0;
#line 94
  SYNC_HEADER_B5I[0] = (char)0;
#line 94
  SYNC_HEADER_B5I[1] = (char)-1;
#line 94
  SYNC_HEADER_B5I[2] = (char)-1;
#line 94
  SYNC_HEADER_B5I[3] = (char)-1;
#line 94
  SYNC_HEADER_B5I[4] = (char)-1;
#line 94
  SYNC_HEADER_B5I[5] = (char)-1;
#line 94
  SYNC_HEADER_B5I[6] = (char)-1;
#line 94
  SYNC_HEADER_B5I[7] = (char)-1;
#line 94
  SYNC_HEADER_B5I[8] = (char)-1;
#line 94
  SYNC_HEADER_B5I[9] = (char)-1;
#line 94
  SYNC_HEADER_B5I[10] = (char)-1;
#line 94
  SYNC_HEADER_B5I[11] = (char)0;
#line 94
  SYNC_HEADER_B5I[12] = (char)0;
#line 94
  SYNC_HEADER_B5I[13] = (char)0;
#line 94
  SYNC_HEADER_B5I[14] = (char)1;
#line 94
  SYNC_HEADER_B5I[15] = (char)1;
#line 96
  SYNC_HEADER_BWI[0] = (char)0;
#line 96
  SYNC_HEADER_BWI[1] = (char)-1;
#line 96
  SYNC_HEADER_BWI[2] = (char)-1;
#line 96
  SYNC_HEADER_BWI[3] = (char)-1;
#line 96
  SYNC_HEADER_BWI[4] = (char)-1;
#line 96
  SYNC_HEADER_BWI[5] = (char)-1;
#line 96
  SYNC_HEADER_BWI[6] = (char)-1;
#line 96
  SYNC_HEADER_BWI[7] = (char)-1;
#line 96
  SYNC_HEADER_BWI[8] = (char)-1;
#line 96
  SYNC_HEADER_BWI[9] = (char)-1;
#line 96
  SYNC_HEADER_BWI[10] = (char)-1;
#line 96
  SYNC_HEADER_BWI[11] = (char)0;
#line 96
  SYNC_HEADER_BWI[12] = (char)0;
#line 96
  SYNC_HEADER_BWI[13] = (char)2;
#line 96
  SYNC_HEADER_BWI[14] = (char)1;
#line 96
  SYNC_HEADER_BWI[15] = (char)1;
#line 98
  ISO_9660[0] = (char)1;
#line 98
  ISO_9660[1] = (char)67;
#line 98
  ISO_9660[2] = (char)68;
#line 98
  ISO_9660[3] = (char)48;
#line 98
  ISO_9660[4] = (char)48;
#line 98
  ISO_9660[5] = (char)49;
#line 98
  ISO_9660[6] = (char)1;
#line 98
  ISO_9660[7] = (char)0;
#line 100
  BWI_IMG[0] = (char)0;
#line 100
  BWI_IMG[1] = (char)0;
#line 100
  BWI_IMG[2] = (char)0;
#line 100
  BWI_IMG[3] = (char)0;
#line 100
  BWI_IMG[4] = (char)0;
#line 100
  BWI_IMG[5] = (char)0;
#line 100
  BWI_IMG[6] = (char)0;
#line 100
  BWI_IMG[7] = (char)0;
#line 100
  BWI_IMG[8] = (char)0;
#line 100
  BWI_IMG[9] = (char)0;
#line 100
  BWI_IMG[10] = (char)0;
#line 100
  BWI_IMG[11] = (char)-112;
#line 100
  BWI_IMG[12] = (char)0;
#line 100
  BWI_IMG[13] = (char)-63;
#line 100
  BWI_IMG[14] = (char)0;
#line 100
  BWI_IMG[15] = (char)18;
#line 101
  B5I_IMG[0] = (char)0;
#line 101
  B5I_IMG[1] = (char)0;
#line 101
  B5I_IMG[2] = (char)0;
#line 101
  B5I_IMG[3] = (char)0;
#line 101
  B5I_IMG[4] = (char)0;
#line 101
  B5I_IMG[5] = (char)0;
#line 101
  B5I_IMG[6] = (char)0;
#line 101
  B5I_IMG[7] = (char)0;
#line 101
  B5I_IMG[8] = (char)0;
#line 101
  B5I_IMG[9] = (char)0;
#line 101
  B5I_IMG[10] = (char)0;
#line 101
  B5I_IMG[11] = (char)-112;
#line 101
  B5I_IMG[12] = (char)0;
#line 101
  B5I_IMG[13] = (char)72;
#line 101
  B5I_IMG[14] = (char)0;
#line 101
  B5I_IMG[15] = (char)-40;
#line 103
  if (argc < 2) {
    {
#line 105
    usage();
#line 106
    exit(1);
    }
  } else {
#line 110
    i = 0L;
    {
#line 110
    while (1) {
      while_continue: /* CIL Label */ ;
#line 110
      if (! (i < (long )argc)) {
#line 110
        goto while_break;
      }
      {
#line 112
      tmp = strcmp((char const   *)*(argv + i), "--help");
      }
#line 112
      if (! tmp) {
        {
#line 114
        usage();
#line 115
        exit(0);
        }
      }
      {
#line 118
      tmp___0 = strcmp((char const   *)*(argv + i), "--cue");
      }
#line 118
      if (! tmp___0) {
#line 118
        cue = 1;
      }
#line 110
      i ++;
    }
    while_break: /* CIL Label */ ;
    }
#line 121
    if (cue == 1) {
#line 121
      if (argc <= 2) {
        {
#line 123
        usage();
#line 124
        exit(1);
        }
      }
    }
#line 127
    if (argc >= 3 + cue) {
      {
#line 127
      strcpy((char */* __restrict  */)(destfilename), (char const   */* __restrict  */)*(argv + (2 + cue)));
      }
    } else {
      {
#line 131
      strcpy((char */* __restrict  */)(destfilename), (char const   */* __restrict  */)*(argv + (1 + cue)));
#line 132
      tmp___3 = strlen((char const   *)*(argv + (1 + cue)));
      }
#line 132
      if (tmp___3 < 5UL) {
        {
#line 134
        tmp___1 = strlen((char const   *)*(argv + (1 + cue)));
#line 134
        strcpy((char */* __restrict  */)(destfilename + tmp___1), (char const   */* __restrict  */)".iso");
        }
      } else {
        {
#line 132
        tmp___4 = strlen((char const   *)*(argv + (1 + cue)));
#line 132
        tmp___5 = strcmp((char const   *)((destfilename + tmp___4) - 4), ".B5I");
        }
#line 132
        if (tmp___5) {
          {
#line 132
          tmp___6 = strlen((char const   *)*(argv + (1 + cue)));
#line 132
          tmp___7 = strcmp((char const   *)((destfilename + tmp___6) - 4), ".BWI");
          }
#line 132
          if (tmp___7) {
            {
#line 134
            tmp___1 = strlen((char const   *)*(argv + (1 + cue)));
#line 134
            strcpy((char */* __restrict  */)(destfilename + tmp___1), (char const   */* __restrict  */)".iso");
            }
          } else {
            {
#line 136
            tmp___2 = strlen((char const   *)*(argv + (1 + cue)));
#line 136
            strcpy((char */* __restrict  */)((destfilename + tmp___2) - 4), (char const   */* __restrict  */)".iso");
            }
          }
        } else {
          {
#line 136
          tmp___2 = strlen((char const   *)*(argv + (1 + cue)));
#line 136
          strcpy((char */* __restrict  */)((destfilename + tmp___2) - 4), (char const   */* __restrict  */)".iso");
          }
        }
      }
    }
    {
#line 141
    fsource = fopen((char const   */* __restrict  */)*(argv + (1 + cue)), (char const   */* __restrict  */)"rb");
    }
#line 141
    if (fsource) {
      {
#line 143
      fseek(fsource, 32768L, 1);
#line 144
      fread((void */* __restrict  */)(buf), sizeof(char ), (size_t )8, (FILE */* __restrict  */)fsource);
#line 146
      tmp___14 = memcmp((void const   *)(ISO_9660), (void const   *)(buf), (size_t )8);
      }
#line 146
      if (tmp___14) {
        {
#line 148
        fseek(fsource, 2336L, 0);
#line 150
        fread((void */* __restrict  */)(buf), sizeof(char ), (size_t )16, (FILE */* __restrict  */)fsource);
#line 152
        tmp___8 = memcmp((void const   *)(B5I_IMG), (void const   *)(buf), (size_t )16);
        }
#line 152
        if (! tmp___8) {
#line 152
          dump = 150;
        }
        {
#line 153
        tmp___9 = memcmp((void const   *)(BWI_IMG), (void const   *)(buf), (size_t )16);
        }
#line 153
        if (! tmp___9) {
#line 153
          dump = 0;
        }
#line 156
        if (dump == 0) {
#line 156
          goto _L___0;
        } else
#line 156
        if (dump == 150) {
          _L___0: /* CIL Label */ 
          {
#line 158
          fseek(fsource, 0L, 2);
#line 159
          fseek(fsource, 2352L, 0);
#line 160
          fread((void */* __restrict  */)(buf), sizeof(char ), (size_t )16, (FILE */* __restrict  */)fsource);
#line 164
          tmp___12 = memcmp((void const   *)(SYNC_HEADER_B5I_96), (void const   *)(buf),
                            (size_t )16);
          }
#line 164
          if (tmp___12) {
            {
#line 187
            tmp___10 = memcmp((void const   *)(SYNC_HEADER_BWI), (void const   *)(buf),
                              (size_t )16);
            }
#line 187
            if (tmp___10) {
              {
#line 187
              tmp___11 = memcmp((void const   *)(SYNC_HEADER_B5I), (void const   *)(buf),
                                (size_t )16);
              }
#line 187
              if (tmp___11) {
                {
#line 209
                printf((char const   */* __restrict  */)"Sorry I don\'t know this format :(\n");
#line 210
                fclose(fsource);
#line 211
                exit(1);
                }
              } else
              _L: /* CIL Label */ 
#line 190
              if (cue == 1) {
#line 191
                cue_mode = 1;
#line 192
                sub = 0;
#line 193
                seek_ecc = 0;
#line 194
                sector_size = 2352;
#line 195
                sector_data = 2352;
#line 196
                seek_head = 0;
              } else {
#line 201
                seek_ecc = 288;
#line 202
                sector_size = 2352;
#line 203
                sector_data = 2048;
#line 204
                seek_head = 16;
              }
            } else {
#line 187
              goto _L;
            }
          } else {
            {
#line 166
            printf((char const   */* __restrict  */)"BAD IMAGE BLINDWRITE\n");
            }
#line 167
            if (cue == 1) {
#line 168
              cue_mode = 1;
#line 170
              seek_ecc = 96;
#line 171
              sector_size = 2448;
#line 172
              sector_data = 2352;
#line 173
              seek_head = 0;
            } else {
#line 179
              seek_ecc = 384;
#line 180
              sector_size = 2448;
#line 181
              sector_data = 2048;
#line 182
              seek_head = 16;
#line 183
              cue_mode = 1;
            }
          }
          {
#line 214
          fdest = fopen((char const   */* __restrict  */)(destfilename), (char const   */* __restrict  */)"wb");
#line 215
          fseek(fsource, 0L, 2);
#line 216
          tmp___13 = ftell(fsource);
#line 216
          source_length = tmp___13 / (long )sector_size;
#line 217
          size_iso = (double )((int )(source_length * (long )sector_data));
#line 218
          fseek(fsource, 0L, 0);
#line 220
          i = 0L;
          }
          {
#line 220
          while (1) {
            while_continue___0: /* CIL Label */ ;
#line 220
            if (! (i < source_length)) {
#line 220
              goto while_break___0;
            }
            {
#line 222
            fseek(fsource, (long )seek_head, 1);
#line 223
            fread((void */* __restrict  */)(buf), sizeof(char ), (size_t )sector_data,
                  (FILE */* __restrict  */)fsource);
            }
#line 224
            if (bw > dump) {
              {
#line 224
              fwrite((void const   */* __restrict  */)(buf), sizeof(char ), (size_t )sector_data,
                     (FILE */* __restrict  */)fdest);
              }
            }
            {
#line 225
            fseek(fsource, (long )seek_ecc, 1);
#line 226
            write_iso = (double )((int )((long )sector_data * i));
            }
#line 227
            if (i != 0L) {
#line 227
              percent = (long )((int )((write_iso * (double )100) / size_iso));
            }
#line 228
            if (bw > dump) {
              {
#line 228
              main_percent((int )percent);
              }
            }
#line 229
            bw ++;
#line 220
            i ++;
          }
          while_break___0: /* CIL Label */ ;
          }
          {
#line 232
          printf((char const   */* __restrict  */)"100%%[:====================:]\n");
#line 234
          fclose(fdest);
#line 235
          fclose(fsource);
          }
#line 237
          if (cue == 1) {
            {
#line 238
            cuesheets(destfilename);
            }
          } else {
            {
#line 240
            printf((char const   */* __restrict  */)"Create iso9660 : %s\n", destfilename);
            }
          }
          {
#line 243
          exit(0);
          }
        }
        {
#line 246
        printf((char const   */* __restrict  */)"Sorry This file is not B5I or BWI image\n");
#line 247
        fclose(fsource);
#line 248
        exit(1);
        }
      } else {
        {
#line 252
        printf((char const   */* __restrict  */)"This is file iso9660 ;)\n");
        }
      }
      {
#line 253
      fclose(fsource);
#line 254
      exit(0);
      }
    } else {
      {
#line 257
      printf((char const   */* __restrict  */)"%s : No such file\n", *(argv + (1 + cue)));
      }
    }
    {
#line 258
    exit(1);
    }
  }
}
}
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
#line 38 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
typedef unsigned char u8;
#line 39 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
typedef unsigned short u16;
#line 40 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
typedef unsigned int u32;
#line 43 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
struct pll_block {
   u8 clock_chip_type ;
   u8 struct_size ;
   u8 accelerator_entry ;
   u8 VGA_entry ;
   u16 VGA_table_offset ;
   u16 POST_table_offset ;
   u16 XCLK ;
   u16 MCLK ;
   u8 num_PLL_blocks ;
   u8 size_PLL_blocks ;
   u16 PCLK_ref_freq ;
   u16 PCLK_ref_divider ;
   u32 PCLK_min_freq ;
   u32 PCLK_max_freq ;
   u16 MCLK_ref_freq ;
   u16 MCLK_ref_divider ;
   u32 MCLK_min_freq ;
   u32 MCLK_max_freq ;
   u16 XCLK_ref_freq ;
   u16 XCLK_ref_divider ;
   u32 XCLK_min_freq ;
   u32 XCLK_max_freq ;
} __attribute__((__packed__)) ;
#line 69 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
struct pll_data {
   u8 M ;
   u8 Nm ;
   u8 Ns ;
   u8 X ;
} __attribute__((__packed__)) ;
#line 77 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
struct mem_t {
   u16 reg ;
   u32 mask ;
   u8 shift ;
   u8 offset ;
   u16 value ;
   char *description ;
};
#line 106 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
struct rovclock_data {
   u32 pci_id ;
   u32 pci_bus ;
   u32 pci_dev ;
   u32 iobase ;
   u32 xtal ;
   u32 cfreq ;
   u32 mfreq ;
   u32 ref_div ;
   struct pll_data pllreg ;
   struct pll_block pll ;
   u32 mem_size ;
   u8 mem_channels ;
   u8 mem_cdch_only ;
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
#line 425
extern int fscanf(FILE * __restrict  __stream , char const   * __restrict  __format 
                  , ...)  __asm__("__isoc99_fscanf")  ;
#line 531
extern int fgetc(FILE *__stream ) ;
#line 858
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) fileno)(FILE *__stream ) ;
#line 147 "/usr/include/stdlib.h"
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) atoi)(char const   *__nptr )  __attribute__((__pure__)) ;
#line 46 "/usr/include/string.h"
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2), __leaf__)) memcpy)(void * __restrict  __dest ,
                                                                                                 void const   * __restrict  __src ,
                                                                                                 size_t __n ) ;
#line 147
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strncmp)(char const   *__s1 ,
                                                                                                char const   *__s2 ,
                                                                                                size_t __n )  __attribute__((__pure__)) ;
#line 236
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strchr)(char const   *__s ,
                                                                                               int __c )  __attribute__((__pure__)) ;
#line 399
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
#line 57 "/usr/include/getopt.h"
extern char *optarg ;
#line 150
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) getopt)(int ___argc ,
                                                                             char * const  *___argv ,
                                                                             char const   *__shortopts ) ;
#line 38 "/usr/include/x86_64-linux-gnu/sys/io.h"
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) iopl)(int __level ) ;
#line 78 "/usr/include/x86_64-linux-gnu/sys/io.h"
__inline static unsigned int inl(unsigned short __port ) 
{ 
  unsigned int _v ;

  {
#line 83
  __asm__  volatile   ("inl %w1,%0": "=a" (_v): "Nd" (__port));
#line 84
  return (_v);
}
}
#line 95 "/usr/include/x86_64-linux-gnu/sys/io.h"
__inline static void outb(unsigned char __value , unsigned short __port ) 
{ 


  {
#line 98
  __asm__  volatile   ("outb %b0,%w1": : "a" (__value), "Nd" (__port));
#line 99
  return;
}
}
#line 122 "/usr/include/x86_64-linux-gnu/sys/io.h"
__inline static void outl(unsigned int __value , unsigned short __port ) 
{ 


  {
#line 125
  __asm__  volatile   ("outl %0,%w1": : "a" (__value), "Nd" (__port));
#line 126
  return;
}
}
#line 57 "/usr/include/x86_64-linux-gnu/sys/mman.h"
extern  __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) mmap)(void *__addr ,
                                                                             size_t __len ,
                                                                             int __prot ,
                                                                             int __flags ,
                                                                             int __fd ,
                                                                             __off_t __offset ) ;
#line 76
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) munmap)(void *__addr ,
                                                                             size_t __len ) ;
#line 86 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
struct mem_t mem_timings[16]  = 
#line 86 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
  {      {(u16 )324, (u32 )7, (u8 )0, (u8 )3, (u16 )3, (char *)"tRcdRD:  "}, 
        {(u16 )324, (u32 )112, (u8 )4, (u8 )1, (u16 )2, (char *)"tRcdWR:  "}, 
        {(u16 )324, (u32 )1792, (u8 )8, (u8 )3, (u16 )3, (char *)"tRP:     "}, 
        {(u16 )324, (u32 )30720, (u8 )11, (u8 )6, (u16 )5, (char *)"tRAS:    "}, 
        {(u16 )324, (u32 )229376, (u8 )15, (u8 )1, (u16 )2, (char *)"tRRD:    "}, 
        {(u16 )324, (u32 )786432, (u8 )18, (u8 )1, (u16 )2, (char *)"tR2W-CL: "}, 
        {(u16 )324, (u32 )7340032, (u8 )20, (u8 )1, (u16 )2, (char *)"tWR:     "}, 
        {(u16 )324, (u32 )117440512, (u8 )24, (u8 )0, (u16 )2, (char *)"tW2R:    "}, 
        {(u16 )324, (u32 )134217728, (u8 )27, (u8 )0, (u16 )1, (char *)"tW2Rsb:  "}, 
        {(u16 )324, (u32 )805306368, (u8 )28, (u8 )1, (u16 )1, (char *)"tR2R:    "}, 
        {(u16 )376, (u32 )61440, (u8 )12, (u8 )13, (u16 )7, (char *)"tRFC:    "}, 
        {(u16 )344, (u32 )983040, (u8 )16, (u8 )0, (u16 )2, (char *)"tWL(0.5):"}, 
        {(u16 )344, (u32 )7340032, (u8 )20, (u8 )0, (u16 )4, (char *)"tCAS:    "}, 
        {(u16 )344, (u32 )8388608, (u8 )23, (u8 )0, (u16 )0, (char *)"tCMD:    "}, 
        {(u16 )344, (u32 )16777216, (u8 )24, (u8 )0, (u16 )1, (char *)"tSTR:    "}, 
        {(u16 )0, (u32 )0, (u8 )0, (u8 )0, (u16 )0, (char *)""}};
#line 123 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
unsigned int pci_read(u8 bus , u8 device , u8 func , u8 addr ) 
{ 
  unsigned int tmp ;

  {
  {
#line 125
  outl(((2147483648U | (unsigned int )((int )bus << 16)) | (unsigned int )(((((int )device & 31) << 3) | ((int )func & 7)) << 8)) | (unsigned int )((int )addr & -4),
       (unsigned short)3320);
#line 128
  tmp = inl((unsigned short)3324);
  }
#line 128
  return (tmp);
}
}
#line 131 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
void pci_write(u8 bus , u8 device , u8 func , u8 addr , u32 data ) 
{ 


  {
  {
#line 133
  outl(((2147483648U | (unsigned int )((int )bus << 16)) | (unsigned int )(((((int )device & 31) << 3) | ((int )func & 7)) << 8)) | (unsigned int )((int )addr & -4),
       (unsigned short)3320);
#line 136
  outl(data, (unsigned short)3324);
  }
#line 137
  return;
}
}
#line 140 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
u32 reg_read(struct rovclock_data *rovclock , u32 addr ) 
{ 
  unsigned int tmp ;

  {
  {
#line 142
  tmp = inl((unsigned short )(rovclock->iobase + addr));
  }
#line 142
  return (tmp);
}
}
#line 145 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
void reg_write(struct rovclock_data *rovclock , u32 addr , u32 data ) 
{ 


  {
  {
#line 147
  outl(data, (unsigned short )(rovclock->iobase + addr));
  }
#line 148
  return;
}
}
#line 151 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
u32 pll_read(struct rovclock_data *rovclock , u32 addr ) 
{ 
  unsigned int tmp ;

  {
  {
#line 153
  outb((unsigned char )(addr & 63U), (unsigned short )(rovclock->iobase + 8U));
#line 154
  tmp = inl((unsigned short )(rovclock->iobase + 12U));
  }
#line 154
  return (tmp);
}
}
#line 157 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
void pll_write(struct rovclock_data *rovclock , u32 addr , u32 data ) 
{ 


  {
  {
#line 159
  outb((unsigned char )((addr & 63U) | 128U), (unsigned short )(rovclock->iobase + 8U));
#line 160
  outl(data, (unsigned short )(rovclock->iobase + 12U));
  }
#line 161
  return;
}
}
#line 164 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
u32 mm_read(struct rovclock_data *rovclock , u32 addr ) 
{ 
  unsigned int tmp ;

  {
  {
#line 166
  outl(addr, (unsigned short )rovclock->iobase);
#line 167
  tmp = inl((unsigned short )(rovclock->iobase + 4U));
  }
#line 167
  return (tmp);
}
}
#line 170 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
void mm_write(struct rovclock_data *rovclock , u32 addr , u32 data ) 
{ 


  {
  {
#line 172
  outl(addr, (unsigned short )rovclock->iobase);
#line 173
  outl(data, (unsigned short )(rovclock->iobase + 4U));
  }
#line 174
  return;
}
}
#line 176 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
int round_div(int num , int den ) 
{ 


  {
#line 178
  return ((num + den / 2) / den);
}
}
#line 182 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
void usage(void) 
{ 


  {
  {
#line 184
  printf((char const   */* __restrict  */)"Usage: rovclock -i                 (info)\n");
#line 185
  printf((char const   */* __restrict  */)"                -c [MHz]           (set core clock)\n");
#line 186
  printf((char const   */* __restrict  */)"                -m [MHz]           (set mem clock)\n");
#line 187
  printf((char const   */* __restrict  */)"                -x [kHz]           (xtal frequency, default 2700)\n");
#line 188
  printf((char const   */* __restrict  */)"                -t [name]:[val]    (set memory timings)\n");
  }
#line 189
  return;
}
}
#line 192 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
void get_mem_info(struct rovclock_data *rovclock ) 
{ 
  u32 temp ;
  u8 count ;
  u32 tmp ;

  {
  {
#line 197
  rovclock->mem_size = reg_read(rovclock, (u32 )248);
#line 198
  temp = mm_read(rovclock, (u32 )320);
#line 199
  rovclock->mem_channels = (u8 )(temp & 3U);
  }
#line 200
  if (temp & 4U) {
#line 200
    rovclock->mem_cdch_only = (u8 )1;
  } else {
#line 200
    rovclock->mem_cdch_only = (u8 )0;
  }
#line 202
  count = (u8 )0;
  {
#line 202
  while (1) {
    while_continue: /* CIL Label */ ;
#line 202
    if (! ((int )mem_timings[count].reg != 0)) {
#line 202
      goto while_break;
    }
    {
#line 203
    tmp = mm_read(rovclock, (u32 )mem_timings[count].reg);
#line 203
    mem_timings[count].value = (u16 )((tmp & mem_timings[count].mask) >> (int )mem_timings[count].shift);
#line 202
    count = (u8 )((int )count + 1);
    }
  }
  while_break: /* CIL Label */ ;
  }
#line 204
  return;
}
}
#line 207 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
void mem_info(struct rovclock_data *rovclock ) 
{ 
  u8 count ;

  {
  {
#line 211
  printf((char const   */* __restrict  */)"Memory size: %d kB\n", rovclock->mem_size / 1024U);
#line 212
  printf((char const   */* __restrict  */)"Memory channels: %d, CD,CH only: %d\n",
         (int )rovclock->mem_channels, (int )rovclock->mem_cdch_only);
#line 214
  count = (u8 )0;
  }
  {
#line 214
  while (1) {
    while_continue: /* CIL Label */ ;
#line 214
    if (! ((int )mem_timings[count].reg != 0)) {
#line 214
      goto while_break;
    }
    {
#line 215
    printf((char const   */* __restrict  */)"%s %d\n", mem_timings[count].description,
           (int )mem_timings[count].value + (int )mem_timings[count].offset);
#line 214
    count = (u8 )((int )count + 1);
    }
  }
  while_break: /* CIL Label */ ;
  }
#line 216
  return;
}
}
#line 219 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
void mem_set_timings(struct rovclock_data *rovclock , char *string ) 
{ 
  u32 val ;
  u32 temp ;
  char *vp ;
  u8 count ;
  char *tmp ;
  int tmp___0 ;
  u32 tmp___1 ;
  size_t tmp___2 ;
  int tmp___3 ;

  {
  {
#line 225
  vp = strchr((char const   *)string, ':');
  }
#line 225
  if ((unsigned long )vp == (unsigned long )((void *)0)) {
#line 226
    return;
  }
#line 228
  if ((int )*(vp + 1) == 0) {
#line 229
    return;
  } else {
#line 231
    tmp = vp;
#line 231
    vp ++;
#line 231
    *tmp = (char )'\000';
  }
  {
#line 233
  tmp___0 = atoi((char const   *)vp);
#line 233
  val = (u32 )tmp___0;
#line 235
  count = (u8 )0;
  }
  {
#line 235
  while (1) {
    while_continue: /* CIL Label */ ;
#line 235
    if (! ((int )mem_timings[count].reg != 0)) {
#line 235
      goto while_break;
    }
    {
#line 236
    tmp___2 = strlen((char const   *)string);
#line 236
    tmp___3 = strncmp((char const   *)mem_timings[count].description, (char const   *)string,
                      tmp___2);
    }
#line 236
    if (! tmp___3) {
      {
#line 237
      tmp___1 = mm_read(rovclock, (u32 )mem_timings[count].reg);
#line 237
      temp = tmp___1 & ~ mem_timings[count].mask;
#line 238
      temp |= ((val - (u32 )mem_timings[count].offset) << (int )mem_timings[count].shift) & mem_timings[count].mask;
#line 239
      mm_write(rovclock, (u32 )mem_timings[count].reg, temp);
      }
#line 240
      return;
    }
#line 235
    count = (u8 )((int )count + 1);
  }
  while_break: /* CIL Label */ ;
  }
  {
#line 244
  fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s not found...\n",
          string);
  }
#line 245
  return;
}
}
#line 248 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
void pll_info(struct rovclock_data *rovclock ) 
{ 
  u32 tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
#line 251
  tmp = pll_read(rovclock, (u32 )3);
#line 251
  rovclock->ref_div = tmp & 1023U;
#line 254
  *((u32 *)(& rovclock->pllreg)) = pll_read(rovclock, (u32 )10);
#line 256
  tmp___0 = round_div((int )((u32 )rovclock->pllreg.Ns * rovclock->xtal), (int )rovclock->pllreg.M);
#line 256
  rovclock->cfreq = (u32 )tmp___0;
#line 257
  tmp___1 = round_div((int )((u32 )rovclock->pllreg.Nm * rovclock->xtal), (int )rovclock->pllreg.M);
#line 257
  rovclock->mfreq = (u32 )tmp___1;
#line 260
  printf((char const   */* __restrict  */)"XTAL: %d.%d MHz, RefDiv: %d\n\n", rovclock->xtal / 100U,
         rovclock->xtal % 100U, rovclock->ref_div);
#line 261
  printf((char const   */* __restrict  */)"Core: %d.%d MHz, Mem: %d.%d MHz\n", rovclock->cfreq / 100U,
         rovclock->cfreq % 100U, rovclock->mfreq / 100U, rovclock->mfreq % 100U);
  }
#line 265
  return;
}
}
#line 268 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
void pll_set_freq(struct rovclock_data *rovclock ) 
{ 
  int tmp ;
  int tmp___0 ;

  {
  {
#line 270
  *((u32 *)(& rovclock->pllreg)) = pll_read(rovclock, (u32 )10);
#line 273
  tmp = round_div((int )((rovclock->cfreq * 100U) * (u32 )rovclock->pllreg.M), (int )rovclock->xtal);
#line 273
  rovclock->pllreg.Ns = (u8 )tmp;
#line 274
  tmp___0 = round_div((int )((rovclock->mfreq * 100U) * (u32 )rovclock->pllreg.M),
                      (int )rovclock->xtal);
#line 274
  rovclock->pllreg.Nm = (u8 )tmp___0;
#line 278
  pll_write(rovclock, (u32 )10, *((u32 *)(& rovclock->pllreg)));
  }
#line 279
  return;
}
}
#line 282 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
int find_card(struct rovclock_data *rovclock ) 
{ 
  FILE *proc ;
  char temp ;
  u32 id ;
  unsigned int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  unsigned int tmp___2 ;
  u32 tmp___3 ;

  {
  {
#line 289
  proc = fopen((char const   */* __restrict  */)"/proc/bus/pci/devices", (char const   */* __restrict  */)"r");
  }
#line 289
  if ((unsigned long )proc != (unsigned long )((void *)0)) {
    {
#line 290
    while (1) {
      while_continue: /* CIL Label */ ;
      {
#line 290
      tmp___1 = fscanf((FILE */* __restrict  */)proc, (char const   */* __restrict  */)"%x\t%x",
                       & rovclock->pci_bus, & id);
      }
#line 290
      if (! (tmp___1 == 2)) {
#line 290
        goto while_break;
      }
#line 291
      if (id >> 16 == 4098U) {
        {
#line 292
        rovclock->pci_dev = (rovclock->pci_bus & 255U) >> 3;
#line 293
        rovclock->pci_bus >>= 8;
#line 294
        rovclock->pci_id = (id << 16) | (id >> 16);
#line 297
        tmp = pci_read((u8 )rovclock->pci_bus, (u8 )rovclock->pci_dev, (u8 )0, (u8 )8);
#line 297
        id = tmp >> 24;
        }
#line 298
        if (id == 3U) {
          {
#line 299
          fclose(proc);
          }
#line 300
          return (0);
        }
      }
      {
#line 303
      while (1) {
        while_continue___0: /* CIL Label */ ;
        {
#line 303
        tmp___0 = fgetc(proc);
#line 303
        temp = (char )tmp___0;
        }
#line 303
        if (! ((int )temp != -1)) {
#line 303
          goto while_break___0;
        }
#line 304
        if ((int )temp == 10) {
#line 305
          goto while_break___0;
        }
      }
      while_break___0: /* CIL Label */ ;
      }
    }
    while_break: /* CIL Label */ ;
    }
  }
#line 308
  if ((rovclock->pci_id & 65535U) != 4098U) {
    {
#line 309
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Search in /proc/bus/pci/devices failed, scanning the PCI bus.\n");
#line 312
    rovclock->pci_dev = (u32 )0;
#line 313
    rovclock->pci_bus = (u32 )1;
    }
    {
#line 313
    while (1) {
      while_continue___1: /* CIL Label */ ;
#line 313
      if (! (rovclock->pci_bus < 10U)) {
#line 313
        goto while_break___1;
      }
      {
#line 314
      tmp___3 = pci_read((u8 )rovclock->pci_bus, (u8 )0, (u8 )0, (u8 )0);
#line 314
      rovclock->pci_id = tmp___3;
      }
#line 314
      if ((tmp___3 & 65535U) == 4098U) {
        {
#line 315
        tmp___2 = pci_read((u8 )rovclock->pci_bus, (u8 )rovclock->pci_dev, (u8 )0,
                           (u8 )8);
#line 315
        id = tmp___2 >> 24;
        }
#line 316
        if (id == 3U) {
#line 317
          goto while_break___1;
        }
      }
#line 313
      (rovclock->pci_bus) ++;
    }
    while_break___1: /* CIL Label */ ;
    }
#line 321
    if ((rovclock->pci_id & 65535U) != 4098U) {
      {
#line 322
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"No ATI card found.\n");
      }
#line 323
      return (-1);
    }
  }
#line 327
  return (0);
}
}
#line 331 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
int get_iobase(struct rovclock_data *rovclock ) 
{ 
  u32 count ;
  unsigned int tmp ;

  {
  {
#line 336
  tmp = pci_read((u8 )rovclock->pci_bus, (u8 )rovclock->pci_dev, (u8 )0, (u8 )4);
  }
#line 336
  if (! (tmp & 1U)) {
    {
#line 337
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"I/O space not enabled, aborting.\n");
    }
#line 338
    return (-1);
  }
#line 340
  count = (u32 )16;
  {
#line 340
  while (1) {
    while_continue: /* CIL Label */ ;
#line 340
    if (! (count <= 36U)) {
#line 340
      goto while_break;
    }
    {
#line 341
    rovclock->iobase = pci_read((u8 )rovclock->pci_bus, (u8 )rovclock->pci_dev, (u8 )0,
                                (u8 )count);
    }
#line 342
    if (rovclock->iobase & 1U) {
#line 343
      goto while_break;
    }
#line 340
    count += 4U;
  }
  while_break: /* CIL Label */ ;
  }
#line 345
  if (! (rovclock->iobase & 1U)) {
    {
#line 346
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"I/O base address not found, aborting.\n");
    }
#line 347
    return (-1);
  }
  {
#line 349
  rovclock->iobase = (u32 )((unsigned long )rovclock->iobase & 0xfffffffffffffffcUL);
#line 351
  printf((char const   */* __restrict  */)"I/O base address: 0x%04x\n", rovclock->iobase);
  }
#line 353
  return (0);
}
}
#line 357 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
int get_pll_info(struct rovclock_data *rovclock ) 
{ 
  FILE *mem ;
  u32 bios_seg ;
  u8 *rom ;
  u32 fp_bios ;
  u16 pll_info_start ;
  int tmp ;
  void *tmp___0 ;

  {
  {
#line 366
  mem = fopen((char const   */* __restrict  */)"/dev/mem", (char const   */* __restrict  */)"r");
  }
#line 366
  if ((unsigned long )mem == (unsigned long )((void *)0)) {
    {
#line 367
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Error opening /dev/mem !\n");
    }
#line 368
    return (-1);
  }
#line 371
  bios_seg = (u32 )786432;
  {
#line 371
  while (1) {
    while_continue: /* CIL Label */ ;
#line 371
    if (! (bios_seg < 983040U)) {
#line 371
      goto while_break;
    }
    {
#line 372
    tmp = fileno(mem);
#line 372
    tmp___0 = mmap((void *)0, (size_t )4096, 1, 1, tmp, (__off_t )bios_seg);
#line 372
    rom = (u8 *)tmp___0;
    }
#line 372
    if ((unsigned long )rom == (unsigned long )((void *)-1)) {
      {
#line 373
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"mmap() failed.\n");
      }
#line 374
      return (-2);
    }
#line 377
    if ((int )*((u16 *)rom) == 43605) {
      {
#line 378
      printf((char const   */* __restrict  */)"Video BIOS shadow found @ 0x%x\n",
             bios_seg);
      }
#line 379
      goto while_break;
    } else {
      {
#line 382
      munmap((void *)rom, (size_t )4096);
#line 383
      rom = (u8 *)((void *)0);
      }
    }
#line 371
    bios_seg += 4096U;
  }
  while_break: /* CIL Label */ ;
  }
#line 387
  if ((unsigned long )rom == (unsigned long )((void *)0)) {
    {
#line 388
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Video BIOS signature not found.\n");
    }
  } else {
    {
#line 391
    fp_bios = *((u32 *)(rom + 72));
#line 395
    pll_info_start = *((u16 *)((rom + fp_bios) + 48));
#line 399
    memcpy((void */* __restrict  */)(& rovclock->pll), (void const   */* __restrict  */)(rom + (int )pll_info_start),
           sizeof(struct pll_block ));
#line 402
    munmap((void *)rom, (size_t )4096);
#line 403
    fclose(mem);
    }
  }
#line 406
  return (0);
}
}
#line 410 "/home/june/repo/benchmarks/collector/temp/rovclock-0.6e/rovclock.c"
int main(int argc , char **argv ) 
{ 
  int opt ;
  int mode ;
  struct rovclock_data rovclock ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;

  {
  {
#line 416
  rovclock.xtal = (u32 )2700;
#line 418
  printf((char const   */* __restrict  */)"Radeon overclock %s by Hasw (hasw@hasw.net)\n\n",
         "0.6e");
  }
#line 420
  if (argc < 2) {
    {
#line 421
    usage();
    }
#line 422
    return (0);
  }
  {
#line 426
  tmp = iopl(3);
  }
#line 426
  if (tmp != 0) {
    {
#line 427
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Error getting I/O permissions (root?).\n");
    }
#line 428
    return (1);
  }
  {
#line 432
  tmp___0 = find_card(& rovclock);
  }
#line 432
  if (tmp___0) {
#line 433
    return (2);
  }
  {
#line 435
  printf((char const   */* __restrict  */)"Found ATI card on %02x:%02x, device id: 0x%04x\n",
         rovclock.pci_bus, rovclock.pci_dev, rovclock.pci_id >> 16);
#line 438
  tmp___1 = get_iobase(& rovclock);
  }
#line 438
  if (tmp___1) {
#line 439
    return (3);
  }
  {
#line 442
  tmp___2 = get_pll_info(& rovclock);
  }
#line 442
  if (! tmp___2) {
#line 444
    if ((int )rovclock.pll.PCLK_ref_freq < 1000) {
      {
#line 445
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Invalid reference clock from BIOS: %d.%d MHz\n",
              (int )rovclock.pll.PCLK_ref_freq / 100, (int )rovclock.pll.PCLK_ref_freq % 100);
      }
    } else
#line 444
    if ((int )rovclock.pll.PCLK_ref_freq > 5000) {
      {
#line 445
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Invalid reference clock from BIOS: %d.%d MHz\n",
              (int )rovclock.pll.PCLK_ref_freq / 100, (int )rovclock.pll.PCLK_ref_freq % 100);
      }
    } else {
      {
#line 447
      rovclock.xtal = (u32 )rovclock.pll.PCLK_ref_freq;
#line 448
      printf((char const   */* __restrict  */)"Reference clock from BIOS: %d.%d MHz\n",
             rovclock.xtal / 100U, rovclock.xtal % 100U);
      }
    }
  }
  {
#line 454
  mode = 0;
#line 455
  rovclock.cfreq = (u32 )270;
#line 456
  rovclock.mfreq = (u32 )270;
#line 457
  get_mem_info(& rovclock);
  }
  {
#line 460
  while (1) {
    while_continue: /* CIL Label */ ;
    {
#line 460
    opt = getopt(argc, (char * const  *)argv, "ic:m:x:t:");
    }
#line 460
    if (! (opt > 0)) {
#line 460
      goto while_break;
    }
    {
#line 462
    if (opt == 105) {
#line 462
      goto case_105;
    }
#line 465
    if (opt == 120) {
#line 465
      goto case_120;
    }
#line 471
    if (opt == 99) {
#line 471
      goto case_99;
    }
#line 478
    if (opt == 109) {
#line 478
      goto case_109;
    }
#line 485
    if (opt == 116) {
#line 485
      goto case_116;
    }
#line 487
    goto switch_default;
    case_105: /* CIL Label */ 
    {
#line 462
    mem_info(& rovclock);
#line 463
    pll_info(& rovclock);
    }
#line 464
    goto switch_break;
    case_120: /* CIL Label */ 
    {
#line 465
    tmp___3 = atoi((char const   *)optarg);
#line 465
    rovclock.xtal = (u32 )tmp___3;
    }
#line 466
    if (! rovclock.xtal) {
      {
#line 467
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Invalid xtal value: %s\n",
              optarg);
      }
#line 468
      return (5);
    }
#line 470
    goto switch_break;
    case_99: /* CIL Label */ 
    {
#line 471
    tmp___4 = atoi((char const   *)optarg);
#line 471
    rovclock.cfreq = (u32 )tmp___4;
    }
#line 472
    if (! rovclock.cfreq) {
      {
#line 473
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Invalid value: %s\n",
              optarg);
      }
#line 474
      return (5);
    }
#line 476
    mode |= 1;
#line 477
    goto switch_break;
    case_109: /* CIL Label */ 
    {
#line 478
    tmp___5 = atoi((char const   *)optarg);
#line 478
    rovclock.mfreq = (u32 )tmp___5;
    }
#line 479
    if (! rovclock.mfreq) {
      {
#line 480
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Invalid value: %s\n",
              optarg);
      }
#line 481
      return (5);
    }
#line 483
    mode |= 1;
#line 484
    goto switch_break;
    case_116: /* CIL Label */ 
    {
#line 485
    mem_set_timings(& rovclock, optarg);
    }
#line 486
    goto switch_break;
    switch_default: /* CIL Label */ 
    {
#line 487
    usage();
    }
#line 488
    return (5);
#line 489
    goto switch_break;
    switch_break: /* CIL Label */ ;
    }
  }
  while_break: /* CIL Label */ ;
  }
#line 494
  if (mode & 1) {
    {
#line 495
    pll_set_freq(& rovclock);
    }
  }
#line 497
  return (0);
}
}
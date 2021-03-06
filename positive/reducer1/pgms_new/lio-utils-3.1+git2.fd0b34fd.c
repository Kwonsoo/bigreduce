/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

#line 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h"
typedef unsigned long size_t;
#line 139 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __time_t;
#line 141 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __suseconds_t;
#line 172 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __ssize_t;
#line 102 "/usr/include/stdio.h"
typedef __ssize_t ssize_t;
#line 30 "/usr/include/x86_64-linux-gnu/bits/time.h"
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
#line 48 "/usr/include/x86_64-linux-gnu/sys/utsname.h"
struct utsname {
   char sysname[65] ;
   char nodename[65] ;
   char release[65] ;
   char version[65] ;
   char machine[65] ;
   char __domainname[65] ;
};
#line 55 "/usr/include/x86_64-linux-gnu/sys/time.h"
struct timezone {
   int tz_minuteswest ;
   int tz_dsttime ;
};
#line 61 "/usr/include/x86_64-linux-gnu/sys/time.h"
typedef struct timezone * __restrict  __timezone_ptr_t;
#line 31 "/home/wheatley/newnew/temp/lio-utils-3.1+git2.fd0b34fd/tools/md5.h"
struct MD5Context {
   unsigned int buf[4] ;
   unsigned int bytes[2] ;
   unsigned int in[16] ;
};
#line 362 "/usr/include/stdio.h"
extern int printf(char const   * __restrict  __format  , ...) ;
#line 364
extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s , char const   * __restrict  __format 
                                                 , ...) ;
#line 386
extern  __attribute__((__nothrow__)) int ( /* format attribute */  snprintf)(char * __restrict  __s ,
                                                                             size_t __maxlen ,
                                                                             char const   * __restrict  __format 
                                                                             , ...) ;
#line 846
extern void perror(char const   *__s ) ;
#line 66 "/usr/include/string.h"
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1), __leaf__)) memset)(void *__s ,
                                                                                               int __c ,
                                                                                               size_t __n ) ;
#line 144
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strcmp)(char const   *__s1 ,
                                                                                               char const   *__s2 )  __attribute__((__pure__)) ;
#line 342
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2), __leaf__)) strstr)(char const   *__haystack ,
                                                                                                 char const   *__needle )  __attribute__((__pure__)) ;
#line 543 "/usr/include/stdlib.h"
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
#line 146 "/usr/include/fcntl.h"
extern int ( __attribute__((__nonnull__(1))) open)(char const   *__file , int __oflag 
                                                   , ...) ;
#line 353 "/usr/include/unistd.h"
extern int close(int __fd ) ;
#line 360
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
#line 969
extern long gethostid(void) ;
#line 81 "/usr/include/x86_64-linux-gnu/sys/utsname.h"
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) uname)(struct utsname *__name ) ;
#line 71 "/usr/include/x86_64-linux-gnu/sys/time.h"
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) gettimeofday)(struct timeval * __restrict  __tv ,
                                                                                                   __timezone_ptr_t __tz ) ;
#line 37 "/home/wheatley/newnew/temp/lio-utils-3.1+git2.fd0b34fd/tools/md5.h"
void MD5Init(struct MD5Context *ctx ) ;
#line 38
void MD5Update(struct MD5Context *ctx , unsigned char const   *buf , unsigned int len ) ;
#line 39
void MD5Final(unsigned char *digest , struct MD5Context *ctx ) ;
#line 38 "/home/wheatley/newnew/temp/lio-utils-3.1+git2.fd0b34fd/tools/iscsi_name.c"
int main(int argc , char **argv ) 
{ 
  char iname[257] ;
  char *ptr ;
  struct timeval time ;
  struct utsname system_info ;
  long hostid ;
  struct MD5Context context ;
  unsigned char digest[16] ;
  unsigned char *bytes ;
  unsigned char entropy[16] ;
  unsigned char machine[16] ;
  int e ;
  int fd ;
  char *prefix ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  ssize_t tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  ssize_t tmp___5 ;

  {
  {
#line 47
  bytes = digest;
#line 54
  memset((void *)(iname), 0, sizeof(iname));
#line 55
  memset((void *)(digest), 0, sizeof(digest));
#line 56
  memset((void *)(& context), 0, sizeof(context));
#line 57
  MD5Init(& context);
  }
#line 60
  if (argc > 1) {
#line 60
    if (*(argv + 1)) {
      {
#line 61
      prefix = *(argv + 1);
#line 62
      tmp___0 = strcmp((char const   *)prefix, "-h");
      }
#line 62
      if (tmp___0 == 0) {
        {
#line 64
        printf((char const   */* __restrict  */)"\nDisplays the iSCSI initiator name\n");
#line 65
        exit(0);
        }
      } else {
        {
#line 62
        tmp___1 = strcmp((char const   *)prefix, "--help");
        }
#line 62
        if (tmp___1 == 0) {
          {
#line 64
          printf((char const   */* __restrict  */)"\nDisplays the iSCSI initiator name\n");
#line 65
          exit(0);
          }
        } else {
          {
#line 66
          tmp = strcmp((char const   *)prefix, "-p");
          }
#line 66
          if (tmp == 0) {
#line 67
            prefix = *(argv + 2);
          } else {
            {
#line 69
            printf((char const   */* __restrict  */)"\nUsage: iscsi-iname [-h | --help | -p <prefix>]\n");
#line 71
            exit(0);
            }
          }
        }
      }
    } else {
#line 74
      prefix = (char *)"iqn.2003-01.org.linux-iscsi";
    }
  } else {
#line 74
    prefix = (char *)"iqn.2003-01.org.linux-iscsi";
  }
  {
#line 81
  fd = open("/dev/urandom", 0);
  }
#line 81
  if (fd) {
    {
#line 82
    tmp___2 = read(fd, (void *)(& entropy), (size_t )16);
#line 82
    e = (int )tmp___2;
    }
#line 83
    if (e >= 1) {
      {
#line 84
      MD5Update(& context, (unsigned char const   *)(entropy), (unsigned int )e);
      }
    }
    {
#line 85
    close(fd);
    }
  }
  {
#line 91
  tmp___3 = gettimeofday((struct timeval */* __restrict  */)(& time), (__timezone_ptr_t )((void *)0));
  }
#line 91
  if (tmp___3 < 0) {
    {
#line 92
    perror("error: gettimeofday failed");
    }
#line 93
    return (1);
  }
  {
#line 95
  MD5Update(& context, (unsigned char const   *)((unsigned char *)(& time.tv_sec)),
            (unsigned int )sizeof(time.tv_sec));
#line 96
  MD5Update(& context, (unsigned char const   *)((unsigned char *)(& time.tv_usec)),
            (unsigned int )sizeof(time.tv_usec));
#line 99
  hostid = gethostid();
#line 100
  MD5Update(& context, (unsigned char const   *)((unsigned char *)(& hostid)), (unsigned int )sizeof(hostid));
#line 103
  tmp___4 = uname(& system_info);
  }
#line 103
  if (tmp___4 < 0) {
    {
#line 104
    perror("error: uname failed");
    }
#line 105
    return (1);
  }
  {
#line 107
  MD5Update(& context, (unsigned char const   *)((unsigned char *)(system_info.sysname)),
            (unsigned int )sizeof(system_info.sysname));
#line 109
  MD5Update(& context, (unsigned char const   *)((unsigned char *)(system_info.nodename)),
            (unsigned int )sizeof(system_info.nodename));
#line 111
  MD5Update(& context, (unsigned char const   *)((unsigned char *)(system_info.release)),
            (unsigned int )sizeof(system_info.release));
#line 113
  MD5Update(& context, (unsigned char const   *)((unsigned char *)(system_info.version)),
            (unsigned int )sizeof(system_info.version));
#line 115
  MD5Update(& context, (unsigned char const   *)((unsigned char *)(system_info.machine)),
            (unsigned int )sizeof(system_info.machine));
#line 119
  MD5Final((unsigned char *)(digest), & context);
#line 126
  fd = open("/dev/urandom", 0);
  }
#line 126
  if (fd) {
    {
#line 127
    tmp___5 = read(fd, (void *)(entropy), (size_t )1);
    }
#line 127
    if (tmp___5 == 1L) {
#line 128
      bytes = & digest[(unsigned long )entropy[0] % (sizeof(digest) - 6UL)];
    }
    {
#line 129
    close(fd);
    }
  }
  {
#line 133
  ptr = strstr((char const   *)(system_info.nodename), ".");
  }
#line 133
  if (ptr) {
#line 134
    *ptr = (char )'\000';
  }
  {
#line 136
  snprintf((char */* __restrict  */)(machine), (size_t )16, (char const   */* __restrict  */)"%s",
           system_info.machine);
#line 140
  ptr = strstr((char const   *)(machine), "_");
  }
#line 140
  if (ptr) {
#line 141
    *ptr = (char )'\000';
  }
  {
#line 144
  sprintf((char */* __restrict  */)(iname), (char const   */* __restrict  */)"%s.%s.%s:sn.%x%x%x%x%x%x",
          prefix, system_info.nodename, machine, (int )*(bytes + 0), (int )*(bytes + 1),
          (int )*(bytes + 2), (int )*(bytes + 3), (int )*(bytes + 4), (int )*(bytes + 5));
#line 147
  iname[sizeof(iname) - 1UL] = (char )'\000';
#line 148
  printf((char const   */* __restrict  */)"%s\n", iname);
  }
#line 149
  return (0);
}
}
#line 46 "/usr/include/string.h"
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2), __leaf__)) memcpy)(void * __restrict  __dest ,
                                                                                                 void const   * __restrict  __src ,
                                                                                                 size_t __n ) ;
#line 40 "/home/wheatley/newnew/temp/lio-utils-3.1+git2.fd0b34fd/tools/md5.h"
void MD5Transform(unsigned int *buf , unsigned int const   *in ) ;
#line 27 "/home/wheatley/newnew/temp/lio-utils-3.1+git2.fd0b34fd/tools/md5.c"
void byteSwap(unsigned int *buf , unsigned int words ) 
{ 
  unsigned char *p ;
  unsigned int *tmp ;

  {
#line 30
  p = (unsigned char *)buf;
  {
#line 32
  while (1) {
    while_continue: /* CIL Label */ ;
#line 33
    tmp = buf;
#line 33
    buf ++;
#line 33
    *tmp = ((((unsigned int )*(p + 3) << 8) | (unsigned int )*(p + 2)) << 16) | (((unsigned int )*(p + 1) << 8) | (unsigned int )*(p + 0));
#line 35
    p += 4;
#line 32
    words --;
#line 32
    if (! words) {
#line 32
      goto while_break;
    }
  }
  while_break: /* CIL Label */ ;
  }
#line 37
  return;
}
}
#line 46 "/home/wheatley/newnew/temp/lio-utils-3.1+git2.fd0b34fd/tools/md5.c"
void MD5Init(struct MD5Context *ctx ) 
{ 


  {
#line 49
  ctx->buf[0] = 1732584193U;
#line 50
  ctx->buf[1] = 4023233417U;
#line 51
  ctx->buf[2] = 2562383102U;
#line 52
  ctx->buf[3] = 271733878U;
#line 54
  ctx->bytes[0] = 0U;
#line 55
  ctx->bytes[1] = 0U;
#line 56
  return;
}
}
#line 62 "/home/wheatley/newnew/temp/lio-utils-3.1+git2.fd0b34fd/tools/md5.c"
void MD5Update(struct MD5Context *ctx , unsigned char const   *buf , unsigned int len ) 
{ 
  unsigned int t ;
  unsigned int tmp ;

  {
#line 69
  t = ctx->bytes[0];
#line 70
  tmp = t + len;
#line 70
  ctx->bytes[0] = tmp;
#line 70
  if (tmp < t) {
#line 71
    (ctx->bytes[1]) ++;
  }
#line 73
  t = 64U - (t & 63U);
#line 74
  if (t > len) {
    {
#line 75
    memcpy((void */* __restrict  */)(((unsigned char *)(ctx->in) + 64) - t), (void const   */* __restrict  */)buf,
           (size_t )len);
    }
#line 76
    return;
  }
  {
#line 79
  memcpy((void */* __restrict  */)(((unsigned char *)(ctx->in) + 64) - t), (void const   */* __restrict  */)buf,
         (size_t )t);
#line 80
  byteSwap(ctx->in, 16U);
#line 81
  MD5Transform((unsigned int *)(ctx->buf), (unsigned int const   *)(ctx->in));
#line 82
  buf += t;
#line 83
  len -= t;
  }
  {
#line 86
  while (1) {
    while_continue: /* CIL Label */ ;
#line 86
    if (! (len >= 64U)) {
#line 86
      goto while_break;
    }
    {
#line 87
    memcpy((void */* __restrict  */)(ctx->in), (void const   */* __restrict  */)buf,
           (size_t )64);
#line 88
    byteSwap(ctx->in, 16U);
#line 89
    MD5Transform((unsigned int *)(ctx->buf), (unsigned int const   *)(ctx->in));
#line 90
    buf += 64;
#line 91
    len -= 64U;
    }
  }
  while_break: /* CIL Label */ ;
  }
  {
#line 95
  memcpy((void */* __restrict  */)(ctx->in), (void const   */* __restrict  */)buf,
         (size_t )len);
  }
#line 96
  return;
}
}
#line 102 "/home/wheatley/newnew/temp/lio-utils-3.1+git2.fd0b34fd/tools/md5.c"
void MD5Final(unsigned char *digest , struct MD5Context *ctx ) 
{ 
  int count ;
  unsigned char *p ;
  unsigned char *tmp ;

  {
#line 105
  count = (int )(ctx->bytes[0] & 63U);
#line 106
  p = (unsigned char *)(ctx->in) + count;
#line 109
  tmp = p;
#line 109
  p ++;
#line 109
  *tmp = (unsigned char)128;
#line 112
  count = 55 - count;
#line 114
  if (count < 0) {
    {
#line 115
    memset((void *)p, 0, (size_t )(count + 8));
#line 116
    byteSwap(ctx->in, 16U);
#line 117
    MD5Transform((unsigned int *)(ctx->buf), (unsigned int const   *)(ctx->in));
#line 118
    p = (unsigned char *)(ctx->in);
#line 119
    count = 56;
    }
  }
  {
#line 121
  memset((void *)p, 0, (size_t )count);
#line 122
  byteSwap(ctx->in, 14U);
#line 125
  ctx->in[14] = ctx->bytes[0] << 3;
#line 126
  ctx->in[15] = (ctx->bytes[1] << 3) | (ctx->bytes[0] >> 29);
#line 127
  MD5Transform((unsigned int *)(ctx->buf), (unsigned int const   *)(ctx->in));
#line 129
  byteSwap(ctx->buf, 4U);
#line 130
  memcpy((void */* __restrict  */)digest, (void const   */* __restrict  */)(ctx->buf),
         (size_t )16);
#line 131
  memset((void *)ctx, 0, sizeof(ctx));
  }
#line 132
  return;
}
}
#line 153 "/home/wheatley/newnew/temp/lio-utils-3.1+git2.fd0b34fd/tools/md5.c"
void MD5Transform(unsigned int *buf , unsigned int const   *in ) 
{ 
  register unsigned int a ;
  register unsigned int b ;
  register unsigned int c ;
  register unsigned int d ;

  {
#line 158
  a = *(buf + 0);
#line 159
  b = *(buf + 1);
#line 160
  c = *(buf + 2);
#line 161
  d = *(buf + 3);
#line 163
  a += ((d ^ (b & (c ^ d))) + (unsigned int )*(in + 0)) + 3614090360U;
#line 163
  a = ((a << 7) | (a >> 25)) + b;
#line 164
  d += ((c ^ (a & (b ^ c))) + (unsigned int )*(in + 1)) + 3905402710U;
#line 164
  d = ((d << 12) | (d >> 20)) + a;
#line 165
  c += ((b ^ (d & (a ^ b))) + (unsigned int )*(in + 2)) + 606105819U;
#line 165
  c = ((c << 17) | (c >> 15)) + d;
#line 166
  b += ((a ^ (c & (d ^ a))) + (unsigned int )*(in + 3)) + 3250441966U;
#line 166
  b = ((b << 22) | (b >> 10)) + c;
#line 167
  a += ((d ^ (b & (c ^ d))) + (unsigned int )*(in + 4)) + 4118548399U;
#line 167
  a = ((a << 7) | (a >> 25)) + b;
#line 168
  d += ((c ^ (a & (b ^ c))) + (unsigned int )*(in + 5)) + 1200080426U;
#line 168
  d = ((d << 12) | (d >> 20)) + a;
#line 169
  c += ((b ^ (d & (a ^ b))) + (unsigned int )*(in + 6)) + 2821735955U;
#line 169
  c = ((c << 17) | (c >> 15)) + d;
#line 170
  b += ((a ^ (c & (d ^ a))) + (unsigned int )*(in + 7)) + 4249261313U;
#line 170
  b = ((b << 22) | (b >> 10)) + c;
#line 171
  a += ((d ^ (b & (c ^ d))) + (unsigned int )*(in + 8)) + 1770035416U;
#line 171
  a = ((a << 7) | (a >> 25)) + b;
#line 172
  d += ((c ^ (a & (b ^ c))) + (unsigned int )*(in + 9)) + 2336552879U;
#line 172
  d = ((d << 12) | (d >> 20)) + a;
#line 173
  c += ((b ^ (d & (a ^ b))) + (unsigned int )*(in + 10)) + 4294925233U;
#line 173
  c = ((c << 17) | (c >> 15)) + d;
#line 174
  b += ((a ^ (c & (d ^ a))) + (unsigned int )*(in + 11)) + 2304563134U;
#line 174
  b = ((b << 22) | (b >> 10)) + c;
#line 175
  a += ((d ^ (b & (c ^ d))) + (unsigned int )*(in + 12)) + 1804603682U;
#line 175
  a = ((a << 7) | (a >> 25)) + b;
#line 176
  d += ((c ^ (a & (b ^ c))) + (unsigned int )*(in + 13)) + 4254626195U;
#line 176
  d = ((d << 12) | (d >> 20)) + a;
#line 177
  c += ((b ^ (d & (a ^ b))) + (unsigned int )*(in + 14)) + 2792965006U;
#line 177
  c = ((c << 17) | (c >> 15)) + d;
#line 178
  b += ((a ^ (c & (d ^ a))) + (unsigned int )*(in + 15)) + 1236535329U;
#line 178
  b = ((b << 22) | (b >> 10)) + c;
#line 180
  a += ((c ^ (d & (b ^ c))) + (unsigned int )*(in + 1)) + 4129170786U;
#line 180
  a = ((a << 5) | (a >> 27)) + b;
#line 181
  d += ((b ^ (c & (a ^ b))) + (unsigned int )*(in + 6)) + 3225465664U;
#line 181
  d = ((d << 9) | (d >> 23)) + a;
#line 182
  c += ((a ^ (b & (d ^ a))) + (unsigned int )*(in + 11)) + 643717713U;
#line 182
  c = ((c << 14) | (c >> 18)) + d;
#line 183
  b += ((d ^ (a & (c ^ d))) + (unsigned int )*(in + 0)) + 3921069994U;
#line 183
  b = ((b << 20) | (b >> 12)) + c;
#line 184
  a += ((c ^ (d & (b ^ c))) + (unsigned int )*(in + 5)) + 3593408605U;
#line 184
  a = ((a << 5) | (a >> 27)) + b;
#line 185
  d += ((b ^ (c & (a ^ b))) + (unsigned int )*(in + 10)) + 38016083U;
#line 185
  d = ((d << 9) | (d >> 23)) + a;
#line 186
  c += ((a ^ (b & (d ^ a))) + (unsigned int )*(in + 15)) + 3634488961U;
#line 186
  c = ((c << 14) | (c >> 18)) + d;
#line 187
  b += ((d ^ (a & (c ^ d))) + (unsigned int )*(in + 4)) + 3889429448U;
#line 187
  b = ((b << 20) | (b >> 12)) + c;
#line 188
  a += ((c ^ (d & (b ^ c))) + (unsigned int )*(in + 9)) + 568446438U;
#line 188
  a = ((a << 5) | (a >> 27)) + b;
#line 189
  d += ((b ^ (c & (a ^ b))) + (unsigned int )*(in + 14)) + 3275163606U;
#line 189
  d = ((d << 9) | (d >> 23)) + a;
#line 190
  c += ((a ^ (b & (d ^ a))) + (unsigned int )*(in + 3)) + 4107603335U;
#line 190
  c = ((c << 14) | (c >> 18)) + d;
#line 191
  b += ((d ^ (a & (c ^ d))) + (unsigned int )*(in + 8)) + 1163531501U;
#line 191
  b = ((b << 20) | (b >> 12)) + c;
#line 192
  a += ((c ^ (d & (b ^ c))) + (unsigned int )*(in + 13)) + 2850285829U;
#line 192
  a = ((a << 5) | (a >> 27)) + b;
#line 193
  d += ((b ^ (c & (a ^ b))) + (unsigned int )*(in + 2)) + 4243563512U;
#line 193
  d = ((d << 9) | (d >> 23)) + a;
#line 194
  c += ((a ^ (b & (d ^ a))) + (unsigned int )*(in + 7)) + 1735328473U;
#line 194
  c = ((c << 14) | (c >> 18)) + d;
#line 195
  b += ((d ^ (a & (c ^ d))) + (unsigned int )*(in + 12)) + 2368359562U;
#line 195
  b = ((b << 20) | (b >> 12)) + c;
#line 197
  a += (((b ^ c) ^ d) + (unsigned int )*(in + 5)) + 4294588738U;
#line 197
  a = ((a << 4) | (a >> 28)) + b;
#line 198
  d += (((a ^ b) ^ c) + (unsigned int )*(in + 8)) + 2272392833U;
#line 198
  d = ((d << 11) | (d >> 21)) + a;
#line 199
  c += (((d ^ a) ^ b) + (unsigned int )*(in + 11)) + 1839030562U;
#line 199
  c = ((c << 16) | (c >> 16)) + d;
#line 200
  b += (((c ^ d) ^ a) + (unsigned int )*(in + 14)) + 4259657740U;
#line 200
  b = ((b << 23) | (b >> 9)) + c;
#line 201
  a += (((b ^ c) ^ d) + (unsigned int )*(in + 1)) + 2763975236U;
#line 201
  a = ((a << 4) | (a >> 28)) + b;
#line 202
  d += (((a ^ b) ^ c) + (unsigned int )*(in + 4)) + 1272893353U;
#line 202
  d = ((d << 11) | (d >> 21)) + a;
#line 203
  c += (((d ^ a) ^ b) + (unsigned int )*(in + 7)) + 4139469664U;
#line 203
  c = ((c << 16) | (c >> 16)) + d;
#line 204
  b += (((c ^ d) ^ a) + (unsigned int )*(in + 10)) + 3200236656U;
#line 204
  b = ((b << 23) | (b >> 9)) + c;
#line 205
  a += (((b ^ c) ^ d) + (unsigned int )*(in + 13)) + 681279174U;
#line 205
  a = ((a << 4) | (a >> 28)) + b;
#line 206
  d += (((a ^ b) ^ c) + (unsigned int )*(in + 0)) + 3936430074U;
#line 206
  d = ((d << 11) | (d >> 21)) + a;
#line 207
  c += (((d ^ a) ^ b) + (unsigned int )*(in + 3)) + 3572445317U;
#line 207
  c = ((c << 16) | (c >> 16)) + d;
#line 208
  b += (((c ^ d) ^ a) + (unsigned int )*(in + 6)) + 76029189U;
#line 208
  b = ((b << 23) | (b >> 9)) + c;
#line 209
  a += (((b ^ c) ^ d) + (unsigned int )*(in + 9)) + 3654602809U;
#line 209
  a = ((a << 4) | (a >> 28)) + b;
#line 210
  d += (((a ^ b) ^ c) + (unsigned int )*(in + 12)) + 3873151461U;
#line 210
  d = ((d << 11) | (d >> 21)) + a;
#line 211
  c += (((d ^ a) ^ b) + (unsigned int )*(in + 15)) + 530742520U;
#line 211
  c = ((c << 16) | (c >> 16)) + d;
#line 212
  b += (((c ^ d) ^ a) + (unsigned int )*(in + 2)) + 3299628645U;
#line 212
  b = ((b << 23) | (b >> 9)) + c;
#line 214
  a += ((c ^ (b | ~ d)) + (unsigned int )*(in + 0)) + 4096336452U;
#line 214
  a = ((a << 6) | (a >> 26)) + b;
#line 215
  d += ((b ^ (a | ~ c)) + (unsigned int )*(in + 7)) + 1126891415U;
#line 215
  d = ((d << 10) | (d >> 22)) + a;
#line 216
  c += ((a ^ (d | ~ b)) + (unsigned int )*(in + 14)) + 2878612391U;
#line 216
  c = ((c << 15) | (c >> 17)) + d;
#line 217
  b += ((d ^ (c | ~ a)) + (unsigned int )*(in + 5)) + 4237533241U;
#line 217
  b = ((b << 21) | (b >> 11)) + c;
#line 218
  a += ((c ^ (b | ~ d)) + (unsigned int )*(in + 12)) + 1700485571U;
#line 218
  a = ((a << 6) | (a >> 26)) + b;
#line 219
  d += ((b ^ (a | ~ c)) + (unsigned int )*(in + 3)) + 2399980690U;
#line 219
  d = ((d << 10) | (d >> 22)) + a;
#line 220
  c += ((a ^ (d | ~ b)) + (unsigned int )*(in + 10)) + 4293915773U;
#line 220
  c = ((c << 15) | (c >> 17)) + d;
#line 221
  b += ((d ^ (c | ~ a)) + (unsigned int )*(in + 1)) + 2240044497U;
#line 221
  b = ((b << 21) | (b >> 11)) + c;
#line 222
  a += ((c ^ (b | ~ d)) + (unsigned int )*(in + 8)) + 1873313359U;
#line 222
  a = ((a << 6) | (a >> 26)) + b;
#line 223
  d += ((b ^ (a | ~ c)) + (unsigned int )*(in + 15)) + 4264355552U;
#line 223
  d = ((d << 10) | (d >> 22)) + a;
#line 224
  c += ((a ^ (d | ~ b)) + (unsigned int )*(in + 6)) + 2734768916U;
#line 224
  c = ((c << 15) | (c >> 17)) + d;
#line 225
  b += ((d ^ (c | ~ a)) + (unsigned int )*(in + 13)) + 1309151649U;
#line 225
  b = ((b << 21) | (b >> 11)) + c;
#line 226
  a += ((c ^ (b | ~ d)) + (unsigned int )*(in + 4)) + 4149444226U;
#line 226
  a = ((a << 6) | (a >> 26)) + b;
#line 227
  d += ((b ^ (a | ~ c)) + (unsigned int )*(in + 11)) + 3174756917U;
#line 227
  d = ((d << 10) | (d >> 22)) + a;
#line 228
  c += ((a ^ (d | ~ b)) + (unsigned int )*(in + 2)) + 718787259U;
#line 228
  c = ((c << 15) | (c >> 17)) + d;
#line 229
  b += ((d ^ (c | ~ a)) + (unsigned int )*(in + 9)) + 3951481745U;
#line 229
  b = ((b << 21) | (b >> 11)) + c;
#line 231
  *(buf + 0) += a;
#line 232
  *(buf + 1) += b;
#line 233
  *(buf + 2) += c;
#line 234
  *(buf + 3) += d;
#line 235
  return;
}
}

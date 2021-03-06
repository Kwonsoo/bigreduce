/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

#line 131 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off_t;
#line 132 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off64_t;
#line 139 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __time_t;
#line 141 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __suseconds_t;
#line 172 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __ssize_t;
#line 189 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __socklen_t;
#line 220 "/usr/include/unistd.h"
typedef __ssize_t ssize_t;
#line 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h"
typedef unsigned long size_t;
#line 274 "/usr/include/unistd.h"
typedef __socklen_t socklen_t;
#line 75 "/usr/include/time.h"
typedef __time_t time_t;
#line 30 "/usr/include/x86_64-linux-gnu/bits/time.h"
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
#line 54 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef long __fd_mask;
#line 64 "/usr/include/x86_64-linux-gnu/sys/select.h"
struct __anonstruct_fd_set_13 {
   __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))] ;
};
#line 64 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef struct __anonstruct_fd_set_13 fd_set;
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
#line 315 "/usr/include/libio.h"
typedef struct _IO_FILE _IO_FILE;
#line 85 "/usr/include/signal.h"
typedef void (*__sighandler_t)(int  );
#line 28 "/usr/include/x86_64-linux-gnu/bits/sockaddr.h"
typedef unsigned short sa_family_t;
#line 149 "/usr/include/x86_64-linux-gnu/bits/socket.h"
struct sockaddr {
   sa_family_t sa_family ;
   char sa_data[14] ;
};
#line 48 "/usr/include/stdint.h"
typedef unsigned char uint8_t;
#line 49 "/usr/include/stdint.h"
typedef unsigned short uint16_t;
#line 51 "/usr/include/stdint.h"
typedef unsigned int uint32_t;
#line 117 "/usr/include/netinet/in.h"
typedef uint16_t in_port_t;
#line 209 "/usr/include/netinet/in.h"
union __anonunion___in6_u_58 {
   uint8_t __u6_addr8[16] ;
   uint16_t __u6_addr16[8] ;
   uint32_t __u6_addr32[4] ;
};
#line 209 "/usr/include/netinet/in.h"
struct in6_addr {
   union __anonunion___in6_u_58 __in6_u ;
};
#line 252 "/usr/include/netinet/in.h"
struct sockaddr_in6 {
   sa_family_t sin6_family ;
   in_port_t sin6_port ;
   uint32_t sin6_flowinfo ;
   struct in6_addr sin6_addr ;
   uint32_t sin6_scope_id ;
};
#line 567 "/usr/include/netdb.h"
struct addrinfo {
   int ai_flags ;
   int ai_family ;
   int ai_socktype ;
   int ai_protocol ;
   socklen_t ai_addrlen ;
   struct sockaddr *ai_addr ;
   char *ai_canonname ;
   struct addrinfo *ai_next ;
};
#line 353 "/usr/include/unistd.h"
extern int close(int __fd ) ;
#line 360
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
#line 366
extern ssize_t write(int __fd , void const   *__buf , size_t __n ) ;
#line 432
extern  __attribute__((__nothrow__)) unsigned int ( __attribute__((__leaf__)) alarm)(unsigned int __seconds ) ;
#line 150 "/usr/include/stdlib.h"
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1), __leaf__)) atol)(char const   *__nptr )  __attribute__((__pure__)) ;
#line 106 "/usr/include/x86_64-linux-gnu/sys/select.h"
extern int select(int __nfds , fd_set * __restrict  __readfds , fd_set * __restrict  __writefds ,
                  fd_set * __restrict  __exceptfds , struct timeval * __restrict  __timeout ) ;
#line 543 "/usr/include/stdlib.h"
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
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
#line 242
extern int fflush(FILE *__stream ) ;
#line 306
extern  __attribute__((__nothrow__)) FILE *( __attribute__((__leaf__)) fdopen)(int __fd ,
                                                                               char const   *__modes ) ;
#line 356
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
#line 362
extern int printf(char const   * __restrict  __format  , ...) ;
#line 386
extern  __attribute__((__nothrow__)) int ( /* format attribute */  snprintf)(char * __restrict  __s ,
                                                                             size_t __maxlen ,
                                                                             char const   * __restrict  __format 
                                                                             , ...) ;
#line 433
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) sscanf)(char const   * __restrict  __s ,
                                                                             char const   * __restrict  __format 
                                                                             , ...)  __asm__("__isoc99_sscanf")  ;
#line 538
extern int getchar(void) ;
#line 580
extern int putchar(int __c ) ;
#line 622
extern char *fgets(char * __restrict  __s , int __n , FILE * __restrict  __stream ) ;
#line 689
extern int fputs(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
#line 858
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) fileno)(FILE *__stream ) ;
#line 50 "/usr/include/string.h"
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2), __leaf__)) memmove)(void *__dest ,
                                                                                                  void const   *__src ,
                                                                                                  size_t __n ) ;
#line 66
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1), __leaf__)) memset)(void *__s ,
                                                                                               int __c ,
                                                                                               size_t __n ) ;
#line 132
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2), __leaf__)) strncpy)(char * __restrict  __dest ,
                                                                                                  char const   * __restrict  __src ,
                                                                                                  size_t __n ) ;
#line 144
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strcmp)(char const   *__s1 ,
                                                                                               char const   *__s2 )  __attribute__((__pure__)) ;
#line 399
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
#line 534
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strcasecmp)(char const   *__s1 ,
                                                                                                   char const   *__s2 )  __attribute__((__pure__)) ;
#line 538
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strncasecmp)(char const   *__s1 ,
                                                                                                    char const   *__s2 ,
                                                                                                    size_t __n )  __attribute__((__pure__)) ;
#line 102 "/usr/include/signal.h"
extern  __attribute__((__nothrow__)) __sighandler_t ( __attribute__((__leaf__)) signal)(int __sig ,
                                                                                        void (*__handler)(int  ) ) ;
#line 113 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) socket)(int __domain ,
                                                                             int __type ,
                                                                             int __protocol ) ;
#line 137
extern int connect(int __fd , struct sockaddr  const  *__addr , socklen_t __len ) ;
#line 662 "/usr/include/netdb.h"
extern int getaddrinfo(char const   * __restrict  __name , char const   * __restrict  __service ,
                       struct addrinfo  const  * __restrict  __req , struct addrinfo ** __restrict  __pai ) ;
#line 668
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) freeaddrinfo)(struct addrinfo *__ai ) ;
#line 181 "/usr/include/x86_64-linux-gnu/sys/syslog.h"
extern void openlog(char const   *__ident , int __option , int __facility ) ;
#line 190
extern void ( /* format attribute */  syslog)(int __pri , char const   *__fmt  , ...) ;
#line 51 "/home/wheatley/newnew/temp/micro-proxy-20021030+debian/micro_proxy.c"
static int open_client_socket(char *hostname , unsigned short port ) ;
#line 52
static void proxy_http(char *method , char *path , char *protocol , FILE *sockrfp ,
                       FILE *sockwfp ) ;
#line 53
static void proxy_ssl(char *method , char *host , char *protocol , FILE *sockrfp ,
                      FILE *sockwfp ) ;
#line 54
static void sigcatch(int sig ) ;
#line 55
static void trim(char *line ) ;
#line 56
static void send_error(int status , char *title , char *extra_header , char *text ) ;
#line 57
static void send_headers(int status , char *title , char *extra_header , char *mime_type ,
                         int length , time_t mod ) ;
#line 60 "/home/wheatley/newnew/temp/micro-proxy-20021030+debian/micro_proxy.c"
int main(int argc , char **argv ) 
{ 
  char line[10000] ;
  char method[10000] ;
  char url[10000] ;
  char protocol[10000] ;
  char host[10000] ;
  char path[10000] ;
  unsigned short port ;
  int iport ;
  int sockfd ;
  int ssl ;
  FILE *sockrfp ;
  FILE *sockwfp ;
  char *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;

  {
  {
#line 73
  tmp = fgets((char */* __restrict  */)(line), (int )sizeof(line), (FILE */* __restrict  */)stdin);
  }
#line 73
  if ((unsigned long )tmp == (unsigned long )((char *)0)) {
    {
#line 74
    send_error(400, (char *)"Bad Request", (char *)0, (char *)"No request found.");
    }
  }
  {
#line 77
  trim(line);
#line 78
  tmp___0 = sscanf((char const   */* __restrict  */)(line), (char const   */* __restrict  */)"%[^ ] %[^ ] %[^ ]",
                   method, url, protocol);
  }
#line 78
  if (tmp___0 != 3) {
    {
#line 79
    send_error(400, (char *)"Bad Request", (char *)0, (char *)"Can\'t parse request.");
    }
  }
#line 81
  if ((unsigned long )(url) == (unsigned long )((char *)0)) {
    {
#line 82
    send_error(400, (char *)"Bad Request", (char *)0, (char *)"Null URL.");
    }
  }
  {
#line 84
  openlog("micro_proxy", 0, 3 << 3);
#line 85
  syslog(6, "proxying %s", url);
#line 87
  tmp___8 = strncasecmp((char const   *)(url), "http://", (size_t )7);
  }
#line 87
  if (tmp___8 == 0) {
    {
#line 89
    strncpy((char */* __restrict  */)(url), (char const   */* __restrict  */)"http",
            (size_t )4);
#line 90
    tmp___4 = sscanf((char const   */* __restrict  */)(url), (char const   */* __restrict  */)"http://%[^:/]:%d%s",
                     host, & iport, path);
    }
#line 90
    if (tmp___4 == 3) {
#line 91
      port = (unsigned short )iport;
    } else {
      {
#line 92
      tmp___3 = sscanf((char const   */* __restrict  */)(url), (char const   */* __restrict  */)"http://%[^/]%s",
                       host, path);
      }
#line 92
      if (tmp___3 == 2) {
#line 93
        port = (unsigned short)80;
      } else {
        {
#line 94
        tmp___2 = sscanf((char const   */* __restrict  */)(url), (char const   */* __restrict  */)"http://%[^:/]:%d",
                         host, & iport);
        }
#line 94
        if (tmp___2 == 2) {
#line 96
          port = (unsigned short )iport;
#line 97
          path[0] = (char )'\000';
        } else {
          {
#line 99
          tmp___1 = sscanf((char const   */* __restrict  */)(url), (char const   */* __restrict  */)"http://%[^/]",
                           host);
          }
#line 99
          if (tmp___1 == 1) {
#line 101
            port = (unsigned short)80;
#line 102
            path[0] = (char )'\000';
          } else {
            {
#line 105
            send_error(400, (char *)"Bad Request", (char *)0, (char *)"Can\'t parse URL.");
            }
          }
        }
      }
    }
#line 106
    ssl = 0;
  } else {
    {
#line 108
    tmp___7 = strcmp((char const   *)(method), "CONNECT");
    }
#line 108
    if (tmp___7 == 0) {
      {
#line 110
      tmp___6 = sscanf((char const   */* __restrict  */)(url), (char const   */* __restrict  */)"%[^:]:%d",
                       host, & iport);
      }
#line 110
      if (tmp___6 == 2) {
#line 111
        port = (unsigned short )iport;
      } else {
        {
#line 112
        tmp___5 = sscanf((char const   */* __restrict  */)(url), (char const   */* __restrict  */)"%s",
                         host);
        }
#line 112
        if (tmp___5 == 1) {
#line 113
          port = (unsigned short)443;
        } else {
          {
#line 115
          send_error(400, (char *)"Bad Request", (char *)0, (char *)"Can\'t parse URL.");
          }
        }
      }
#line 116
      ssl = 1;
    } else {
      {
#line 119
      send_error(400, (char *)"Bad Request", (char *)0, (char *)"Unknown URL type.");
      }
    }
  }
  {
#line 122
  signal(14, & sigcatch);
#line 125
  alarm(300U);
#line 126
  sockfd = open_client_socket(host, port);
#line 129
  sockrfp = fdopen(sockfd, "r");
#line 130
  sockwfp = fdopen(sockfd, "w");
  }
#line 132
  if (ssl) {
    {
#line 133
    proxy_ssl(method, host, protocol, sockrfp, sockwfp);
    }
  } else {
    {
#line 135
    proxy_http(method, path, protocol, sockrfp, sockwfp);
    }
  }
  {
#line 138
  close(sockfd);
#line 139
  exit(0);
  }
}
}
#line 147 "/home/wheatley/newnew/temp/micro-proxy-20021030+debian/micro_proxy.c"
static int open_client_socket(char *hostname , unsigned short port ) 
{ 
  struct addrinfo hints ;
  char portstr[10] ;
  int gaierr ;
  struct addrinfo *ai ;
  struct addrinfo *ai2 ;
  struct addrinfo *aiv4 ;
  struct addrinfo *aiv6 ;
  struct sockaddr_in6 sa ;
  int sa_len ;
  int sock_family ;
  int sock_type ;
  int sock_protocol ;
  int sockfd ;
  int tmp ;

  {
  {
#line 166
  memset((void *)(& sa), 0, sizeof(sa));
#line 170
  memset((void *)(& hints), 0, sizeof(hints));
#line 171
  hints.ai_family = 0;
#line 172
  hints.ai_socktype = 1;
#line 173
  snprintf((char */* __restrict  */)(portstr), sizeof(portstr), (char const   */* __restrict  */)"%d",
           (int )port);
#line 174
  gaierr = getaddrinfo((char const   */* __restrict  */)hostname, (char const   */* __restrict  */)(portstr),
                       (struct addrinfo  const  */* __restrict  */)(& hints), (struct addrinfo **/* __restrict  */)(& ai));
  }
#line 174
  if (gaierr != 0) {
    {
#line 175
    send_error(404, (char *)"Not Found", (char *)0, (char *)"Unknown host.");
    }
  }
#line 178
  aiv4 = (struct addrinfo *)0;
#line 179
  aiv6 = (struct addrinfo *)0;
#line 180
  ai2 = ai;
  {
#line 180
  while (1) {
    while_continue: /* CIL Label */ ;
#line 180
    if (! ((unsigned long )ai2 != (unsigned long )((struct addrinfo *)0))) {
#line 180
      goto while_break;
    }
    {
#line 184
    if (ai2->ai_family == 2) {
#line 184
      goto case_2;
    }
#line 188
    if (ai2->ai_family == 10) {
#line 188
      goto case_10;
    }
#line 182
    goto switch_break;
    case_2: /* CIL Label */ 
#line 185
    if ((unsigned long )aiv4 == (unsigned long )((struct addrinfo *)0)) {
#line 186
      aiv4 = ai2;
    }
#line 187
    goto switch_break;
    case_10: /* CIL Label */ 
#line 189
    if ((unsigned long )aiv6 == (unsigned long )((struct addrinfo *)0)) {
#line 190
      aiv6 = ai2;
    }
#line 191
    goto switch_break;
    switch_break: /* CIL Label */ ;
    }
#line 180
    ai2 = ai2->ai_next;
  }
  while_break: /* CIL Label */ ;
  }
#line 196
  if ((unsigned long )aiv4 != (unsigned long )((struct addrinfo *)0)) {
#line 198
    if (sizeof(sa) < (unsigned long )aiv4->ai_addrlen) {
      {
#line 200
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s - sockaddr too small (%lu < %lu)\n",
              hostname, sizeof(sa), (unsigned long )aiv4->ai_addrlen);
#line 204
      exit(1);
      }
    }
    {
#line 206
    sock_family = aiv4->ai_family;
#line 207
    sock_type = aiv4->ai_socktype;
#line 208
    sock_protocol = aiv4->ai_protocol;
#line 209
    sa_len = (int )aiv4->ai_addrlen;
#line 210
    memmove((void *)(& sa), (void const   *)aiv4->ai_addr, (size_t )sa_len);
    }
#line 211
    goto ok;
  }
#line 213
  if ((unsigned long )aiv6 != (unsigned long )((struct addrinfo *)0)) {
#line 215
    if (sizeof(sa) < (unsigned long )aiv6->ai_addrlen) {
      {
#line 217
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s - sockaddr too small (%lu < %lu)\n",
              hostname, sizeof(sa), (unsigned long )aiv6->ai_addrlen);
#line 221
      exit(1);
      }
    }
    {
#line 223
    sock_family = aiv6->ai_family;
#line 224
    sock_type = aiv6->ai_socktype;
#line 225
    sock_protocol = aiv6->ai_protocol;
#line 226
    sa_len = (int )aiv6->ai_addrlen;
#line 227
    memmove((void *)(& sa), (void const   *)aiv6->ai_addr, (size_t )sa_len);
    }
#line 228
    goto ok;
  }
  {
#line 231
  send_error(404, (char *)"Not Found", (char *)0, (char *)"Unknown host.");
  }
  ok: 
  {
#line 234
  freeaddrinfo(ai);
#line 250
  sockfd = socket(sock_family, sock_type, sock_protocol);
  }
#line 251
  if (sockfd < 0) {
    {
#line 252
    send_error(500, (char *)"Internal Error", (char *)0, (char *)"Couldn\'t create socket.");
    }
  }
  {
#line 254
  tmp = connect(sockfd, (struct sockaddr  const  *)((struct sockaddr *)(& sa)), (socklen_t )sa_len);
  }
#line 254
  if (tmp < 0) {
    {
#line 255
    send_error(503, (char *)"Service Unavailable", (char *)0, (char *)"Connection refused.");
    }
  }
#line 257
  return (sockfd);
}
}
#line 261 "/home/wheatley/newnew/temp/micro-proxy-20021030+debian/micro_proxy.c"
static void proxy_http(char *method , char *path , char *protocol , FILE *sockrfp ,
                       FILE *sockwfp ) 
{ 
  char line[10000] ;
  char protocol2[10000] ;
  char comment[10000] ;
  int first_line ;
  int status ;
  int ich ;
  long content_length ;
  long i ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  char *tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  char *tmp___6 ;
  int tmp___7 ;

  {
  {
#line 269
  alarm(300U);
#line 270
  fprintf((FILE */* __restrict  */)sockwfp, (char const   */* __restrict  */)"%s %s %s\r\n",
          method, path, protocol);
#line 272
  content_length = -1L;
  }
  {
#line 273
  while (1) {
    while_continue: /* CIL Label */ ;
    {
#line 273
    tmp___2 = fgets((char */* __restrict  */)(line), (int )sizeof(line), (FILE */* __restrict  */)stdin);
    }
#line 273
    if (! ((unsigned long )tmp___2 != (unsigned long )((char *)0))) {
#line 273
      goto while_break;
    }
    {
#line 275
    tmp = strcmp((char const   *)(line), "\n");
    }
#line 275
    if (tmp == 0) {
#line 276
      goto while_break;
    } else {
      {
#line 275
      tmp___0 = strcmp((char const   *)(line), "\r\n");
      }
#line 275
      if (tmp___0 == 0) {
#line 276
        goto while_break;
      }
    }
    {
#line 277
    fputs((char const   */* __restrict  */)(line), (FILE */* __restrict  */)sockwfp);
#line 278
    alarm(300U);
#line 279
    trim(line);
#line 280
    tmp___1 = strncasecmp((char const   *)(line), "Content-Length:", (size_t )15);
    }
#line 280
    if (tmp___1 == 0) {
      {
#line 281
      content_length = atol((char const   *)(& line[15]));
      }
    }
  }
  while_break: /* CIL Label */ ;
  }
  {
#line 283
  fputs((char const   */* __restrict  */)(line), (FILE */* __restrict  */)sockwfp);
#line 284
  fflush(sockwfp);
  }
#line 286
  if (content_length != -1L) {
#line 287
    i = 0L;
    {
#line 287
    while (1) {
      while_continue___0: /* CIL Label */ ;
#line 287
      if (i < content_length) {
        {
#line 287
        ich = getchar();
        }
#line 287
        if (! (ich != -1)) {
#line 287
          goto while_break___0;
        }
      } else {
#line 287
        goto while_break___0;
      }
      {
#line 288
      _IO_putc(ich, sockwfp);
#line 287
      i ++;
      }
    }
    while_break___0: /* CIL Label */ ;
    }
  }
  {
#line 289
  fflush(sockwfp);
#line 292
  alarm(300U);
#line 293
  content_length = -1L;
#line 294
  first_line = 1;
#line 295
  status = -1;
  }
  {
#line 296
  while (1) {
    while_continue___1: /* CIL Label */ ;
    {
#line 296
    tmp___6 = fgets((char */* __restrict  */)(line), (int )sizeof(line), (FILE */* __restrict  */)sockrfp);
    }
#line 296
    if (! ((unsigned long )tmp___6 != (unsigned long )((char *)0))) {
#line 296
      goto while_break___1;
    }
    {
#line 298
    tmp___3 = strcmp((char const   *)(line), "\n");
    }
#line 298
    if (tmp___3 == 0) {
#line 299
      goto while_break___1;
    } else {
      {
#line 298
      tmp___4 = strcmp((char const   *)(line), "\r\n");
      }
#line 298
      if (tmp___4 == 0) {
#line 299
        goto while_break___1;
      }
    }
    {
#line 300
    fputs((char const   */* __restrict  */)(line), (FILE */* __restrict  */)stdout);
#line 301
    alarm(300U);
#line 302
    trim(line);
    }
#line 303
    if (first_line) {
      {
#line 305
      sscanf((char const   */* __restrict  */)(line), (char const   */* __restrict  */)"%[^ ] %d %s",
             protocol2, & status, comment);
#line 306
      first_line = 0;
      }
    }
    {
#line 308
    tmp___5 = strncasecmp((char const   *)(line), "Content-Length:", (size_t )15);
    }
#line 308
    if (tmp___5 == 0) {
      {
#line 309
      content_length = atol((char const   *)(& line[15]));
      }
    }
  }
  while_break___1: /* CIL Label */ ;
  }
  {
#line 312
  fputs((char const   */* __restrict  */)"Connection: close\r\n", (FILE */* __restrict  */)stdout);
#line 313
  fputs((char const   */* __restrict  */)(line), (FILE */* __restrict  */)stdout);
#line 314
  fflush(stdout);
#line 318
  tmp___7 = strcasecmp((char const   *)method, "HEAD");
  }
#line 318
  if (tmp___7 != 0) {
#line 318
    if (status != 304) {
#line 321
      i = 0L;
      {
#line 321
      while (1) {
        while_continue___2: /* CIL Label */ ;
#line 321
        if (content_length == -1L) {
#line 321
          goto _L;
        } else
#line 321
        if (i < content_length) {
          _L: /* CIL Label */ 
          {
#line 321
          ich = _IO_getc(sockrfp);
          }
#line 321
          if (! (ich != -1)) {
#line 321
            goto while_break___2;
          }
        } else {
#line 321
          goto while_break___2;
        }
        {
#line 325
        putchar(ich);
        }
#line 326
        if (i % 10000L == 0L) {
          {
#line 327
          alarm(300U);
          }
        }
#line 321
        i ++;
      }
      while_break___2: /* CIL Label */ ;
      }
    }
  }
  {
#line 330
  fflush(stdout);
  }
#line 331
  return;
}
}
#line 334 "/home/wheatley/newnew/temp/micro-proxy-20021030+debian/micro_proxy.c"
static void proxy_ssl(char *method , char *host , char *protocol , FILE *sockrfp ,
                      FILE *sockwfp ) 
{ 
  int client_read_fd ;
  int server_read_fd ;
  int client_write_fd ;
  int server_write_fd ;
  struct timeval timeout ;
  fd_set fdset ;
  int maxp1 ;
  int r ;
  char buf[10000] ;
  int __d0 ;
  int __d1 ;
  ssize_t tmp ;
  ssize_t tmp___0 ;
  ssize_t tmp___1 ;
  ssize_t tmp___2 ;

  {
  {
#line 344
  fputs((char const   */* __restrict  */)"HTTP/1.0 200 Connection established\r\n\r\n",
        (FILE */* __restrict  */)stdout);
#line 345
  fflush(stdout);
#line 347
  client_read_fd = fileno(stdin);
#line 348
  server_read_fd = fileno(sockrfp);
#line 349
  client_write_fd = fileno(stdout);
#line 350
  server_write_fd = fileno(sockwfp);
#line 351
  timeout.tv_sec = (__time_t )300;
#line 352
  timeout.tv_usec = (__suseconds_t )0;
  }
#line 353
  if (client_read_fd >= server_read_fd) {
#line 354
    maxp1 = client_read_fd + 1;
  } else {
#line 356
    maxp1 = server_read_fd + 1;
  }
  {
#line 357
  alarm(0U);
  }
  {
#line 358
  while (1) {
    while_continue: /* CIL Label */ ;
    {
#line 360
    while (1) {
      while_continue___0: /* CIL Label */ ;
#line 360
      __asm__  volatile   ("cld; rep; "
                           "stosq": "=c" (__d0), "=D" (__d1): "a" (0), "0" (sizeof(fd_set ) / sizeof(__fd_mask )),
                           "1" (& fdset.__fds_bits[0]): "memory");
#line 360
      goto while_break___0;
    }
    while_break___0: /* CIL Label */ ;
    }
    {
#line 361
    fdset.__fds_bits[client_read_fd / (8 * (int )sizeof(__fd_mask ))] |= 1L << client_read_fd % (8 * (int )sizeof(__fd_mask ));
#line 362
    fdset.__fds_bits[server_read_fd / (8 * (int )sizeof(__fd_mask ))] |= 1L << server_read_fd % (8 * (int )sizeof(__fd_mask ));
#line 363
    r = select(maxp1, (fd_set */* __restrict  */)(& fdset), (fd_set */* __restrict  */)((fd_set *)0),
               (fd_set */* __restrict  */)((fd_set *)0), (struct timeval */* __restrict  */)(& timeout));
    }
#line 364
    if (r == 0) {
      {
#line 365
      send_error(408, (char *)"Request Timeout", (char *)0, (char *)"Request timed out.");
      }
    } else
#line 366
    if ((fdset.__fds_bits[client_read_fd / (8 * (int )sizeof(__fd_mask ))] & (1L << client_read_fd % (8 * (int )sizeof(__fd_mask )))) != 0L) {
      {
#line 368
      tmp = read(client_read_fd, (void *)(buf), sizeof(buf));
#line 368
      r = (int )tmp;
      }
#line 369
      if (r <= 0) {
#line 370
        goto while_break;
      }
      {
#line 371
      tmp___0 = write(server_write_fd, (void const   *)(buf), (size_t )r);
#line 371
      r = (int )tmp___0;
      }
#line 372
      if (r <= 0) {
#line 373
        goto while_break;
      }
    } else
#line 375
    if ((fdset.__fds_bits[server_read_fd / (8 * (int )sizeof(__fd_mask ))] & (1L << server_read_fd % (8 * (int )sizeof(__fd_mask )))) != 0L) {
      {
#line 377
      tmp___1 = read(server_read_fd, (void *)(buf), sizeof(buf));
#line 377
      r = (int )tmp___1;
      }
#line 378
      if (r <= 0) {
#line 379
        goto while_break;
      }
      {
#line 380
      tmp___2 = write(client_write_fd, (void const   *)(buf), (size_t )r);
#line 380
      r = (int )tmp___2;
      }
#line 381
      if (r <= 0) {
#line 382
        goto while_break;
      }
    }
  }
  while_break: /* CIL Label */ ;
  }
#line 385
  return;
}
}
#line 388 "/home/wheatley/newnew/temp/micro-proxy-20021030+debian/micro_proxy.c"
static void sigcatch(int sig ) 
{ 


  {
  {
#line 391
  send_error(408, (char *)"Request Timeout", (char *)0, (char *)"Request timed out.");
  }
#line 392
  return;
}
}
#line 395 "/home/wheatley/newnew/temp/micro-proxy-20021030+debian/micro_proxy.c"
static void trim(char *line ) 
{ 
  int l ;
  size_t tmp ;

  {
  {
#line 400
  tmp = strlen((char const   *)line);
#line 400
  l = (int )tmp;
  }
  {
#line 401
  while (1) {
    while_continue: /* CIL Label */ ;
#line 401
    if (! ((int )*(line + (l - 1)) == 10)) {
#line 401
      if (! ((int )*(line + (l - 1)) == 13)) {
#line 401
        goto while_break;
      }
    }
#line 402
    l --;
#line 402
    *(line + l) = (char )'\000';
  }
  while_break: /* CIL Label */ ;
  }
#line 403
  return;
}
}
#line 406 "/home/wheatley/newnew/temp/micro-proxy-20021030+debian/micro_proxy.c"
static void send_error(int status , char *title , char *extra_header , char *text ) 
{ 


  {
  {
#line 409
  send_headers(status, title, extra_header, (char *)"text/html", -1, (time_t )-1);
#line 410
  printf((char const   */* __restrict  */)"<HTML>\n<HEAD><TITLE>%d %s</TITLE></HEAD>\n<BODY BGCOLOR=\"#cc9999\" TEXT=\"#000000\" LINK=\"#2020ff\" VLINK=\"#4040cc\">\n<H4>%d %s</H4>\n",
         status, title, status, title);
#line 416
  printf((char const   */* __restrict  */)"%s\n", text);
#line 417
  printf((char const   */* __restrict  */)"<HR>\n<ADDRESS><A HREF=\"%s\">%s</A></ADDRESS>\n</BODY>\n</HTML>\n",
         "http://www.acme.com/software/micro_proxy/", "micro_proxy");
#line 423
  fflush(stdout);
#line 424
  exit(1);
  }
}
}
#line 436
extern int ( /* missing proto */  time)() ;
#line 437
extern int ( /* missing proto */  strftime)() ;
#line 437
extern int ( /* missing proto */  gmtime)() ;
#line 428 "/home/wheatley/newnew/temp/micro-proxy-20021030+debian/micro_proxy.c"
static void send_headers(int status , char *title , char *extra_header , char *mime_type ,
                         int length , time_t mod ) 
{ 
  time_t now ;
  char timebuf[100] ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
#line 434
  printf((char const   */* __restrict  */)"%s %d %s\r\n", "HTTP/1.0", status, title);
#line 435
  printf((char const   */* __restrict  */)"Server: %s\r\n", "micro_proxy");
#line 436
  tmp = time((time_t *)0);
#line 436
  now = (time_t )tmp;
#line 437
  tmp___0 = gmtime(& now);
#line 437
  strftime(timebuf, sizeof(timebuf), "%a, %d %b %Y %H:%M:%S GMT", tmp___0);
#line 438
  printf((char const   */* __restrict  */)"Date: %s\r\n", timebuf);
  }
#line 439
  if ((unsigned long )extra_header != (unsigned long )((char *)0)) {
    {
#line 440
    printf((char const   */* __restrict  */)"%s\r\n", extra_header);
    }
  }
#line 441
  if ((unsigned long )mime_type != (unsigned long )((char *)0)) {
    {
#line 442
    printf((char const   */* __restrict  */)"Content-Type: %s\r\n", mime_type);
    }
  }
#line 443
  if (length >= 0) {
    {
#line 444
    printf((char const   */* __restrict  */)"Content-Length: %d\r\n", length);
    }
  }
#line 445
  if (mod != -1L) {
    {
#line 447
    tmp___1 = gmtime(& mod);
#line 447
    strftime(timebuf, sizeof(timebuf), "%a, %d %b %Y %H:%M:%S GMT", tmp___1);
#line 448
    printf((char const   */* __restrict  */)"Last-Modified: %s\r\n", timebuf);
    }
  }
  {
#line 450
  printf((char const   */* __restrict  */)"Connection: close\r\n");
#line 451
  printf((char const   */* __restrict  */)"\r\n");
  }
#line 452
  return;
}
}

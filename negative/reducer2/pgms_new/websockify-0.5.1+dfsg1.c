/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

#line 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h"
typedef unsigned long size_t;
#line 189 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __socklen_t;
#line 49 "/usr/include/stdint.h"
typedef unsigned short uint16_t;
#line 51 "/usr/include/stdint.h"
typedef unsigned int uint32_t;
#line 33 "/usr/include/x86_64-linux-gnu/bits/socket.h"
typedef __socklen_t socklen_t;
#line 28 "/usr/include/x86_64-linux-gnu/bits/sockaddr.h"
typedef unsigned short sa_family_t;
#line 149 "/usr/include/x86_64-linux-gnu/bits/socket.h"
struct sockaddr {
   sa_family_t sa_family ;
   char sa_data[14] ;
};
#line 90 "/usr/include/x86_64-linux-gnu/sys/socket.h"
struct sockaddr_in;
#line 30 "/usr/include/netinet/in.h"
typedef uint32_t in_addr_t;
#line 31 "/usr/include/netinet/in.h"
struct in_addr {
   in_addr_t s_addr ;
};
#line 117 "/usr/include/netinet/in.h"
typedef uint16_t in_port_t;
#line 237 "/usr/include/netinet/in.h"
struct sockaddr_in {
   sa_family_t sin_family ;
   in_port_t sin_port ;
   struct in_addr sin_addr ;
   unsigned char sin_zero[((sizeof(struct sockaddr ) - sizeof(unsigned short )) - sizeof(in_port_t )) - sizeof(struct in_addr )] ;
};
#line 183 "/usr/include/stdlib.h"
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1), __leaf__)) strtol)(char const   * __restrict  __nptr ,
                                                                                              char ** __restrict  __endptr ,
                                                                                              int __base ) ;
#line 564
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) getenv)(char const   *__name ) ;
#line 64 "/usr/include/dlfcn.h"
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(2), __leaf__)) dlsym)(void * __restrict  __handle ,
                                                                                              char const   * __restrict  __name ) ;
#line 46 "/usr/include/string.h"
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2), __leaf__)) memcpy)(void * __restrict  __dest ,
                                                                                                 void const   * __restrict  __src ,
                                                                                                 size_t __n ) ;
#line 123 "/usr/include/x86_64-linux-gnu/sys/socket.h"
 __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) bind)(int sockfd , struct sockaddr  const  * __restrict  addr ,
                                                                    socklen_t addrlen ) ;
#line 377 "/usr/include/netinet/in.h"
extern  __attribute__((__nothrow__)) uint32_t ( __attribute__((__leaf__)) htonl)(uint32_t __hostlong )  __attribute__((__const__)) ;
#line 379
extern  __attribute__((__nothrow__)) uint16_t ( __attribute__((__leaf__)) htons)(uint16_t __hostshort )  __attribute__((__const__)) ;
#line 43 "/home/june/repo/benchmarks/collector2/temp/websockify-0.5.1+dfsg1/rebind.c"
static void *(*func)()  ;
#line 41
 __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) bind)(int sockfd , struct sockaddr  const  * __restrict  addr ,
                                                                    socklen_t addrlen ) ;
#line 41 "/home/june/repo/benchmarks/collector2/temp/websockify-0.5.1+dfsg1/rebind.c"
int ( __attribute__((__leaf__)) bind)(int sockfd , struct sockaddr  const  * __restrict  addr ,
                                      socklen_t addrlen ) 
{ 
  int do_move ;
  struct sockaddr_in *addr_in ;
  struct sockaddr_in addr_tmp ;
  socklen_t addrlen_tmp ;
  char *PORT_OLD ;
  char *PORT_NEW ;
  char *end1 ;
  char *end2 ;
  int ret ;
  int oldport ;
  int newport ;
  int askport ;
  uint16_t tmp ;
  uint32_t askaddr ;
  uint16_t tmp___0 ;
  void *tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  void *tmp___4 ;
  void *tmp___5 ;

  {
  {
#line 44
  do_move = 0;
#line 45
  addr_in = (struct sockaddr_in *)addr;
#line 49
  tmp = htons(addr_in->sin_port);
#line 49
  askport = (int )tmp;
#line 50
  tmp___0 = htons((uint16_t )addr_in->sin_addr.s_addr);
#line 50
  askaddr = (uint32_t )tmp___0;
  }
#line 51
  if (! func) {
    {
#line 51
    tmp___1 = dlsym((void */* __restrict  */)((void *)-1L), (char const   */* __restrict  */)"bind");
#line 51
    func = (void *(*)())tmp___1;
    }
  }
#line 57
  if ((int )addr_in->sin_family == 2) {
    {
#line 59
    PORT_OLD = getenv("REBIND_OLD_PORT");
#line 60
    PORT_NEW = getenv("REBIND_NEW_PORT");
    }
#line 61
    if (PORT_OLD) {
#line 61
      if ((int )*PORT_OLD != 0) {
#line 61
        if (PORT_NEW) {
#line 61
          if ((int )*PORT_NEW != 0) {
            {
#line 63
            tmp___2 = strtol((char const   */* __restrict  */)PORT_OLD, (char **/* __restrict  */)(& end1),
                             10);
#line 63
            oldport = (int )tmp___2;
#line 64
            tmp___3 = strtol((char const   */* __restrict  */)PORT_NEW, (char **/* __restrict  */)(& end2),
                             10);
#line 64
            newport = (int )tmp___3;
            }
#line 65
            if (oldport) {
#line 65
              if ((int )*end1 == 0) {
#line 65
                if (newport) {
#line 65
                  if ((int )*end2 == 0) {
#line 65
                    if (oldport == askport) {
#line 68
                      do_move = 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
#line 73
  if (! do_move) {
    {
#line 75
    tmp___4 = (*func)(sockfd, addr, addrlen);
#line 75
    ret = (int )((long )tmp___4);
    }
#line 77
    return (ret);
  }
  {
#line 84
  addrlen_tmp = (socklen_t )sizeof(addr_tmp);
#line 85
  memcpy((void */* __restrict  */)(& addr_tmp), (void const   */* __restrict  */)addr,
         (size_t )addrlen_tmp);
#line 88
  addr_tmp.sin_addr.s_addr = htonl((in_addr_t )2130706433);
#line 89
  addr_tmp.sin_port = htons((uint16_t )newport);
#line 90
  tmp___5 = (*func)(sockfd, & addr_tmp, addrlen_tmp);
#line 90
  ret = (int )((long )tmp___5);
  }
#line 93
  return (ret);
}
}

/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

#line 125 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __uid_t;
#line 126 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __gid_t;
#line 131 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off_t;
#line 132 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off64_t;
#line 133 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __pid_t;
#line 135 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __clock_t;
#line 139 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __time_t;
#line 141 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __suseconds_t;
#line 98 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __pid_t pid_t;
#line 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h"
typedef unsigned long size_t;
#line 27 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
struct __anonstruct___sigset_t_2 {
   unsigned long __val[1024UL / (8UL * sizeof(unsigned long ))] ;
};
#line 27 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
typedef struct __anonstruct___sigset_t_2 __sigset_t;
#line 30 "/usr/include/x86_64-linux-gnu/bits/time.h"
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
#line 54 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef long __fd_mask;
#line 64 "/usr/include/x86_64-linux-gnu/sys/select.h"
struct __anonstruct_fd_set_3 {
   __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))] ;
};
#line 64 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef struct __anonstruct_fd_set_3 fd_set;
#line 66 "/usr/include/X11/X.h"
typedef unsigned long XID;
#line 74 "/usr/include/X11/X.h"
typedef unsigned long Atom;
#line 77 "/usr/include/X11/X.h"
typedef unsigned long Time;
#line 96 "/usr/include/X11/X.h"
typedef XID Window;
#line 97 "/usr/include/X11/X.h"
typedef XID Drawable;
#line 104 "/usr/include/X11/X.h"
typedef XID Colormap;
#line 106 "/usr/include/X11/X.h"
typedef XID KeySym;
#line 108 "/usr/include/X11/X.h"
typedef unsigned char KeyCode;
#line 267 "/usr/include/X11/Xlib.h"
struct _XDisplay;
#line 267
struct _XDisplay;
#line 487 "/usr/include/X11/Xlib.h"
struct __anonstruct_XModifierKeymap_34 {
   int max_keypermod ;
   KeyCode *modifiermap ;
};
#line 487 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XModifierKeymap_34 XModifierKeymap;
#line 499 "/usr/include/X11/Xlib.h"
typedef struct _XDisplay Display;
#line 569 "/usr/include/X11/Xlib.h"
struct __anonstruct_XKeyEvent_36 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   Window root ;
   Window subwindow ;
   Time time ;
   int x ;
   int y ;
   int x_root ;
   int y_root ;
   unsigned int state ;
   unsigned int keycode ;
   int same_screen ;
};
#line 569 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XKeyEvent_36 XKeyEvent;
#line 587 "/usr/include/X11/Xlib.h"
struct __anonstruct_XButtonEvent_37 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   Window root ;
   Window subwindow ;
   Time time ;
   int x ;
   int y ;
   int x_root ;
   int y_root ;
   unsigned int state ;
   unsigned int button ;
   int same_screen ;
};
#line 587 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XButtonEvent_37 XButtonEvent;
#line 605 "/usr/include/X11/Xlib.h"
struct __anonstruct_XMotionEvent_38 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   Window root ;
   Window subwindow ;
   Time time ;
   int x ;
   int y ;
   int x_root ;
   int y_root ;
   unsigned int state ;
   char is_hint ;
   int same_screen ;
};
#line 605 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XMotionEvent_38 XMotionEvent;
#line 622 "/usr/include/X11/Xlib.h"
struct __anonstruct_XCrossingEvent_39 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   Window root ;
   Window subwindow ;
   Time time ;
   int x ;
   int y ;
   int x_root ;
   int y_root ;
   int mode ;
   int detail ;
   int same_screen ;
   int focus ;
   unsigned int state ;
};
#line 622 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XCrossingEvent_39 XCrossingEvent;
#line 646 "/usr/include/X11/Xlib.h"
struct __anonstruct_XFocusChangeEvent_40 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   int mode ;
   int detail ;
};
#line 646 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XFocusChangeEvent_40 XFocusChangeEvent;
#line 665 "/usr/include/X11/Xlib.h"
struct __anonstruct_XKeymapEvent_41 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   char key_vector[32] ;
};
#line 665 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XKeymapEvent_41 XKeymapEvent;
#line 674 "/usr/include/X11/Xlib.h"
struct __anonstruct_XExposeEvent_42 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   int x ;
   int y ;
   int width ;
   int height ;
   int count ;
};
#line 674 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XExposeEvent_42 XExposeEvent;
#line 685 "/usr/include/X11/Xlib.h"
struct __anonstruct_XGraphicsExposeEvent_43 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Drawable drawable ;
   int x ;
   int y ;
   int width ;
   int height ;
   int count ;
   int major_code ;
   int minor_code ;
};
#line 685 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XGraphicsExposeEvent_43 XGraphicsExposeEvent;
#line 698 "/usr/include/X11/Xlib.h"
struct __anonstruct_XNoExposeEvent_44 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Drawable drawable ;
   int major_code ;
   int minor_code ;
};
#line 698 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XNoExposeEvent_44 XNoExposeEvent;
#line 708 "/usr/include/X11/Xlib.h"
struct __anonstruct_XVisibilityEvent_45 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   int state ;
};
#line 708 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XVisibilityEvent_45 XVisibilityEvent;
#line 717 "/usr/include/X11/Xlib.h"
struct __anonstruct_XCreateWindowEvent_46 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window parent ;
   Window window ;
   int x ;
   int y ;
   int width ;
   int height ;
   int border_width ;
   int override_redirect ;
};
#line 717 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XCreateWindowEvent_46 XCreateWindowEvent;
#line 730 "/usr/include/X11/Xlib.h"
struct __anonstruct_XDestroyWindowEvent_47 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window event ;
   Window window ;
};
#line 730 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XDestroyWindowEvent_47 XDestroyWindowEvent;
#line 739 "/usr/include/X11/Xlib.h"
struct __anonstruct_XUnmapEvent_48 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window event ;
   Window window ;
   int from_configure ;
};
#line 739 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XUnmapEvent_48 XUnmapEvent;
#line 749 "/usr/include/X11/Xlib.h"
struct __anonstruct_XMapEvent_49 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window event ;
   Window window ;
   int override_redirect ;
};
#line 749 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XMapEvent_49 XMapEvent;
#line 759 "/usr/include/X11/Xlib.h"
struct __anonstruct_XMapRequestEvent_50 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window parent ;
   Window window ;
};
#line 759 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XMapRequestEvent_50 XMapRequestEvent;
#line 768 "/usr/include/X11/Xlib.h"
struct __anonstruct_XReparentEvent_51 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window event ;
   Window window ;
   Window parent ;
   int x ;
   int y ;
   int override_redirect ;
};
#line 768 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XReparentEvent_51 XReparentEvent;
#line 780 "/usr/include/X11/Xlib.h"
struct __anonstruct_XConfigureEvent_52 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window event ;
   Window window ;
   int x ;
   int y ;
   int width ;
   int height ;
   int border_width ;
   Window above ;
   int override_redirect ;
};
#line 780 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XConfigureEvent_52 XConfigureEvent;
#line 794 "/usr/include/X11/Xlib.h"
struct __anonstruct_XGravityEvent_53 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window event ;
   Window window ;
   int x ;
   int y ;
};
#line 794 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XGravityEvent_53 XGravityEvent;
#line 804 "/usr/include/X11/Xlib.h"
struct __anonstruct_XResizeRequestEvent_54 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   int width ;
   int height ;
};
#line 804 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XResizeRequestEvent_54 XResizeRequestEvent;
#line 813 "/usr/include/X11/Xlib.h"
struct __anonstruct_XConfigureRequestEvent_55 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window parent ;
   Window window ;
   int x ;
   int y ;
   int width ;
   int height ;
   int border_width ;
   Window above ;
   int detail ;
   unsigned long value_mask ;
};
#line 813 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XConfigureRequestEvent_55 XConfigureRequestEvent;
#line 828 "/usr/include/X11/Xlib.h"
struct __anonstruct_XCirculateEvent_56 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window event ;
   Window window ;
   int place ;
};
#line 828 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XCirculateEvent_56 XCirculateEvent;
#line 838 "/usr/include/X11/Xlib.h"
struct __anonstruct_XCirculateRequestEvent_57 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window parent ;
   Window window ;
   int place ;
};
#line 838 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XCirculateRequestEvent_57 XCirculateRequestEvent;
#line 848 "/usr/include/X11/Xlib.h"
struct __anonstruct_XPropertyEvent_58 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   Atom atom ;
   Time time ;
   int state ;
};
#line 848 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XPropertyEvent_58 XPropertyEvent;
#line 859 "/usr/include/X11/Xlib.h"
struct __anonstruct_XSelectionClearEvent_59 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   Atom selection ;
   Time time ;
};
#line 859 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XSelectionClearEvent_59 XSelectionClearEvent;
#line 869 "/usr/include/X11/Xlib.h"
struct __anonstruct_XSelectionRequestEvent_60 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window owner ;
   Window requestor ;
   Atom selection ;
   Atom target ;
   Atom property ;
   Time time ;
};
#line 869 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XSelectionRequestEvent_60 XSelectionRequestEvent;
#line 882 "/usr/include/X11/Xlib.h"
struct __anonstruct_XSelectionEvent_61 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window requestor ;
   Atom selection ;
   Atom target ;
   Atom property ;
   Time time ;
};
#line 882 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XSelectionEvent_61 XSelectionEvent;
#line 894 "/usr/include/X11/Xlib.h"
struct __anonstruct_XColormapEvent_62 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   Colormap colormap ;
   int new ;
   int state ;
};
#line 894 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XColormapEvent_62 XColormapEvent;
#line 909 "/usr/include/X11/Xlib.h"
union __anonunion_data_64 {
   char b[20] ;
   short s[10] ;
   long l[5] ;
};
#line 909 "/usr/include/X11/Xlib.h"
struct __anonstruct_XClientMessageEvent_63 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   Atom message_type ;
   int format ;
   union __anonunion_data_64 data ;
};
#line 909 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XClientMessageEvent_63 XClientMessageEvent;
#line 924 "/usr/include/X11/Xlib.h"
struct __anonstruct_XMappingEvent_65 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
   int request ;
   int first_keycode ;
   int count ;
};
#line 924 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XMappingEvent_65 XMappingEvent;
#line 936 "/usr/include/X11/Xlib.h"
struct __anonstruct_XErrorEvent_66 {
   int type ;
   Display *display ;
   XID resourceid ;
   unsigned long serial ;
   unsigned char error_code ;
   unsigned char request_code ;
   unsigned char minor_code ;
};
#line 936 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XErrorEvent_66 XErrorEvent;
#line 946 "/usr/include/X11/Xlib.h"
struct __anonstruct_XAnyEvent_67 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   Window window ;
};
#line 946 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XAnyEvent_67 XAnyEvent;
#line 960 "/usr/include/X11/Xlib.h"
struct __anonstruct_XGenericEvent_68 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   int extension ;
   int evtype ;
};
#line 960 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XGenericEvent_68 XGenericEvent;
#line 970 "/usr/include/X11/Xlib.h"
struct __anonstruct_XGenericEventCookie_69 {
   int type ;
   unsigned long serial ;
   int send_event ;
   Display *display ;
   int extension ;
   int evtype ;
   unsigned int cookie ;
   void *data ;
};
#line 970 "/usr/include/X11/Xlib.h"
typedef struct __anonstruct_XGenericEventCookie_69 XGenericEventCookie;
#line 985 "/usr/include/X11/Xlib.h"
union _XEvent {
   int type ;
   XAnyEvent xany ;
   XKeyEvent xkey ;
   XButtonEvent xbutton ;
   XMotionEvent xmotion ;
   XCrossingEvent xcrossing ;
   XFocusChangeEvent xfocus ;
   XExposeEvent xexpose ;
   XGraphicsExposeEvent xgraphicsexpose ;
   XNoExposeEvent xnoexpose ;
   XVisibilityEvent xvisibility ;
   XCreateWindowEvent xcreatewindow ;
   XDestroyWindowEvent xdestroywindow ;
   XUnmapEvent xunmap ;
   XMapEvent xmap ;
   XMapRequestEvent xmaprequest ;
   XReparentEvent xreparent ;
   XConfigureEvent xconfigure ;
   XGravityEvent xgravity ;
   XResizeRequestEvent xresizerequest ;
   XConfigureRequestEvent xconfigurerequest ;
   XCirculateEvent xcirculate ;
   XCirculateRequestEvent xcirculaterequest ;
   XPropertyEvent xproperty ;
   XSelectionClearEvent xselectionclear ;
   XSelectionRequestEvent xselectionrequest ;
   XSelectionEvent xselection ;
   XColormapEvent xcolormap ;
   XClientMessageEvent xclient ;
   XMappingEvent xmapping ;
   XErrorEvent xerror ;
   XKeymapEvent xkeymap ;
   XGenericEvent xgeneric ;
   XGenericEventCookie xcookie ;
   long pad[24] ;
};
#line 985 "/usr/include/X11/Xlib.h"
typedef union _XEvent XEvent;
#line 66 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h"
struct __anonstruct___wait_terminated_104 {
   unsigned int __w_termsig : 7 ;
   unsigned int __w_coredump : 1 ;
   unsigned int __w_retcode : 8 ;
   unsigned int  : 16 ;
};
#line 66 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h"
struct __anonstruct___wait_stopped_105 {
   unsigned int __w_stopval : 8 ;
   unsigned int __w_stopsig : 8 ;
   unsigned int  : 16 ;
};
#line 66 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h"
union wait {
   int w_status ;
   struct __anonstruct___wait_terminated_104 __wait_terminated ;
   struct __anonstruct___wait_stopped_105 __wait_stopped ;
};
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
#line 32 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
union sigval {
   int sival_int ;
   void *sival_ptr ;
};
#line 32 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
typedef union sigval sigval_t;
#line 58 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
typedef __clock_t __sigchld_clock_t;
#line 62 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
struct __anonstruct__kill_119 {
   __pid_t si_pid ;
   __uid_t si_uid ;
};
#line 62 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
struct __anonstruct__timer_120 {
   int si_tid ;
   int si_overrun ;
   sigval_t si_sigval ;
};
#line 62 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
struct __anonstruct__rt_121 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   sigval_t si_sigval ;
};
#line 62 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
struct __anonstruct__sigchld_122 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   int si_status ;
   __sigchld_clock_t si_utime ;
   __sigchld_clock_t si_stime ;
};
#line 62 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
struct __anonstruct__sigfault_123 {
   void *si_addr ;
   short si_addr_lsb ;
};
#line 62 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
struct __anonstruct__sigpoll_124 {
   long si_band ;
   int si_fd ;
};
#line 62 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
struct __anonstruct__sigsys_125 {
   void *_call_addr ;
   int _syscall ;
   unsigned int _arch ;
};
#line 62 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
union __anonunion__sifields_118 {
   int _pad[128UL / sizeof(int ) - 4UL] ;
   struct __anonstruct__kill_119 _kill ;
   struct __anonstruct__timer_120 _timer ;
   struct __anonstruct__rt_121 _rt ;
   struct __anonstruct__sigchld_122 _sigchld ;
   struct __anonstruct__sigfault_123 _sigfault ;
   struct __anonstruct__sigpoll_124 _sigpoll ;
   struct __anonstruct__sigsys_125 _sigsys ;
};
#line 62 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
struct __anonstruct_siginfo_t_117 {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_118 _sifields ;
};
#line 62 "/usr/include/x86_64-linux-gnu/bits/siginfo.h"
typedef struct __anonstruct_siginfo_t_117 siginfo_t;
#line 24 "/usr/include/x86_64-linux-gnu/bits/sigaction.h"
union __anonunion___sigaction_handler_137 {
   void (*sa_handler)(int  ) ;
   void (*sa_sigaction)(int  , siginfo_t * , void * ) ;
};
#line 24 "/usr/include/x86_64-linux-gnu/bits/sigaction.h"
struct sigaction {
   union __anonunion___sigaction_handler_137 __sigaction_handler ;
   __sigset_t sa_mask ;
   int sa_flags ;
   void (*sa_restorer)(void) ;
};
#line 49 "/usr/include/pwd.h"
struct passwd {
   char *pw_name ;
   char *pw_passwd ;
   __uid_t pw_uid ;
   __gid_t pw_gid ;
   char *pw_gecos ;
   char *pw_dir ;
   char *pw_shell ;
};
#line 40 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
struct _Key;
#line 40 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
typedef struct _Key Key;
#line 42 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
struct _Key {
   int keycode ;
   int modifier ;
   char *command ;
   Key *next ;
};
#line 106 "/usr/include/x86_64-linux-gnu/sys/select.h"
extern int select(int __nfds , fd_set * __restrict  __readfds , fd_set * __restrict  __writefds ,
                  fd_set * __restrict  __exceptfds , struct timeval * __restrict  __timeout ) ;
#line 1435 "/usr/include/X11/Xlib.h"
extern XModifierKeymap *XGetModifierMapping(Display * ) ;
#line 1495
extern Display *XOpenDisplay(char const   * ) ;
#line 1722
extern KeySym XStringToKeysym(char const   * ) ;
#line 1781
extern Window XDefaultRootWindow(Display * ) ;
#line 2172
extern int XCloseDisplay(Display * ) ;
#line 2183
extern int XConnectionNumber(Display * ) ;
#line 2578
extern int XFreeModifiermap(XModifierKeymap * ) ;
#line 2722
extern int XGrabKey(Display * , int  , unsigned int  , Window  , int  , int  , int  ) ;
#line 2785
extern KeyCode XKeysymToKeycode(Display * , KeySym  ) ;
#line 2853
extern int XNextEvent(Display * , XEvent * ) ;
#line 2893
extern int XPending(Display * ) ;
#line 3481
extern int XUngrabKey(Display * , int  , unsigned int  , Window  ) ;
#line 466 "/usr/include/stdlib.h"
extern  __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) malloc)(size_t __size )  __attribute__((__malloc__)) ;
#line 483
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) free)(void *__ptr ) ;
#line 543
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
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
#line 622
extern char *fgets(char * __restrict  __s , int __n , FILE * __restrict  __stream ) ;
#line 144 "/usr/include/string.h"
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strcmp)(char const   *__s1 ,
                                                                                               char const   *__s2 )  __attribute__((__pure__)) ;
#line 176
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strdup)(char const   *__s )  __attribute__((__malloc__)) ;
#line 348
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(2), __leaf__)) strtok)(char * __restrict  __s ,
                                                                                               char const   * __restrict  __delim ) ;
#line 399
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
#line 584 "/usr/include/unistd.h"
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) execlp)(char const   *__file ,
                                                                                               char const   *__arg 
                                                                                               , ...) ;
#line 675
extern  __attribute__((__nothrow__)) __uid_t ( __attribute__((__leaf__)) getuid)(void) ;
#line 756
extern  __attribute__((__nothrow__)) __pid_t fork(void) ;
#line 259 "/usr/include/signal.h"
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) sigaction)(int __sig ,
                                                                                struct sigaction  const  * __restrict  __act ,
                                                                                struct sigaction * __restrict  __oact ) ;
#line 102 "/usr/include/x86_64-linux-gnu/sys/wait.h"
extern __pid_t wait(union wait *__stat_loc ) ;
#line 50 "/usr/include/x86_64-linux-gnu/bits/errno.h"
extern  __attribute__((__nothrow__)) int *( __attribute__((__leaf__)) __errno_location)(void)  __attribute__((__const__)) ;
#line 110 "/usr/include/pwd.h"
extern struct passwd *getpwuid(__uid_t __uid ) ;
#line 23 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.h"
void print_error(char *error , int critical ) ;
#line 24
void init_keyboard(void) ;
#line 25
void grab_key(int keycode , unsigned int modifiers , Window w ) ;
#line 26
void create_new_key(char *key_string ) ;
#line 27
void free_keys(void) ;
#line 28
void parse_rc(char *dir , char *file ) ;
#line 29
void fork_exec(char *cmd ) ;
#line 30
void quit(void) ;
#line 31
void signal_handler(int signal___0 ) ;
#line 32
void usage(void) ;
#line 33
void initialize(void) ;
#line 34
int main(int argc , char **argv ) ;
#line 49 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
Display *dpy  ;
#line 50 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
Window root  ;
#line 51 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
Key *key  ;
#line 52 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
int NumLockMask  ;
#line 52 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
int CapsLockMask  ;
#line 52 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
int ScrollLockMask  ;
#line 53 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
int do_update  ;
#line 54 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
char *progname  ;
#line 62 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
void print_error(char *error , int critical ) 
{ 


  {
  {
#line 69
  fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"keylaunch: %s",
          error);
  }
#line 70
  if (critical) {
    {
#line 71
    exit(1);
    }
  }
#line 72
  return;
}
}
#line 80 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
void init_keyboard(void) 
{ 
  XModifierKeymap *xmk ;
  KeyCode *map ;
  int m ;
  int k ;
  KeyCode tmp ;
  KeyCode tmp___0 ;
  KeyCode tmp___1 ;

  {
  {
#line 83
  xmk = (XModifierKeymap *)((void *)0);
#line 91
  xmk = XGetModifierMapping(dpy);
  }
#line 92
  if (xmk) {
#line 94
    map = xmk->modifiermap;
#line 95
    m = 0;
    {
#line 95
    while (1) {
      while_continue: /* CIL Label */ ;
#line 95
      if (! (m < 8)) {
#line 95
        goto while_break;
      }
#line 96
      k = 0;
      {
#line 96
      while (1) {
        while_continue___0: /* CIL Label */ ;
#line 96
        if (! (k < xmk->max_keypermod)) {
#line 96
          goto while_break___0;
        }
        {
#line 98
        tmp = XKeysymToKeycode(dpy, (KeySym )65407);
        }
#line 98
        if ((int )*map == (int )tmp) {
#line 99
          NumLockMask = 1 << m;
        }
        {
#line 100
        tmp___0 = XKeysymToKeycode(dpy, (KeySym )65509);
        }
#line 100
        if ((int )*map == (int )tmp___0) {
#line 101
          CapsLockMask = 1 << m;
        }
        {
#line 102
        tmp___1 = XKeysymToKeycode(dpy, (KeySym )65300);
        }
#line 102
        if ((int )*map == (int )tmp___1) {
#line 103
          ScrollLockMask = 1 << m;
        }
#line 96
        k ++;
#line 96
        map ++;
      }
      while_break___0: /* CIL Label */ ;
      }
#line 95
      m ++;
    }
    while_break: /* CIL Label */ ;
    }
    {
#line 105
    XFreeModifiermap(xmk);
    }
  }
#line 107
  return;
}
}
#line 109 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
void grab_key(int keycode , unsigned int modifiers , Window w ) 
{ 


  {
#line 112
  if (keycode) {
    {
#line 114
    XGrabKey(dpy, keycode, modifiers, w, 0, 1, 1);
#line 116
    XGrabKey(dpy, keycode, modifiers | (unsigned int )NumLockMask, w, 0, 1, 1);
#line 118
    XGrabKey(dpy, keycode, modifiers | (unsigned int )CapsLockMask, w, 0, 1, 1);
#line 120
    XGrabKey(dpy, keycode, modifiers | (unsigned int )ScrollLockMask, w, 0, 1, 1);
#line 122
    XGrabKey(dpy, keycode, (modifiers | (unsigned int )NumLockMask) | (unsigned int )CapsLockMask,
             w, 0, 1, 1);
#line 124
    XGrabKey(dpy, keycode, (modifiers | (unsigned int )NumLockMask) | (unsigned int )ScrollLockMask,
             w, 0, 1, 1);
#line 126
    XGrabKey(dpy, keycode, ((modifiers | (unsigned int )NumLockMask) | (unsigned int )CapsLockMask) | (unsigned int )ScrollLockMask,
             w, 0, 1, 1);
    }
  }
#line 130
  return;
}
}
#line 132 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
void create_new_key(char *key_string ) 
{ 
  Key *k ;
  char *key_str ;
  char *command ;
  size_t tmp ;
  void *tmp___0 ;
  KeySym tmp___1 ;
  KeyCode tmp___2 ;

  {
  {
#line 136
  command = (char *)((void *)0);
#line 142
  key_str = strtok((char */* __restrict  */)key_string, (char const   */* __restrict  */)":");
  }
#line 143
  if ((unsigned long )key_str != (unsigned long )((void *)0)) {
    {
#line 144
    command = strtok((char */* __restrict  */)((void *)0), (char const   */* __restrict  */)"\n");
    }
  }
#line 146
  if ((unsigned long )key_str == (unsigned long )((void *)0)) {
#line 147
    return;
  } else
#line 146
  if ((unsigned long )command == (unsigned long )((void *)0)) {
#line 147
    return;
  }
  {
#line 149
  tmp = strlen((char const   *)key_str);
  }
#line 149
  if (tmp < 4UL) {
#line 150
    return;
  }
  {
#line 152
  tmp___0 = malloc(sizeof(*k));
#line 152
  k = (Key *)tmp___0;
  }
#line 152
  if ((unsigned long )k == (unsigned long )((void *)0)) {
#line 153
    return;
  }
#line 154
  k->next = key;
#line 155
  key = k;
#line 157
  k->modifier = 0;
#line 158
  k->keycode = 0;
#line 160
  if ((int )*(key_str + 0) == 42) {
#line 161
    k->modifier |= 1;
  }
#line 162
  if ((int )*(key_str + 1) == 42) {
#line 163
    k->modifier |= 1 << 2;
  }
#line 164
  if ((int )*(key_str + 2) == 42) {
#line 165
    k->modifier |= 1 << 3;
  }
  {
#line 167
  tmp___1 = XStringToKeysym((char const   *)(key_str + 3));
#line 167
  tmp___2 = XKeysymToKeycode(dpy, tmp___1);
#line 167
  k->keycode = (int )tmp___2;
#line 169
  grab_key(k->keycode, (unsigned int )k->modifier, root);
#line 170
  k->command = strdup((char const   *)command);
  }
#line 171
  return;
}
}
#line 174 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
void free_keys(void) 
{ 
  Key *k ;

  {
  {
#line 183
  XUngrabKey(dpy, 0, (unsigned int )(1 << 15), root);
  }
  {
#line 184
  while (1) {
    while_continue: /* CIL Label */ ;
#line 184
    if (! key) {
#line 184
      goto while_break;
    }
    {
#line 186
    free((void *)key->command);
#line 187
    k = key->next;
#line 188
    free((void *)key);
#line 189
    key = k;
    }
  }
  while_break: /* CIL Label */ ;
  }
#line 191
  return;
}
}
#line 199 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
void parse_rc(char *dir , char *file ) 
{ 
  FILE *rc ;
  char *rc_file ;
  char buf[1024] ;
  char *lvalue ;
  char *rvalue ;
  size_t tmp ;
  size_t tmp___0 ;
  void *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;

  {
  {
#line 209
  tmp = strlen((char const   *)dir);
#line 209
  tmp___0 = strlen((char const   *)file);
#line 209
  tmp___1 = malloc((tmp + tmp___0) + 2UL);
#line 209
  rc_file = (char *)tmp___1;
  }
#line 209
  if ((unsigned long )rc_file == (unsigned long )((void *)0)) {
#line 210
    return;
  }
  {
#line 212
  sprintf((char */* __restrict  */)rc_file, (char const   */* __restrict  */)"%s/%s",
          dir, file);
#line 214
  rc = fopen((char const   */* __restrict  */)rc_file, (char const   */* __restrict  */)"r");
  }
#line 214
  if (rc) {
    {
#line 216
    while (1) {
      while_continue: /* CIL Label */ ;
      {
#line 216
      tmp___3 = fgets((char */* __restrict  */)(buf), (int )sizeof(buf), (FILE */* __restrict  */)rc);
      }
#line 216
      if (! tmp___3) {
#line 216
        goto while_break;
      }
      {
#line 218
      lvalue = strtok((char */* __restrict  */)(buf), (char const   */* __restrict  */)"=");
      }
#line 219
      if (lvalue) {
        {
#line 221
        tmp___2 = strcmp((char const   *)lvalue, "key");
        }
#line 221
        if (! tmp___2) {
          {
#line 223
          rvalue = strtok((char */* __restrict  */)((void *)0), (char const   */* __restrict  */)"\n");
          }
#line 224
          if (rvalue) {
            {
#line 225
            create_new_key(rvalue);
            }
          }
        }
      }
    }
    while_break: /* CIL Label */ ;
    }
    {
#line 229
    fclose(rc);
    }
  } else {
    {
#line 233
    printf((char const   */* __restrict  */)"Could not open the configuration.\n\n");
#line 234
    usage();
#line 235
    exit(1);
    }
  }
  {
#line 237
  free((void *)rc_file);
#line 238
  do_update = 0;
  }
#line 239
  return;
}
}
#line 247 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
void fork_exec(char *cmd ) 
{ 
  pid_t pid ;
  __pid_t tmp ;

  {
  {
#line 250
  tmp = fork();
#line 250
  pid = tmp;
  }
  {
#line 259
  if (pid == 0) {
#line 259
    goto case_0;
  }
#line 264
  if (pid == -1) {
#line 264
    goto case_neg_1;
  }
#line 257
  goto switch_break;
  case_0: /* CIL Label */ 
  {
#line 260
  execlp("/bin/sh", "sh", "-c", cmd, (void *)0);
#line 261
  fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Exec failed.\n");
#line 262
  exit(0);
  }
#line 263
  goto switch_break;
  case_neg_1: /* CIL Label */ 
  {
#line 265
  fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Fork failed.\n");
  }
#line 266
  goto switch_break;
  switch_break: /* CIL Label */ ;
  }
#line 268
  return;
}
}
#line 276 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
void quit(void) 
{ 


  {
  {
#line 283
  free_keys();
#line 284
  XCloseDisplay(dpy);
#line 285
  exit(0);
  }
}
}
#line 288 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
void signal_handler(int signal___0 ) 
{ 


  {
  {
#line 297
  if (signal___0 == 1) {
#line 297
    goto case_1;
  }
#line 301
  if (signal___0 == 15) {
#line 301
    goto case_15;
  }
#line 301
  if (signal___0 == 2) {
#line 301
    goto case_15;
  }
#line 304
  if (signal___0 == 17) {
#line 304
    goto case_17;
  }
#line 295
  goto switch_break;
  case_1: /* CIL Label */ 
#line 298
  do_update = 1;
#line 299
  goto switch_break;
  case_15: /* CIL Label */ 
  case_2: /* CIL Label */ 
  {
#line 302
  quit();
  }
#line 303
  goto switch_break;
  case_17: /* CIL Label */ 
  {
#line 305
  wait((union wait *)((void *)0));
  }
#line 306
  goto switch_break;
  switch_break: /* CIL Label */ ;
  }
#line 308
  return;
}
}
#line 310 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
void usage(void) 
{ 


  {
  {
#line 313
  printf((char const   */* __restrict  */)"%s %s\n", "keylaunch", "1.3.9");
#line 314
  printf((char const   */* __restrict  */)"%d (c) Stefan Pfetzing <dreamind@dreamind.de>\n",
         2016);
#line 315
  printf((char const   */* __restrict  */)"Usage: %s\n", progname);
#line 316
  printf((char const   */* __restrict  */)"%s, has no Options at all.\n", "keylaunch");
#line 317
  printf((char const   */* __restrict  */)"You will need to create a ~/%s in order to use it.\n",
         ".keylaunchrc");
  }
#line 318
  return;
}
}
#line 320 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
void initialize(void) 
{ 
  struct sigaction act ;
  __uid_t tmp ;
  struct passwd *tmp___0 ;

  {
  {
#line 325
  act.__sigaction_handler.sa_handler = & signal_handler;
#line 326
  act.sa_flags = 0;
#line 327
  sigaction(15, (struct sigaction  const  */* __restrict  */)(& act), (struct sigaction */* __restrict  */)((void *)0));
#line 328
  sigaction(2, (struct sigaction  const  */* __restrict  */)(& act), (struct sigaction */* __restrict  */)((void *)0));
#line 329
  sigaction(1, (struct sigaction  const  */* __restrict  */)(& act), (struct sigaction */* __restrict  */)((void *)0));
#line 330
  sigaction(17, (struct sigaction  const  */* __restrict  */)(& act), (struct sigaction */* __restrict  */)((void *)0));
#line 332
  dpy = XOpenDisplay((char const   *)((void *)0));
  }
#line 332
  if (! dpy) {
    {
#line 333
    print_error((char *)"Can\'t open display, X may not be running.\n", 1);
    }
  }
  {
#line 335
  root = XDefaultRootWindow(dpy);
#line 337
  init_keyboard();
#line 338
  tmp = getuid();
#line 338
  tmp___0 = getpwuid(tmp);
#line 338
  parse_rc(tmp___0->pw_dir, (char *)".keylaunchrc");
  }
#line 339
  return;
}
}
#line 341 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
void process_xevents(void) 
{ 
  XEvent ev ;
  Key *k ;
  int tmp ;

  {
  {
#line 347
  while (1) {
    while_continue: /* CIL Label */ ;
    {
#line 347
    tmp = XPending(dpy);
    }
#line 347
    if (! tmp) {
#line 347
      goto while_break;
    }
    {
#line 352
    XNextEvent(dpy, & ev);
    }
#line 353
    if (ev.type == 2) {
#line 355
      ev.xkey.state &= (unsigned int )(((1 << 3) | (1 << 2)) | 1);
#line 357
      k = key;
      {
#line 357
      while (1) {
        while_continue___0: /* CIL Label */ ;
#line 357
        if (! ((unsigned long )k != (unsigned long )((void *)0))) {
#line 357
          goto while_break___0;
        }
#line 358
        if ((unsigned int )k->keycode == ev.xkey.keycode) {
#line 358
          if ((unsigned int )k->modifier == ev.xkey.state) {
            {
#line 360
            fork_exec(k->command);
            }
          }
        }
#line 357
        k = k->next;
      }
      while_break___0: /* CIL Label */ ;
      }
    }
  }
  while_break: /* CIL Label */ ;
  }
#line 363
  return;
}
}
#line 371 "/home/wheatley/newnew/temp/keylaunch-1.3.9/keylaunch.c"
int main(int argc , char **argv ) 
{ 
  fd_set readset ;
  int x_fd ;
  int nfds ;
  int tmp ;
  int __d0 ;
  int __d1 ;
  __uid_t tmp___0 ;
  struct passwd *tmp___1 ;
  int *tmp___2 ;
  int tmp___3 ;

  {
  {
#line 378
  initialize();
#line 380
  progname = *(argv + 0);
  }
#line 383
  if (argc > 1) {
    {
#line 384
    usage();
    }
  }
  {
#line 387
  x_fd = XConnectionNumber(dpy);
#line 389
  tmp = XPending(dpy);
  }
#line 389
  if (tmp) {
    {
#line 390
    process_xevents();
    }
  }
  {
#line 392
  while (1) {
    while_continue: /* CIL Label */ ;
    {
#line 395
    while (1) {
      while_continue___0: /* CIL Label */ ;
#line 395
      __asm__  volatile   ("cld; rep; "
                           "stosq": "=c" (__d0), "=D" (__d1): "a" (0), "0" (sizeof(fd_set ) / sizeof(__fd_mask )),
                           "1" (& readset.__fds_bits[0]): "memory");
#line 395
      goto while_break___0;
    }
    while_break___0: /* CIL Label */ ;
    }
#line 396
    readset.__fds_bits[x_fd / (8 * (int )sizeof(__fd_mask ))] |= 1L << x_fd % (8 * (int )sizeof(__fd_mask ));
#line 399
    nfds = x_fd + 1;
    INT: 
    {
#line 406
    tmp___3 = select(nfds, (fd_set */* __restrict  */)(& readset), (fd_set */* __restrict  */)((void *)0),
                     (fd_set */* __restrict  */)((void *)0), (struct timeval */* __restrict  */)((void *)0));
    }
#line 406
    if (-1 == tmp___3) {
      {
#line 408
      tmp___2 = __errno_location();
      }
#line 408
      if (*tmp___2 == 4) {
#line 411
        if (do_update) {
          {
#line 416
          free_keys();
#line 417
          tmp___0 = getuid();
#line 417
          tmp___1 = getpwuid(tmp___0);
#line 417
          parse_rc(tmp___1->pw_dir, (char *)".keylaunchrc");
          }
        }
#line 423
        goto INT;
      } else {
        {
#line 427
        print_error((char *)"Select failed. Abort.\n", 1);
        }
      }
    } else
#line 435
    if ((readset.__fds_bits[x_fd / (8 * (int )sizeof(__fd_mask ))] & (1L << x_fd % (8 * (int )sizeof(__fd_mask )))) != 0L) {
      {
#line 437
      process_xevents();
      }
    }
  }
  while_break: /* CIL Label */ ;
  }
#line 440
  return (0);
}
}
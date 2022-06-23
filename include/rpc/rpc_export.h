
#ifndef RPC_EXPORT_H
#define RPC_EXPORT_H

#ifdef RPC_STATIC_DEFINE
#  define RPC_EXPORT
#  define RPC_NO_EXPORT
#else
#  ifndef RPC_EXPORT
#    ifdef rpc_EXPORTS
        /* We are building this library */
#      define RPC_EXPORT 
#    else
        /* We are using this library */
#      define RPC_EXPORT 
#    endif
#  endif

#  ifndef RPC_NO_EXPORT
#    define RPC_NO_EXPORT 
#  endif
#endif

#ifndef RPC_DEPRECATED
#  define RPC_DEPRECATED __declspec(deprecated)
#endif

#ifndef RPC_DEPRECATED_EXPORT
#  define RPC_DEPRECATED_EXPORT RPC_EXPORT RPC_DEPRECATED
#endif

#ifndef RPC_DEPRECATED_NO_EXPORT
#  define RPC_DEPRECATED_NO_EXPORT RPC_NO_EXPORT RPC_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef RPC_NO_DEPRECATED
#    define RPC_NO_DEPRECATED
#  endif
#endif

#endif /* RPC_EXPORT_H */

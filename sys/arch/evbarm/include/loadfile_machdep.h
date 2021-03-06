
#define BOOT_ELF32

#define LOAD_KERNEL	(LOAD_ALL & ~LOAD_TEXTA)
#define COUNT_KERNEL	(COUNT_ALL & ~COUNT_TEXTA)

#define LOADADDR(a)		(((u_long)(a)))
#define ALIGNENTRY(a)		((u_long)(a))
#define READ(f, b, c)		read((f), (void*)LOADADDR(b), (c))
#define BCOPY(s, d, c)		memcpy((void*)LOADADDR(d), (void*)(s), (c))
#define BZERO(d, c)		memset((void*)LOADADDR(d), 0, (c))
#define WARN(a)			(void)(printf a,			\
				       printf((errno ? ": %s\n" : "\n"), \
					      strerror(errno)))
#define PROGRESS(a)		(void)printf a
#define ALLOC(a)		alloc(a)
#define DEALLOC(a, b)		dealloc(a, b)
#define OKMAGIC(a)		((a) == ZMAGIC)

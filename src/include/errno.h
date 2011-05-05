#ifndef __ERRNO_H__
#define __ERRNO_H__

extern int *__errno_location(void) __attribute__ ((__const__));

enum {
	EDOM			= 1,
	ERANGE			= 2,
	ENOSYS			= 3,
	EINVAL			= 4,
	ESPIPE			= 5,
	EBADF			= 6,
	ENOMEM			= 7,
	EACCES			= 8,
	ENFILE			= 9,
	EMFILE			= 10,
	ENAMETOOLONG	= 11,
	ELOOP			= 12,
	ENOMSG			= 13,
	E2BIG			= 14,
	EINTR			= 15,
	EILSEQ			= 16,
	ENOEXEC			= 17,
	ENOENT			= 18,
	EPROTOTYPE		= 19,
	ESRCH			= 20,
	EPERM			= 21,
	ENOTDIR			= 22,
	ESTALE			= 23,
	EISDIR			= 24,
	EOPNOTSUPP		= 25,
	ENOTTY			= 26,
	EAGAIN			= 27,
	EIO				= 28,
	ENOSPC			= 29,
	EEXIST			= 30,
	EBUSY			= 31,
	EOVERFLOW		= 32,
};

#define errno 		(*__errno_location ())

#endif /* __ERRNO_H__ */
#ifndef _KCOMPAT_H_
#define _KCOMPAT_H_

#if __KERNEL__

#include <linux/kernel.h>
#include <linux/version.h>
#include <linux/module.h>

#if (LINUX_VERSION_CODE >= KERNEL_VERSION(5, 17, 0))
#define complete_and_exit(comp, code)	kthread_complete_and_exit(comp, code)
#endif

#endif /* __KERNEL__ */
#endif /* _KCOMPAT_H_ */

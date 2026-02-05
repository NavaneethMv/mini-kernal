##ifndef _KERNAL_TYPES_H
#define _KERNAL_TYPES_H

#include <stdint.h>
#include <stdio.h>

typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int32_t s32;

#define pr_info(fmt, ...) printf("[INFO] ", fmt, ##__VA_ARGS__)
#define pr_error(fmt, ...) printf("[ERROR] ", fmt, ##__VA_ARGS__)

#define likely(x)   __builtin_expect(!!(x), 1)
#define unlikely(x) __builtin_expect(!!(x), 0)

/* stanadard error codes */
#define EINVAL 22 /* Invalid - 22 */
#define ENOMEM 12 /* No memory - 12 */

#endif // !KERNAL_TYPES_H

typedef char   i8;
typedef short i16;
typedef int   i32;
typedef unsigned char   u8;
typedef unsigned short u16;
typedef unsigned int   u32;

#define CT_ASSERT_2(cond, line) typedef u8 ct_assert_line_##line[((!!(cond)) * 2) - 1]
#define CT_ASSERT_1(cond, line) CT_ASSERT_2(cond, line)
#define CT_ASSERT(cond) CT_ASSERT_1(cond, __LINE__)

CT_ASSERT(sizeof (i8) == 1);
CT_ASSERT(sizeof (u8) == 1);
CT_ASSERT(sizeof (i16) == 2);
CT_ASSERT(sizeof (u16) == 2);
CT_ASSERT(sizeof (i32) == 4);
CT_ASSERT(sizeof (u32) == 4);

typedef u32 uptr;
CT_ASSERT(sizeof (void*) == sizeof (uptr));
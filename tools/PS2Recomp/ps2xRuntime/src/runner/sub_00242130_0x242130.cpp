#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00242130
// Address: 0x242130 - 0x242380
void sub_00242130_0x242130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242130_0x242130");
#endif

    switch (ctx->pc) {
        case 0x24218cu: goto label_24218c;
        case 0x242338u: goto label_242338;
        default: break;
    }

    ctx->pc = 0x242130u;

    // 0x242130: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x242130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x242134: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x242134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x242138: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x242138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x24213c: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x24213cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x242140: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x242140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x242144: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x242144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242148: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x242148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x24214c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x24214cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242150: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x242150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x242154: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x242154u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242158: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x242158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x24215c: 0x241503f0  addiu       $s5, $zero, 0x3F0
    ctx->pc = 0x24215cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
    // 0x242160: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x242160u;
    {
        const bool branch_taken_0x242160 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x242164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242160u;
        // 0x242164: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242160) {
            ctx->pc = 0x242170u;
            goto label_242170;
        }
    }
    ctx->pc = 0x242168u;
    // 0x242168: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x242168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24216c: 0x241503f6  addiu       $s5, $zero, 0x3F6
    ctx->pc = 0x24216cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1014));
label_242170:
    // 0x242170: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x242170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x242174: 0x26700002  addiu       $s0, $s3, 0x2
    ctx->pc = 0x242174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x242178: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x242178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x24217c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24217cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242180: 0x26050003  addiu       $a1, $s0, 0x3
    ctx->pc = 0x242180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x242184: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x242184u;
    SET_GPR_U32(ctx, 31, 0x24218Cu);
    ctx->pc = 0x242188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242184u;
    // 0x242188: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x242184u, 0x24218Cu)) {
        return;
    }
    ctx->pc = 0x24218Cu;
label_24218c:
    // 0x24218c: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x24218cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x242190: 0x8cc6412c  lw          $a2, 0x412C($a2)
    ctx->pc = 0x242190u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x242194: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x242194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x242198: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x242198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24219c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x24219cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2421a0: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x2421a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2421a4: 0x10283e  dsrl32      $a1, $s0, 0
    ctx->pc = 0x2421a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x2421a8: 0x70852b89  pcpyld      $a1, $a0, $a1
    ctx->pc = 0x2421a8u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x2421ac: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x2421acu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x2421b0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2421b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2421b4: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x2421b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2421b8: 0x246310c0  addiu       $v1, $v1, 0x10C0
    ctx->pc = 0x2421b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4288));
    // 0x2421bc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2421bcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C10C0u));
    // 0x2421c0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2421c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2421c4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2421c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2421c8: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x2421c8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x2421cc: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x2421ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x2421d0: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2421d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2421d4: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x2421d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x2421d8: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x2421d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x2421dc: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x2421dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x2421e0: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x2421e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2421e4: 0x2238025  or          $s0, $s1, $v1
    ctx->pc = 0x2421e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x2421e8: 0x72042b89  pcpyld      $a1, $s0, $a0
    ctx->pc = 0x2421e8u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 4)));
    // 0x2421ec: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x2421ecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x2421f0: 0x12400031  beqz        $s2, . + 4 + (0x31 << 2)
    ctx->pc = 0x2421F0u;
    {
        const bool branch_taken_0x2421f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2421F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2421F0u;
        // 0x2421f4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2421f0) {
            ctx->pc = 0x2422B8u;
            goto label_2422b8;
        }
    }
    ctx->pc = 0x2421F8u;
    // 0x2421f8: 0x9e440008  lwu         $a0, 0x8($s2)
    ctx->pc = 0x2421f8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2421fc: 0x9e420004  lwu         $v0, 0x4($s2)
    ctx->pc = 0x2421fcu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x242200: 0x9e450000  lwu         $a1, 0x0($s2)
    ctx->pc = 0x242200u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x242204: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x242204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x242208: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x242208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24220c: 0x838025  or          $s0, $a0, $v1
    ctx->pc = 0x24220cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x242210: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x242210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x242214: 0x72052b89  pcpyld      $a1, $s0, $a1
    ctx->pc = 0x242214u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 5)));
    // 0x242218: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x242218u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x24221c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24221cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x242220: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x242220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x242224: 0x9c440008  lwu         $a0, 0x8($v0)
    ctx->pc = 0x242224u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x242228: 0x9c420004  lwu         $v0, 0x4($v0)
    ctx->pc = 0x242228u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24222c: 0x9e450010  lwu         $a1, 0x10($s2)
    ctx->pc = 0x24222cu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x242230: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x242230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x242234: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x242234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x242238: 0x838025  or          $s0, $a0, $v1
    ctx->pc = 0x242238u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x24223c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x24223cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x242240: 0x72052b89  pcpyld      $a1, $s0, $a1
    ctx->pc = 0x242240u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 5)));
    // 0x242244: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x242244u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x242248: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x242248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x24224c: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x24224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x242250: 0x9c440008  lwu         $a0, 0x8($v0)
    ctx->pc = 0x242250u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x242254: 0x9c420004  lwu         $v0, 0x4($v0)
    ctx->pc = 0x242254u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x242258: 0x9e450020  lwu         $a1, 0x20($s2)
    ctx->pc = 0x242258u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x24225c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x24225cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x242260: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x242260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x242264: 0x838025  or          $s0, $a0, $v1
    ctx->pc = 0x242264u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x242268: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x242268u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x24226c: 0x72052b89  pcpyld      $a1, $s0, $a1
    ctx->pc = 0x24226cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 5)));
    // 0x242270: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x242270u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x242274: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x242274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x242278: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x242278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x24227c: 0x9c440008  lwu         $a0, 0x8($v0)
    ctx->pc = 0x24227cu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x242280: 0x9c420004  lwu         $v0, 0x4($v0)
    ctx->pc = 0x242280u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x242284: 0x9e450030  lwu         $a1, 0x30($s2)
    ctx->pc = 0x242284u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x242288: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x242288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24228c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24228cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x242290: 0x838025  or          $s0, $a0, $v1
    ctx->pc = 0x242290u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x242294: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x242294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x242298: 0x72052b89  pcpyld      $a1, $s0, $a1
    ctx->pc = 0x242298u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 5)));
    // 0x24229c: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x24229cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x2422a0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2422a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2422a4: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x2422a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2422a8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2422a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2422ac: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2422acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2422b0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2422b0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2422b4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2422b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_2422b8:
    // 0x2422b8: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x2422b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2422bc: 0x24631070  addiu       $v1, $v1, 0x1070
    ctx->pc = 0x2422bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4208));
    // 0x2422c0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2422c0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C1070u));
    // 0x2422c4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2422c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2422c8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2422c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2422cc: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x2422ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2422d0: 0x24631080  addiu       $v1, $v1, 0x1080
    ctx->pc = 0x2422d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4224));
    // 0x2422d4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2422d4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C1080u));
    // 0x2422d8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2422d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2422dc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2422dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2422e0: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x2422e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2422e4: 0x24631090  addiu       $v1, $v1, 0x1090
    ctx->pc = 0x2422e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4240));
    // 0x2422e8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2422e8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C1090u));
    // 0x2422ec: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2422ecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2422f0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2422f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2422f4: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x2422f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2422f8: 0x246310a0  addiu       $v1, $v1, 0x10A0
    ctx->pc = 0x2422f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4256));
    // 0x2422fc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2422fcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C10A0u));
    // 0x242300: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x242300u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x242304: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x242304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x242308: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x242308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x24230c: 0x246310b0  addiu       $v1, $v1, 0x10B0
    ctx->pc = 0x24230cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x242310: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x242310u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C10B0u));
    // 0x242314: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x242314u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x242318: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x242318u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x24231c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24231cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x242320: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x242320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x242324: 0x1262000a  beq         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x242324u;
    {
        const bool branch_taken_0x242324 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x242328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242324u;
        // 0x242328: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242324) {
            ctx->pc = 0x242350u;
            goto label_242350;
        }
    }
    ctx->pc = 0x24232Cu;
    // 0x24232c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x24232cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x242330: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x242330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x242334: 0x0  nop
    ctx->pc = 0x242334u;
    // NOP
label_242338:
    // 0x242338: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x242338u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24233c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x24233cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x242340: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x242340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x242344: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x242344u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x242348: 0x1663fffb  bne         $s3, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x242348u;
    {
        const bool branch_taken_0x242348 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x24234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242348u;
        // 0x24234c: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242348) {
            ctx->pc = 0x242338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242338;
        }
    }
    ctx->pc = 0x242350u;
label_242350:
    // 0x242350: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242354: 0xac26412c  sw          $a2, 0x412C($at)
    ctx->pc = 0x242354u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24235c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x24235cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x242360: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x242360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x242364: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x242364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x242368: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x242368u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24236c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x24236cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242370: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x242370u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242378: 0x3e00008  jr          $ra
    ctx->pc = 0x242378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242378u;
        // 0x24237c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242380u;
}

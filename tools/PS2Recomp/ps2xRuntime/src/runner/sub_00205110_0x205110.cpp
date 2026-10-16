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

// Function: sub_00205110
// Address: 0x205110 - 0x2052a8
void sub_00205110_0x205110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205110_0x205110");
#endif

    switch (ctx->pc) {
        case 0x20515cu: goto label_20515c;
        case 0x205170u: goto label_205170;
        case 0x205184u: goto label_205184;
        case 0x2051b4u: goto label_2051b4;
        case 0x2051c4u: goto label_2051c4;
        case 0x205214u: goto label_205214;
        case 0x205260u: goto label_205260;
        default: break;
    }

    ctx->pc = 0x205110u;

    // 0x205110: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x205110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x205114: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x205114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x205118: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x205118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x20511c: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x20511cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x205120: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x205120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205124: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x205124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x205128: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x205128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20512c: 0x8c430288  lw          $v1, 0x288($v0)
    ctx->pc = 0x20512cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5C0288u));
    // 0x205130: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x205130u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205134: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x205134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x205138: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x205138u;
    {
        const bool branch_taken_0x205138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205138u;
        // 0x20513c: 0xffbf0110  sd          $ra, 0x110($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205138) {
            ctx->pc = 0x2051A4u;
            goto label_2051a4;
        }
    }
    ctx->pc = 0x205140u;
    // 0x205140: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x205140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x205144: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x205144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x205148: 0x8c46028c  lw          $a2, 0x28C($v0)
    ctx->pc = 0x205148u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5C028Cu));
    // 0x20514c: 0x24a53ea8  addiu       $a1, $a1, 0x3EA8
    ctx->pc = 0x20514cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16040));
    // 0x205150: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x205150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205154: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x205154u;
    SET_GPR_U32(ctx, 31, 0x20515Cu);
    ctx->pc = 0x205158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205154u;
    // 0x205158: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x205154u, 0x20515Cu)) {
        return;
    }
    ctx->pc = 0x20515Cu;
label_20515c:
    // 0x20515c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20515cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205160: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x205160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205164: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x205164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205168: 0xc081782  jal         func_205E08
    ctx->pc = 0x205168u;
    SET_GPR_U32(ctx, 31, 0x205170u);
    ctx->pc = 0x20516Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205168u;
    // 0x20516c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205E08u, 0x205168u, 0x205170u)) {
        return;
    }
    ctx->pc = 0x205170u;
label_205170:
    // 0x205170: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x205170u;
    {
        const bool branch_taken_0x205170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205170u;
        // 0x205174: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205170) {
            ctx->pc = 0x2051A4u;
            goto label_2051a4;
        }
    }
    ctx->pc = 0x205178u;
    // 0x205178: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x205178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20517c: 0xc0936ae  jal         func_24DAB8
    ctx->pc = 0x20517Cu;
    SET_GPR_U32(ctx, 31, 0x205184u);
    ctx->pc = 0x205180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20517Cu;
    // 0x205180: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DAB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DAB8u, 0x20517Cu, 0x205184u)) {
        return;
    }
    ctx->pc = 0x205184u;
label_205184:
    // 0x205184: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x205184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205188: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x205188u;
    {
        const bool branch_taken_0x205188 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x205188) {
            ctx->pc = 0x2051ACu;
            goto label_2051ac;
        }
    }
    ctx->pc = 0x205190u;
    // 0x205190: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x205190u;
    {
        const bool branch_taken_0x205190 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x205190) {
            ctx->pc = 0x2051A4u;
            goto label_2051a4;
        }
    }
    ctx->pc = 0x205198u;
    // 0x205198: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x205198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20519c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20519cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2051a0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2051a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2051a4:
    // 0x2051a4: 0x16000037  bnez        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2051A4u;
    {
        const bool branch_taken_0x2051a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2051A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051A4u;
        // 0x2051a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051a4) {
            ctx->pc = 0x205284u;
            goto label_205284;
        }
    }
    ctx->pc = 0x2051ACu;
label_2051ac:
    // 0x2051ac: 0xc0815b2  jal         func_2056C8
    ctx->pc = 0x2051ACu;
    SET_GPR_U32(ctx, 31, 0x2051B4u);
    ctx->pc = 0x2051B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2051ACu;
    // 0x2051b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2056C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2056C8u, 0x2051ACu, 0x2051B4u)) {
        return;
    }
    ctx->pc = 0x2051B4u;
label_2051b4:
    // 0x2051b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2051b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2051b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2051b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2051bc: 0xc0813f2  jal         func_204FC8
    ctx->pc = 0x2051BCu;
    SET_GPR_U32(ctx, 31, 0x2051C4u);
    ctx->pc = 0x2051C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2051BCu;
    // 0x2051c0: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204FC8u, 0x2051BCu, 0x2051C4u)) {
        return;
    }
    ctx->pc = 0x2051C4u;
label_2051c4:
    // 0x2051c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2051c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2051c8: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2051C8u;
    {
        const bool branch_taken_0x2051c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2051CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051C8u;
        // 0x2051cc: 0x8fa40100  lw          $a0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051c8) {
            ctx->pc = 0x205280u;
            goto label_205280;
        }
    }
    ctx->pc = 0x2051D0u;
    // 0x2051d0: 0x8c920020  lw          $s2, 0x20($a0)
    ctx->pc = 0x2051d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2051d4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2051d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2051d8: 0x1860001b  blez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2051D8u;
    {
        const bool branch_taken_0x2051d8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2051DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051D8u;
        // 0x2051dc: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051d8) {
            ctx->pc = 0x205248u;
            goto label_205248;
        }
    }
    ctx->pc = 0x2051E0u;
    // 0x2051e0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2051E0u;
    {
        const bool branch_taken_0x2051e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2051e0) {
            ctx->pc = 0x2051E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2051E0u;
            // 0x2051e4: 0x9c820024  lwu         $v0, 0x24($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2051FCu;
            goto label_2051fc;
        }
    }
    ctx->pc = 0x2051E8u;
    // 0x2051e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2051e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2051ec: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2051ECu;
    {
        const bool branch_taken_0x2051ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2051ec) {
            ctx->pc = 0x2051F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2051ECu;
            // 0x2051f0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205230u;
            goto label_205230;
        }
    }
    ctx->pc = 0x2051F4u;
    // 0x2051f4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2051F4u;
    {
        const bool branch_taken_0x2051f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2051F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051F4u;
        // 0x2051f8: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051f4) {
            ctx->pc = 0x20524Cu;
            goto label_20524c;
        }
    }
    ctx->pc = 0x2051FCu;
label_2051fc:
    // 0x2051fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2051fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205200: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x205200u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x205204: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x205204u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x205208: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x205208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x20520c: 0xc09cce2  jal         func_273388
    ctx->pc = 0x20520Cu;
    SET_GPR_U32(ctx, 31, 0x205214u);
    ctx->pc = 0x205210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20520Cu;
    // 0x205210: 0x9e250004  lwu         $a1, 0x4($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x273388u, 0x20520Cu, 0x205214u)) {
        return;
    }
    ctx->pc = 0x205214u;
label_205214:
    // 0x205214: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x205214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x205218: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x205218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20521c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20521cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x205220: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x205220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x205224: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x205224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x205228: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x205228u;
    {
        const bool branch_taken_0x205228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205228u;
        // 0x20522c: 0xfe030000  sd          $v1, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205228) {
            ctx->pc = 0x205248u;
            goto label_205248;
        }
    }
    ctx->pc = 0x205230u;
label_205230:
    // 0x205230: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x205230u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x205234: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x205234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x205238: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x205238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20523c: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x20523cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x205240: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x205240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x205244: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x205244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_205248:
    // 0x205248: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x205248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_20524c:
    // 0x20524c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x20524Cu;
    {
        const bool branch_taken_0x20524c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x205250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20524Cu;
        // 0x205250: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20524c) {
            ctx->pc = 0x205264u;
            goto label_205264;
        }
    }
    ctx->pc = 0x205254u;
    // 0x205254: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x205254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x205258: 0xc08193e  jal         func_2064F8
    ctx->pc = 0x205258u;
    SET_GPR_U32(ctx, 31, 0x205260u);
    ctx->pc = 0x20525Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205258u;
    // 0x20525c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2064F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2064F8u, 0x205258u, 0x205260u)) {
        return;
    }
    ctx->pc = 0x205260u;
label_205260:
    // 0x205260: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x205260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205264:
    // 0x205264: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x205264u;
    {
        const bool branch_taken_0x205264 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x205268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205264u;
        // 0x205268: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205264) {
            ctx->pc = 0x205284u;
            goto label_205284;
        }
    }
    ctx->pc = 0x20526Cu;
    // 0x20526c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x20526cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x205270: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x205270u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x205274: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x205274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x205278: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x205278u;
    {
        const bool branch_taken_0x205278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205278) {
            ctx->pc = 0x20527Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205278u;
            // 0x20527c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205280u;
            goto label_205280;
        }
    }
    ctx->pc = 0x205280u;
label_205280:
    // 0x205280: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x205280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205284:
    // 0x205284: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x205284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x205288: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x205288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x20528c: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x20528cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x205290: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x205290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x205294: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x205294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x205298: 0x3e00008  jr          $ra
    ctx->pc = 0x205298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205298u;
        // 0x20529c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2052A0u;
    // 0x2052a0: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x2052a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2052a4: 0x0  nop
    ctx->pc = 0x2052a4u;
    // NOP
    ctx->pc = 0x2052a8u;
}

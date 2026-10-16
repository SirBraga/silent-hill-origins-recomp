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

// Function: sub_00220220
// Address: 0x220220 - 0x2202d8
void sub_00220220_0x220220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220220_0x220220");
#endif

    switch (ctx->pc) {
        case 0x220220u: goto label_220220;
        case 0x220224u: goto label_220224;
        case 0x220228u: goto label_220228;
        case 0x22022cu: goto label_22022c;
        case 0x220230u: goto label_220230;
        case 0x220234u: goto label_220234;
        case 0x220238u: goto label_220238;
        case 0x22023cu: goto label_22023c;
        case 0x220240u: goto label_220240;
        case 0x220244u: goto label_220244;
        case 0x220248u: goto label_220248;
        case 0x22024cu: goto label_22024c;
        case 0x220250u: goto label_220250;
        case 0x220254u: goto label_220254;
        case 0x220258u: goto label_220258;
        case 0x22025cu: goto label_22025c;
        case 0x220260u: goto label_220260;
        case 0x220264u: goto label_220264;
        case 0x220268u: goto label_220268;
        case 0x22026cu: goto label_22026c;
        case 0x220270u: goto label_220270;
        case 0x220274u: goto label_220274;
        case 0x220278u: goto label_220278;
        case 0x22027cu: goto label_22027c;
        case 0x220280u: goto label_220280;
        case 0x220284u: goto label_220284;
        case 0x220288u: goto label_220288;
        case 0x22028cu: goto label_22028c;
        case 0x220290u: goto label_220290;
        case 0x220294u: goto label_220294;
        case 0x220298u: goto label_220298;
        case 0x22029cu: goto label_22029c;
        case 0x2202a0u: goto label_2202a0;
        case 0x2202a4u: goto label_2202a4;
        case 0x2202a8u: goto label_2202a8;
        case 0x2202acu: goto label_2202ac;
        case 0x2202b0u: goto label_2202b0;
        case 0x2202b4u: goto label_2202b4;
        case 0x2202b8u: goto label_2202b8;
        case 0x2202bcu: goto label_2202bc;
        case 0x2202c0u: goto label_2202c0;
        case 0x2202c4u: goto label_2202c4;
        case 0x2202c8u: goto label_2202c8;
        case 0x2202ccu: goto label_2202cc;
        case 0x2202d0u: goto label_2202d0;
        case 0x2202d4u: goto label_2202d4;
        default: break;
    }

    ctx->pc = 0x220220u;

label_220220:
    // 0x220220: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x220220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_220224:
    // 0x220224: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x220224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_220228:
    // 0x220228: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x220228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_22022c:
    // 0x22022c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22022cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_220230:
    // 0x220230: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x220230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_220234:
    // 0x220234: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x220234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_220238:
    // 0x220238: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x220238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_22023c:
    // 0x22023c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x22023cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_220240:
    // 0x220240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x220240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_220244:
    // 0x220244: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x220244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_220248:
    // 0x220248: 0x8e1101a8  lw          $s1, 0x1A8($s0)
    ctx->pc = 0x220248u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_22024c:
    // 0x22024c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x22024cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_220250:
    // 0x220250: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_220254:
    if (ctx->pc == 0x220254u) {
        ctx->pc = 0x220254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220250u;
        // 0x220254: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220258u;
        goto label_220258;
    }
    ctx->pc = 0x220250u;
    {
        const bool branch_taken_0x220250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220250u;
        // 0x220254: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220250) {
            ctx->pc = 0x220274u;
            goto label_220274;
        }
    }
    ctx->pc = 0x220258u;
label_220258:
    // 0x220258: 0x8e0301ac  lw          $v1, 0x1AC($s0)
    ctx->pc = 0x220258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
label_22025c:
    // 0x22025c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x22025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_220260:
    // 0x220260: 0x40f809  jalr        $v0
label_220264:
    if (ctx->pc == 0x220264u) {
        ctx->pc = 0x220264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220260u;
        // 0x220264: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220268u;
        goto label_220268;
    }
    ctx->pc = 0x220260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x220268u);
        ctx->pc = 0x220264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220260u;
        // 0x220264: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220260u, 0x220268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x220268u;
label_220268:
    // 0x220268: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_22026c:
    if (ctx->pc == 0x22026Cu) {
        ctx->pc = 0x22026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220268u;
        // 0x22026c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220270u;
        goto label_220270;
    }
    ctx->pc = 0x220268u;
    {
        const bool branch_taken_0x220268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220268u;
        // 0x22026c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220268) {
            ctx->pc = 0x2202B8u;
            goto label_2202b8;
        }
    }
    ctx->pc = 0x220270u;
label_220270:
    // 0x220270: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x220270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_220274:
    // 0x220274: 0x8e0201b0  lw          $v0, 0x1B0($s0)
    ctx->pc = 0x220274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
label_220278:
    // 0x220278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22027c:
    // 0x22027c: 0x8e10013c  lw          $s0, 0x13C($s0)
    ctx->pc = 0x22027cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
label_220280:
    // 0x220280: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x220280u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_220284:
    // 0x220284: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x220284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_220288:
    // 0x220288: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x220288u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22028c:
    // 0x22028c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x22028cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_220290:
    // 0x220290: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x220290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_220294:
    // 0x220294: 0x26260034  addiu       $a2, $s1, 0x34
    ctx->pc = 0x220294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_220298:
    // 0x220298: 0x60f809  jalr        $v1
label_22029c:
    if (ctx->pc == 0x22029Cu) {
        ctx->pc = 0x22029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220298u;
        // 0x22029c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2202A0u;
        goto label_2202a0;
    }
    ctx->pc = 0x220298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2202A0u);
        ctx->pc = 0x22029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220298u;
        // 0x22029c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220298u, 0x2202A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2202A0u;
label_2202a0:
    // 0x2202a0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2202a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2202a4:
    // 0x2202a4: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2202a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2202a8:
    // 0x2202a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2202ac:
    if (ctx->pc == 0x2202ACu) {
        ctx->pc = 0x2202ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202A8u;
        // 0x2202ac: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2202B0u;
        goto label_2202b0;
    }
    ctx->pc = 0x2202A8u;
    {
        const bool branch_taken_0x2202a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2202ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202A8u;
        // 0x2202ac: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202a8) {
            ctx->pc = 0x2202BCu;
            goto label_2202bc;
        }
    }
    ctx->pc = 0x2202B0u;
label_2202b0:
    // 0x2202b0: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x2202b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_2202b4:
    // 0x2202b4: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x2202b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_2202b8:
    // 0x2202b8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2202b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2202bc:
    // 0x2202bc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2202bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2202c0:
    // 0x2202c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2202c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2202c4:
    // 0x2202c4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2202c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2202c8:
    // 0x2202c8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2202c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2202cc:
    // 0x2202cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2202ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2202d0:
    // 0x2202d0: 0x3e00008  jr          $ra
label_2202d4:
    if (ctx->pc == 0x2202D4u) {
        ctx->pc = 0x2202D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202D0u;
        // 0x2202d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2202D8u;
        goto label_fallthrough_0x2202d0;
    }
    ctx->pc = 0x2202D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2202D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202D0u;
        // 0x2202d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2202D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2202d0:
    ctx->pc = 0x2202D8u;
}

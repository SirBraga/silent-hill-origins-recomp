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

// Function: sub_001493E8
// Address: 0x1493e8 - 0x149500
void sub_001493E8_0x1493e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001493E8_0x1493e8");
#endif

    switch (ctx->pc) {
        case 0x14940cu: goto label_14940c;
        case 0x149420u: goto label_149420;
        case 0x149440u: goto label_149440;
        case 0x1494d4u: goto label_1494d4;
        default: break;
    }

    ctx->pc = 0x1493e8u;

    // 0x1493e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1493e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1493ec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1493ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1493f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1493f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1493f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1493f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1493f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1493f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1493fc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1493fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x149400: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x149400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x149404: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x149404u;
    SET_GPR_U32(ctx, 31, 0x14940Cu);
    ctx->pc = 0x149408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149404u;
    // 0x149408: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x149404u, 0x14940Cu)) {
        return;
    }
    ctx->pc = 0x14940Cu;
label_14940c:
    // 0x14940c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14940cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x149410: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x149410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149414: 0x8c46ee88  lw          $a2, -0x1178($v0)
    ctx->pc = 0x149414u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BEE88u));
    // 0x149418: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x149418u;
    SET_GPR_U32(ctx, 31, 0x149420u);
    ctx->pc = 0x14941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149418u;
    // 0x14941c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x149418u, 0x149420u)) {
        return;
    }
    ctx->pc = 0x149420u;
label_149420:
    // 0x149420: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x149420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149424: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x149424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149428: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x149428u;
    {
        const bool branch_taken_0x149428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149428u;
        // 0x14942c: 0x24130005  addiu       $s3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149428) {
            ctx->pc = 0x1494E4u;
            goto label_1494e4;
        }
    }
    ctx->pc = 0x149430u;
    // 0x149430: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x149430u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x149434: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x149434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x149438: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x149438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14943c: 0x0  nop
    ctx->pc = 0x14943cu;
    // NOP
label_149440:
    // 0x149440: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x149440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x149444: 0x10730012  beq         $v1, $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x149444u;
    {
        const bool branch_taken_0x149444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x149448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149444u;
        // 0x149448: 0x2c620006  sltiu       $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149444) {
            ctx->pc = 0x149490u;
            goto label_149490;
        }
    }
    ctx->pc = 0x14944Cu;
    // 0x14944c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14944Cu;
    {
        const bool branch_taken_0x14944c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14944c) {
            ctx->pc = 0x149464u;
            goto label_149464;
        }
    }
    ctx->pc = 0x149454u;
    // 0x149454: 0x10720007  beq         $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x149454u;
    {
        const bool branch_taken_0x149454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x149458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149454u;
        // 0x149458: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149454) {
            ctx->pc = 0x149474u;
            goto label_149474;
        }
    }
    ctx->pc = 0x14945Cu;
    // 0x14945c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x14945Cu;
    {
        const bool branch_taken_0x14945c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14945Cu;
        // 0x149460: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14945c) {
            ctx->pc = 0x1494C0u;
            goto label_1494c0;
        }
    }
    ctx->pc = 0x149464u;
label_149464:
    // 0x149464: 0x10700011  beq         $v1, $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x149464u;
    {
        const bool branch_taken_0x149464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x149468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149464u;
        // 0x149468: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149464) {
            ctx->pc = 0x1494ACu;
            goto label_1494ac;
        }
    }
    ctx->pc = 0x14946Cu;
    // 0x14946c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14946Cu;
    {
        const bool branch_taken_0x14946c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14946Cu;
        // 0x149470: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14946c) {
            ctx->pc = 0x1494C0u;
            goto label_1494c0;
        }
    }
    ctx->pc = 0x149474u;
label_149474:
    // 0x149474: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x149474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x149478: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x149478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x14947c: 0x80830008  lb          $v1, 0x8($a0)
    ctx->pc = 0x14947cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x149480: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x149480u;
    {
        const bool branch_taken_0x149480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149480) {
            ctx->pc = 0x149484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149480u;
            // 0x149484: 0xae200044  sw          $zero, 0x44($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1494B8u;
            goto label_1494b8;
        }
    }
    ctx->pc = 0x149488u;
    // 0x149488: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x149488u;
    {
        const bool branch_taken_0x149488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149488u;
        // 0x14948c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149488) {
            ctx->pc = 0x1494BCu;
            goto label_1494bc;
        }
    }
    ctx->pc = 0x149490u;
label_149490:
    // 0x149490: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x149490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x149494: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x149494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x149498: 0x80830008  lb          $v1, 0x8($a0)
    ctx->pc = 0x149498u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14949c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14949Cu;
    {
        const bool branch_taken_0x14949c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14949c) {
            ctx->pc = 0x1494A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14949Cu;
            // 0x1494a0: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1494B8u;
            goto label_1494b8;
        }
    }
    ctx->pc = 0x1494A4u;
    // 0x1494a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1494A4u;
    {
        const bool branch_taken_0x1494a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1494A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1494A4u;
        // 0x1494a8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1494a4) {
            ctx->pc = 0x1494BCu;
            goto label_1494bc;
        }
    }
    ctx->pc = 0x1494ACu;
label_1494ac:
    // 0x1494ac: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1494acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1494b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1494b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1494b4: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x1494b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_1494b8:
    // 0x1494b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1494b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1494bc:
    // 0x1494bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1494bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1494c0:
    // 0x1494c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1494c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1494c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1494c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1494c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1494c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1494cc: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1494CCu;
    SET_GPR_U32(ctx, 31, 0x1494D4u);
    ctx->pc = 0x1494D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1494CCu;
    // 0x1494d0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1494CCu, 0x1494D4u)) {
        return;
    }
    ctx->pc = 0x1494D4u;
label_1494d4:
    // 0x1494d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1494d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1494d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1494d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1494dc: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1494DCu;
    {
        const bool branch_taken_0x1494dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1494E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1494DCu;
        // 0x1494e0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1494dc) {
            ctx->pc = 0x149440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149440;
        }
    }
    ctx->pc = 0x1494E4u;
label_1494e4:
    // 0x1494e4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1494e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1494e8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1494e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1494ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1494ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1494f0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1494f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1494f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1494f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1494f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1494F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1494FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1494F8u;
        // 0x1494fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1494F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149500u;
}

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

// Function: sub_001023E0
// Address: 0x1023e0 - 0x1024a8
void sub_001023E0_0x1023e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001023E0_0x1023e0");
#endif

    switch (ctx->pc) {
        case 0x1023e8u: goto label_1023e8;
        case 0x102448u: goto label_102448;
        case 0x10245cu: goto label_10245c;
        default: break;
    }

    ctx->pc = 0x1023e0u;

    // 0x1023e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1023E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1023E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023E0u;
        // 0x1023e4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1023E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1023E8u;
label_1023e8:
    // 0x1023e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1023e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1023ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1023ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1023f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1023f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1023f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1023f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1023f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1023f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1023fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1023fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102400: 0x8e020198  lw          $v0, 0x198($s0)
    ctx->pc = 0x102400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x102404: 0x56220016  bnel        $s1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x102404u;
    {
        const bool branch_taken_0x102404 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x102404) {
            ctx->pc = 0x102408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102404u;
            // 0x102408: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102460u;
            goto label_102460;
        }
    }
    ctx->pc = 0x10240Cu;
    // 0x10240c: 0x8e0201e0  lw          $v0, 0x1E0($s0)
    ctx->pc = 0x10240cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x102410: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x102410u;
    {
        const bool branch_taken_0x102410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102410) {
            ctx->pc = 0x102414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102410u;
            // 0x102414: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102460u;
            goto label_102460;
        }
    }
    ctx->pc = 0x102418u;
    // 0x102418: 0xae0001c8  sw          $zero, 0x1C8($s0)
    ctx->pc = 0x102418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 0));
    // 0x10241c: 0x260201f0  addiu       $v0, $s0, 0x1F0
    ctx->pc = 0x10241cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x102420: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x102420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x102424: 0x26030200  addiu       $v1, $s0, 0x200
    ctx->pc = 0x102424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x102428: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x102428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x10242c: 0xae0001f0  sw          $zero, 0x1F0($s0)
    ctx->pc = 0x10242cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 0));
    // 0x102430: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x102430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x102434: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x102434u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x102438: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x102438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
    // 0x10243c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x10243cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x102440: 0xc09d926  jal         func_276498
    ctx->pc = 0x102440u;
    SET_GPR_U32(ctx, 31, 0x102448u);
    ctx->pc = 0x102444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102440u;
    // 0x102444: 0xc44c000c  lwc1        $f12, 0xC($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x102440u, 0x102448u)) {
        return;
    }
    ctx->pc = 0x102448u;
label_102448:
    // 0x102448: 0x8e03029c  lw          $v1, 0x29C($s0)
    ctx->pc = 0x102448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
    // 0x10244c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10244Cu;
    {
        const bool branch_taken_0x10244c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10244c) {
            ctx->pc = 0x102450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10244Cu;
            // 0x102450: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102460u;
            goto label_102460;
        }
    }
    ctx->pc = 0x102454u;
    // 0x102454: 0xc04056e  jal         func_1015B8
    ctx->pc = 0x102454u;
    SET_GPR_U32(ctx, 31, 0x10245Cu);
    ctx->pc = 0x102458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102454u;
    // 0x102458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1015B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1015B8u, 0x102454u, 0x10245Cu)) {
        return;
    }
    ctx->pc = 0x10245Cu;
label_10245c:
    // 0x10245c: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x10245cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_102460:
    // 0x102460: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x102460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x102464: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x102464u;
    {
        const bool branch_taken_0x102464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102464u;
        // 0x102468: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102464) {
            ctx->pc = 0x102488u;
            goto label_102488;
        }
    }
    ctx->pc = 0x10246Cu;
    // 0x10246c: 0x8e0301e0  lw          $v1, 0x1E0($s0)
    ctx->pc = 0x10246cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x102470: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x102470u;
    {
        const bool branch_taken_0x102470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x102474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102470u;
        // 0x102474: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102470) {
            ctx->pc = 0x10248Cu;
            goto label_10248c;
        }
    }
    ctx->pc = 0x102478u;
    // 0x102478: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x102478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x10247c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x10247cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x102480: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x102480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x102484: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x102484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_102488:
    // 0x102488: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x102488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10248c:
    // 0x10248c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10248cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102490: 0xae0301d8  sw          $v1, 0x1D8($s0)
    ctx->pc = 0x102490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 3));
    // 0x102494: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x102494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102498: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x102498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10249c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10249cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1024a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1024A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1024A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024A0u;
        // 0x1024a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1024A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1024A8u;
}

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

// Function: sub_0024E560
// Address: 0x24e560 - 0x24e5f8
void sub_0024E560_0x24e560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E560_0x24e560");
#endif

    switch (ctx->pc) {
        case 0x24e560u: goto label_24e560;
        case 0x24e564u: goto label_24e564;
        case 0x24e568u: goto label_24e568;
        case 0x24e56cu: goto label_24e56c;
        case 0x24e570u: goto label_24e570;
        case 0x24e574u: goto label_24e574;
        case 0x24e578u: goto label_24e578;
        case 0x24e57cu: goto label_24e57c;
        case 0x24e580u: goto label_24e580;
        case 0x24e584u: goto label_24e584;
        case 0x24e588u: goto label_24e588;
        case 0x24e58cu: goto label_24e58c;
        case 0x24e590u: goto label_24e590;
        case 0x24e594u: goto label_24e594;
        case 0x24e598u: goto label_24e598;
        case 0x24e59cu: goto label_24e59c;
        case 0x24e5a0u: goto label_24e5a0;
        case 0x24e5a4u: goto label_24e5a4;
        case 0x24e5a8u: goto label_24e5a8;
        case 0x24e5acu: goto label_24e5ac;
        case 0x24e5b0u: goto label_24e5b0;
        case 0x24e5b4u: goto label_24e5b4;
        case 0x24e5b8u: goto label_24e5b8;
        case 0x24e5bcu: goto label_24e5bc;
        case 0x24e5c0u: goto label_24e5c0;
        case 0x24e5c4u: goto label_24e5c4;
        case 0x24e5c8u: goto label_24e5c8;
        case 0x24e5ccu: goto label_24e5cc;
        case 0x24e5d0u: goto label_24e5d0;
        case 0x24e5d4u: goto label_24e5d4;
        case 0x24e5d8u: goto label_24e5d8;
        case 0x24e5dcu: goto label_24e5dc;
        case 0x24e5e0u: goto label_24e5e0;
        case 0x24e5e4u: goto label_24e5e4;
        case 0x24e5e8u: goto label_24e5e8;
        case 0x24e5ecu: goto label_24e5ec;
        case 0x24e5f0u: goto label_24e5f0;
        case 0x24e5f4u: goto label_24e5f4;
        default: break;
    }

    ctx->pc = 0x24e560u;

label_24e560:
    // 0x24e560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24e560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_24e564:
    // 0x24e564: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24e564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_24e568:
    // 0x24e568: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x24e568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_24e56c:
    // 0x24e56c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24e56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24e570:
    // 0x24e570: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24e570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24e574:
    // 0x24e574: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24e574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_24e578:
    // 0x24e578: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x24e578u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_24e57c:
    // 0x24e57c: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_24e580:
    if (ctx->pc == 0x24E580u) {
        ctx->pc = 0x24E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E57Cu;
        // 0x24e580: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E584u;
        goto label_24e584;
    }
    ctx->pc = 0x24E57Cu;
    {
        const bool branch_taken_0x24e57c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E57Cu;
        // 0x24e580: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e57c) {
            ctx->pc = 0x24E5DCu;
            goto label_24e5dc;
        }
    }
    ctx->pc = 0x24E584u;
label_24e584:
    // 0x24e584: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x24e584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_24e588:
    // 0x24e588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24e588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24e58c:
    // 0x24e58c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x24e58cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24e590:
    // 0x24e590: 0x40f809  jalr        $v0
label_24e594:
    if (ctx->pc == 0x24E594u) {
        ctx->pc = 0x24E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E590u;
        // 0x24e594: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E598u;
        goto label_24e598;
    }
    ctx->pc = 0x24E590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24E598u);
        ctx->pc = 0x24E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E590u;
        // 0x24e594: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E590u, 0x24E598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24E598u;
label_24e598:
    // 0x24e598: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_24e59c:
    if (ctx->pc == 0x24E59Cu) {
        ctx->pc = 0x24E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E598u;
        // 0x24e59c: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E5A0u;
        goto label_24e5a0;
    }
    ctx->pc = 0x24E598u;
    {
        const bool branch_taken_0x24e598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e598) {
            ctx->pc = 0x24E59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E598u;
            // 0x24e59c: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E5D4u;
            goto label_24e5d4;
        }
    }
    ctx->pc = 0x24E5A0u;
label_24e5a0:
    // 0x24e5a0: 0x8e100034  lw          $s0, 0x34($s0)
    ctx->pc = 0x24e5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_24e5a4:
    // 0x24e5a4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_24e5a8:
    if (ctx->pc == 0x24E5A8u) {
        ctx->pc = 0x24E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E5A4u;
        // 0x24e5a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E5ACu;
        goto label_24e5ac;
    }
    ctx->pc = 0x24E5A4u;
    {
        const bool branch_taken_0x24e5a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E5A4u;
        // 0x24e5a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e5a4) {
            ctx->pc = 0x24E5E0u;
            goto label_24e5e0;
        }
    }
    ctx->pc = 0x24E5ACu;
label_24e5ac:
    // 0x24e5ac: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x24e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_24e5b0:
    // 0x24e5b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24e5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24e5b4:
    // 0x24e5b4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x24e5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24e5b8:
    // 0x24e5b8: 0x40f809  jalr        $v0
label_24e5bc:
    if (ctx->pc == 0x24E5BCu) {
        ctx->pc = 0x24E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E5B8u;
        // 0x24e5bc: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E5C0u;
        goto label_24e5c0;
    }
    ctx->pc = 0x24E5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24E5C0u);
        ctx->pc = 0x24E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E5B8u;
        // 0x24e5bc: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E5B8u, 0x24E5C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24E5C0u;
label_24e5c0:
    // 0x24e5c0: 0x8e100034  lw          $s0, 0x34($s0)
    ctx->pc = 0x24e5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_24e5c4:
    // 0x24e5c4: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
label_24e5c8:
    if (ctx->pc == 0x24E5C8u) {
        ctx->pc = 0x24E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E5C4u;
        // 0x24e5c8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E5CCu;
        goto label_24e5cc;
    }
    ctx->pc = 0x24E5C4u;
    {
        const bool branch_taken_0x24e5c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e5c4) {
            ctx->pc = 0x24E5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E5C4u;
            // 0x24e5c8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e5b0;
        }
    }
    ctx->pc = 0x24E5CCu;
label_24e5cc:
    // 0x24e5cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_24e5d0:
    if (ctx->pc == 0x24E5D0u) {
        ctx->pc = 0x24E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E5CCu;
        // 0x24e5d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E5D4u;
        goto label_24e5d4;
    }
    ctx->pc = 0x24E5CCu;
    {
        const bool branch_taken_0x24e5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E5CCu;
        // 0x24e5d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e5cc) {
            ctx->pc = 0x24E5E0u;
            goto label_24e5e0;
        }
    }
    ctx->pc = 0x24E5D4u;
label_24e5d4:
    // 0x24e5d4: 0x5600ffec  bnel        $s0, $zero, . + 4 + (-0x14 << 2)
label_24e5d8:
    if (ctx->pc == 0x24E5D8u) {
        ctx->pc = 0x24E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E5D4u;
        // 0x24e5d8: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E5DCu;
        goto label_24e5dc;
    }
    ctx->pc = 0x24E5D4u;
    {
        const bool branch_taken_0x24e5d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e5d4) {
            ctx->pc = 0x24E5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E5D4u;
            // 0x24e5d8: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e588;
        }
    }
    ctx->pc = 0x24E5DCu;
label_24e5dc:
    // 0x24e5dc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x24e5dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24e5e0:
    // 0x24e5e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24e5e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24e5e4:
    // 0x24e5e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24e5e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24e5e8:
    // 0x24e5e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x24e5e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24e5ec:
    // 0x24e5ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24e5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24e5f0:
    // 0x24e5f0: 0x3e00008  jr          $ra
label_24e5f4:
    if (ctx->pc == 0x24E5F4u) {
        ctx->pc = 0x24E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E5F0u;
        // 0x24e5f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E5F8u;
        goto label_fallthrough_0x24e5f0;
    }
    ctx->pc = 0x24E5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E5F0u;
        // 0x24e5f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24e5f0:
    ctx->pc = 0x24E5F8u;
}

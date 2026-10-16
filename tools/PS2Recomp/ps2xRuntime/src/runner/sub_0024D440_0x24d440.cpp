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

// Function: sub_0024D440
// Address: 0x24d440 - 0x24d518
void sub_0024D440_0x24d440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D440_0x24d440");
#endif

    switch (ctx->pc) {
        case 0x24d4b8u: goto label_24d4b8;
        case 0x24d4c8u: goto label_24d4c8;
        case 0x24d4d8u: goto label_24d4d8;
        case 0x24d4e8u: goto label_24d4e8;
        case 0x24d4f8u: goto label_24d4f8;
        case 0x24d504u: goto label_24d504;
        default: break;
    }

    ctx->pc = 0x24d440u;

    // 0x24d440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24d440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24d444: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x24d444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d448: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x24d448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x24d44c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x24d44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d450: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24d450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24d454: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24D454u;
    {
        const bool branch_taken_0x24d454 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D454u;
        // 0x24d458: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d454) {
            ctx->pc = 0x24D464u;
            goto label_24d464;
        }
    }
    ctx->pc = 0x24D45Cu;
    // 0x24d45c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x24D45Cu;
    {
        const bool branch_taken_0x24d45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D45Cu;
        // 0x24d460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d45c) {
            ctx->pc = 0x24D508u;
            goto label_24d508;
        }
    }
    ctx->pc = 0x24D464u;
label_24d464:
    // 0x24d464: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x24d464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x24d468: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24d468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24d46c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x24d46cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x24d470: 0x10c20013  beq         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24D470u;
    {
        const bool branch_taken_0x24d470 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D470u;
        // 0x24d474: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d470) {
            ctx->pc = 0x24D4C0u;
            goto label_24d4c0;
        }
    }
    ctx->pc = 0x24D478u;
    // 0x24d478: 0x2cc20003  sltiu       $v0, $a2, 0x3
    ctx->pc = 0x24d478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x24d47c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24D47Cu;
    {
        const bool branch_taken_0x24d47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D47Cu;
        // 0x24d480: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d47c) {
            ctx->pc = 0x24D494u;
            goto label_24d494;
        }
    }
    ctx->pc = 0x24D484u;
    // 0x24d484: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24D484u;
    {
        const bool branch_taken_0x24d484 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x24d484) {
            ctx->pc = 0x24D4B0u;
            goto label_24d4b0;
        }
    }
    ctx->pc = 0x24D48Cu;
    // 0x24d48c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x24D48Cu;
    {
        const bool branch_taken_0x24d48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D48Cu;
        // 0x24d490: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d48c) {
            ctx->pc = 0x24D4F0u;
            goto label_24d4f0;
        }
    }
    ctx->pc = 0x24D494u;
label_24d494:
    // 0x24d494: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24d494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24d498: 0x10c2000d  beq         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24D498u;
    {
        const bool branch_taken_0x24d498 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D498u;
        // 0x24d49c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d498) {
            ctx->pc = 0x24D4D0u;
            goto label_24d4d0;
        }
    }
    ctx->pc = 0x24D4A0u;
    // 0x24d4a0: 0x10c2000f  beq         $a2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24D4A0u;
    {
        const bool branch_taken_0x24d4a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D4A0u;
        // 0x24d4a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d4a0) {
            ctx->pc = 0x24D4E0u;
            goto label_24d4e0;
        }
    }
    ctx->pc = 0x24D4A8u;
    // 0x24d4a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x24D4A8u;
    {
        const bool branch_taken_0x24d4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D4A8u;
        // 0x24d4ac: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d4a8) {
            ctx->pc = 0x24D4F0u;
            goto label_24d4f0;
        }
    }
    ctx->pc = 0x24D4B0u;
label_24d4b0:
    // 0x24d4b0: 0xc09347c  jal         func_24D1F0
    ctx->pc = 0x24D4B0u;
    SET_GPR_U32(ctx, 31, 0x24D4B8u);
    ctx->pc = 0x24D4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D4B0u;
    // 0x24d4b4: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D1F0u, 0x24D4B0u, 0x24D4B8u)) {
        return;
    }
    ctx->pc = 0x24D4B8u;
label_24d4b8:
    // 0x24d4b8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x24D4B8u;
    {
        const bool branch_taken_0x24d4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D4B8u;
        // 0x24d4bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d4b8) {
            ctx->pc = 0x24D504u;
            goto label_24d504;
        }
    }
    ctx->pc = 0x24D4C0u;
label_24d4c0:
    // 0x24d4c0: 0xc093490  jal         func_24D240
    ctx->pc = 0x24D4C0u;
    SET_GPR_U32(ctx, 31, 0x24D4C8u);
    ctx->pc = 0x24D4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D4C0u;
    // 0x24d4c4: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D240u, 0x24D4C0u, 0x24D4C8u)) {
        return;
    }
    ctx->pc = 0x24D4C8u;
label_24d4c8:
    // 0x24d4c8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x24D4C8u;
    {
        const bool branch_taken_0x24d4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D4C8u;
        // 0x24d4cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d4c8) {
            ctx->pc = 0x24D504u;
            goto label_24d504;
        }
    }
    ctx->pc = 0x24D4D0u;
label_24d4d0:
    // 0x24d4d0: 0xc0934d2  jal         func_24D348
    ctx->pc = 0x24D4D0u;
    SET_GPR_U32(ctx, 31, 0x24D4D8u);
    ctx->pc = 0x24D4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D4D0u;
    // 0x24d4d4: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D348u, 0x24D4D0u, 0x24D4D8u)) {
        return;
    }
    ctx->pc = 0x24D4D8u;
label_24d4d8:
    // 0x24d4d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24D4D8u;
    {
        const bool branch_taken_0x24d4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D4D8u;
        // 0x24d4dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d4d8) {
            ctx->pc = 0x24D504u;
            goto label_24d504;
        }
    }
    ctx->pc = 0x24D4E0u;
label_24d4e0:
    // 0x24d4e0: 0xc093502  jal         func_24D408
    ctx->pc = 0x24D4E0u;
    SET_GPR_U32(ctx, 31, 0x24D4E8u);
    ctx->pc = 0x24D4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D4E0u;
    // 0x24d4e4: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D408u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D408u, 0x24D4E0u, 0x24D4E8u)) {
        return;
    }
    ctx->pc = 0x24D4E8u;
label_24d4e8:
    // 0x24d4e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24D4E8u;
    {
        const bool branch_taken_0x24d4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D4E8u;
        // 0x24d4ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d4e8) {
            ctx->pc = 0x24D504u;
            goto label_24d504;
        }
    }
    ctx->pc = 0x24D4F0u;
label_24d4f0:
    // 0x24d4f0: 0xc092848  jal         func_24A120
    ctx->pc = 0x24D4F0u;
    SET_GPR_U32(ctx, 31, 0x24D4F8u);
    ctx->pc = 0x24D4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D4F0u;
    // 0x24d4f4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24D4F0u, 0x24D4F8u)) {
        return;
    }
    ctx->pc = 0x24D4F8u;
label_24d4f8:
    // 0x24d4f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24d4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d4fc: 0xc09281a  jal         func_24A068
    ctx->pc = 0x24D4FCu;
    SET_GPR_U32(ctx, 31, 0x24D504u);
    ctx->pc = 0x24D500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D4FCu;
    // 0x24d500: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24D4FCu, 0x24D504u)) {
        return;
    }
    ctx->pc = 0x24D504u;
label_24d504:
    // 0x24d504: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24d504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24d508:
    // 0x24d508: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x24d508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d50c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24d50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d510: 0x3e00008  jr          $ra
    ctx->pc = 0x24D510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D510u;
        // 0x24d514: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D518u;
}

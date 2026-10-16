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

// Function: sub_00106760
// Address: 0x106760 - 0x106820
void sub_00106760_0x106760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106760_0x106760");
#endif

    switch (ctx->pc) {
        case 0x1067a8u: goto label_1067a8;
        case 0x1067b8u: goto label_1067b8;
        case 0x1067e4u: goto label_1067e4;
        default: break;
    }

    ctx->pc = 0x106760u;

    // 0x106760: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x106760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x106764: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x106764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x106768: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x106768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x10676c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x10676cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x106770: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x106770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x106774: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x106774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106778: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x106778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x10677c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x10677cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106780: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x106780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x106784: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x106784u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x106788: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x106788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x10678c: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x10678Cu;
    {
        const bool branch_taken_0x10678c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x106790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10678Cu;
        // 0x106790: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10678c) {
            ctx->pc = 0x1067F0u;
            goto label_1067f0;
        }
    }
    ctx->pc = 0x106794u;
    // 0x106794: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x106794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x106798: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x106798u;
    {
        const bool branch_taken_0x106798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106798u;
        // 0x10679c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106798) {
            ctx->pc = 0x1067F0u;
            goto label_1067f0;
        }
    }
    ctx->pc = 0x1067A0u;
    // 0x1067a0: 0xc065c40  jal         func_197100
    ctx->pc = 0x1067A0u;
    SET_GPR_U32(ctx, 31, 0x1067A8u);
    ctx->pc = 0x1067A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1067A0u;
    // 0x1067a4: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1067A0u, 0x1067A8u)) {
        return;
    }
    ctx->pc = 0x1067A8u;
label_1067a8:
    // 0x1067a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1067a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067ac: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1067acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1067B0u;
    {
        const bool branch_taken_0x1067b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1067B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067B0u;
        // 0x1067b4: 0x26900004  addiu       $s0, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067b0) {
            ctx->pc = 0x1067BCu;
            goto label_1067bc;
        }
    }
    ctx->pc = 0x1067B8u;
label_1067b8:
    // 0x1067b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1067b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1067bc:
    // 0x1067bc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1067bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1067c0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1067c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1067c4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1067C4u;
    {
        const bool branch_taken_0x1067c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1067C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067C4u;
        // 0x1067c8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067c4) {
            ctx->pc = 0x1067F4u;
            goto label_1067f4;
        }
    }
    ctx->pc = 0x1067CCu;
    // 0x1067cc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1067ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1067d0: 0x5455fff9  bnel        $v0, $s5, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1067D0u;
    {
        const bool branch_taken_0x1067d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x1067d0) {
            ctx->pc = 0x1067D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1067D0u;
            // 0x1067d4: 0x26100078  addiu       $s0, $s0, 0x78 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1067B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1067b8;
        }
    }
    ctx->pc = 0x1067D8u;
    // 0x1067d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1067d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067dc: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x1067DCu;
    SET_GPR_U32(ctx, 31, 0x1067E4u);
    ctx->pc = 0x1067E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1067DCu;
    // 0x1067e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x1067DCu, 0x1067E4u)) {
        return;
    }
    ctx->pc = 0x1067E4u;
label_1067e4:
    // 0x1067e4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1067E4u;
    {
        const bool branch_taken_0x1067e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1067E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067E4u;
        // 0x1067e8: 0x26100078  addiu       $s0, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067e4) {
            ctx->pc = 0x1067B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1067b8;
        }
    }
    ctx->pc = 0x1067ECu;
    // 0x1067ec: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1067ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1067f0:
    // 0x1067f0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1067f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1067f4:
    // 0x1067f4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1067f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1067f8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1067f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1067fc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1067fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106800: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x106800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106804: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x106804u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106808: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x106808u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10680c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10680cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106810: 0x3e00008  jr          $ra
    ctx->pc = 0x106810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106810u;
        // 0x106814: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106818u;
    // 0x106818: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x106818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x10681c: 0x0  nop
    ctx->pc = 0x10681cu;
    // NOP
    ctx->pc = 0x106820u;
}

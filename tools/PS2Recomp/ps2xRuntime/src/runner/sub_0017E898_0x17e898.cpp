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

// Function: sub_0017E898
// Address: 0x17e898 - 0x17e910
void sub_0017E898_0x17e898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E898_0x17e898");
#endif

    switch (ctx->pc) {
        case 0x17e8d0u: goto label_17e8d0;
        case 0x17e8e4u: goto label_17e8e4;
        case 0x17e8f8u: goto label_17e8f8;
        default: break;
    }

    ctx->pc = 0x17e898u;

    // 0x17e898: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17e898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17e89c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17e8a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17e8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17e8a4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17e8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17e8a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17e8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17e8ac: 0x244288f0  addiu       $v0, $v0, -0x7710
    ctx->pc = 0x17e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936816));
    // 0x17e8b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e8b4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17e8b8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17e8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17e8bc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17e8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17e8c0: 0x8c708860  lw          $s0, -0x77A0($v1)
    ctx->pc = 0x17e8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x338860u));
    // 0x17e8c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17e8c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8c8: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17E8C8u;
    SET_GPR_U32(ctx, 31, 0x17E8D0u);
    ctx->pc = 0x17E8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E8C8u;
    // 0x17e8cc: 0x8c920000  lw          $s2, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17E8C8u, 0x17E8D0u)) {
        return;
    }
    ctx->pc = 0x17E8D0u;
label_17e8d0:
    // 0x17e8d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E8D0u;
    {
        const bool branch_taken_0x17e8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8D0u;
        // 0x17e8d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e8d0) {
            ctx->pc = 0x17E8F8u;
            goto label_17e8f8;
        }
    }
    ctx->pc = 0x17E8D8u;
    // 0x17e8d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8dc: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17E8DCu;
    SET_GPR_U32(ctx, 31, 0x17E8E4u);
    ctx->pc = 0x17E8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E8DCu;
    // 0x17e8e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17E8DCu, 0x17E8E4u)) {
        return;
    }
    ctx->pc = 0x17E8E4u;
label_17e8e4:
    // 0x17e8e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E8E4u;
    {
        const bool branch_taken_0x17e8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8E4u;
        // 0x17e8e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e8e4) {
            ctx->pc = 0x17E8F8u;
            goto label_17e8f8;
        }
    }
    ctx->pc = 0x17E8ECu;
    // 0x17e8ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17e8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8f0: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17E8F0u;
    SET_GPR_U32(ctx, 31, 0x17E8F8u);
    ctx->pc = 0x17E8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E8F0u;
    // 0x17e8f4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17E8F0u, 0x17E8F8u)) {
        return;
    }
    ctx->pc = 0x17E8F8u;
label_17e8f8:
    // 0x17e8f8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17e8f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e8fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17e8fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e900: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17e900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e908: 0x3e00008  jr          $ra
    ctx->pc = 0x17E908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E908u;
        // 0x17e90c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E910u;
}

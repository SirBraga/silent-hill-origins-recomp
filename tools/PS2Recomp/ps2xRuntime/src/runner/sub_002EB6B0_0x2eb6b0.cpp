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

// Function: sub_002EB6B0
// Address: 0x2eb6b0 - 0x2eb768
void sub_002EB6B0_0x2eb6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB6B0_0x2eb6b0");
#endif

    switch (ctx->pc) {
        case 0x2eb6e4u: goto label_2eb6e4;
        case 0x2eb6f8u: goto label_2eb6f8;
        case 0x2eb718u: goto label_2eb718;
        case 0x2eb728u: goto label_2eb728;
        case 0x2eb738u: goto label_2eb738;
        case 0x2eb750u: goto label_2eb750;
        default: break;
    }

    ctx->pc = 0x2eb6b0u;

    // 0x2eb6b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2eb6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2eb6b4: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x2eb6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x2eb6b8: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x2eb6b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
    // 0x2eb6bc: 0x8f849068  lw          $a0, -0x6F98($gp)
    ctx->pc = 0x2eb6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
    // 0x2eb6c0: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x2eb6c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x2eb6c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2eb6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2eb6c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eb6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eb6cc: 0x24c6e700  addiu       $a2, $a2, -0x1900
    ctx->pc = 0x2eb6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960896));
    // 0x2eb6d0: 0x24e7e760  addiu       $a3, $a3, -0x18A0
    ctx->pc = 0x2eb6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960992));
    // 0x2eb6d4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2eb6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2eb6d8: 0x27889090  addiu       $t0, $gp, -0x6F70
    ctx->pc = 0x2eb6d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938768));
    // 0x2eb6dc: 0xc0b8f16  jal         func_2E3C58
    ctx->pc = 0x2EB6DCu;
    SET_GPR_U32(ctx, 31, 0x2EB6E4u);
    ctx->pc = 0x2EB6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB6DCu;
    // 0x2eb6e0: 0x3529080b  ori         $t1, $t1, 0x80B (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2059);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3C58u, 0x2EB6DCu, 0x2EB6E4u)) {
        return;
    }
    ctx->pc = 0x2EB6E4u;
label_2eb6e4:
    // 0x2eb6e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eb6e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb6e8: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2EB6E8u;
    {
        const bool branch_taken_0x2eb6e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6E8u;
        // 0x2eb6ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb6e8) {
            ctx->pc = 0x2EB754u;
            goto label_2eb754;
        }
    }
    ctx->pc = 0x2EB6F0u;
    // 0x2eb6f0: 0xc0ba9dc  jal         func_2EA770
    ctx->pc = 0x2EB6F0u;
    SET_GPR_U32(ctx, 31, 0x2EB6F8u);
    ctx->pc = 0x2EB6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB6F0u;
    // 0x2eb6f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA770u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EA770u, 0x2EB6F0u, 0x2EB6F8u)) {
        return;
    }
    ctx->pc = 0x2EB6F8u;
label_2eb6f8:
    // 0x2eb6f8: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x2eb6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x2eb6fc: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x2eb6fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x2eb700: 0x24a55bb8  addiu       $a1, $a1, 0x5BB8
    ctx->pc = 0x2eb700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23480));
    // 0x2eb704: 0x24e75c60  addiu       $a3, $a3, 0x5C60
    ctx->pc = 0x2eb704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23648));
    // 0x2eb708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eb708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb70c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2eb70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2eb710: 0xc0b8e68  jal         func_2E39A0
    ctx->pc = 0x2EB710u;
    SET_GPR_U32(ctx, 31, 0x2EB718u);
    ctx->pc = 0x2EB714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB710u;
    // 0x2eb714: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E39A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E39A0u, 0x2EB710u, 0x2EB718u)) {
        return;
    }
    ctx->pc = 0x2EB718u;
label_2eb718:
    // 0x2eb718: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EB718u;
    {
        const bool branch_taken_0x2eb718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb718) {
            ctx->pc = 0x2EB748u;
            goto label_2eb748;
        }
    }
    ctx->pc = 0x2EB720u;
    // 0x2eb720: 0xc0bb020  jal         func_2EC080
    ctx->pc = 0x2EB720u;
    SET_GPR_U32(ctx, 31, 0x2EB728u);
    ctx->pc = 0x2EC080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EC080u, 0x2EB720u, 0x2EB728u)) {
        return;
    }
    ctx->pc = 0x2EB728u;
label_2eb728:
    // 0x2eb728: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EB728u;
    {
        const bool branch_taken_0x2eb728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB728u;
        // 0x2eb72c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb728) {
            ctx->pc = 0x2EB748u;
            goto label_2eb748;
        }
    }
    ctx->pc = 0x2EB730u;
    // 0x2eb730: 0xc0b8f7c  jal         func_2E3DF0
    ctx->pc = 0x2EB730u;
    SET_GPR_U32(ctx, 31, 0x2EB738u);
    ctx->pc = 0x2EB734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB730u;
    // 0x2eb734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3DF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3DF0u, 0x2EB730u, 0x2EB738u)) {
        return;
    }
    ctx->pc = 0x2EB738u;
label_2eb738:
    // 0x2eb738: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eb738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb73c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2eb73cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb740: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EB740u;
    {
        const bool branch_taken_0x2eb740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB740u;
        // 0x2eb744: 0xaf838c8c  sw          $v1, -0x7374($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937740), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb740) {
            ctx->pc = 0x2EB754u;
            goto label_2eb754;
        }
    }
    ctx->pc = 0x2EB748u;
label_2eb748:
    // 0x2eb748: 0xc0b8df0  jal         func_2E37C0
    ctx->pc = 0x2EB748u;
    SET_GPR_U32(ctx, 31, 0x2EB750u);
    ctx->pc = 0x2EB74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB748u;
    // 0x2eb74c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E37C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E37C0u, 0x2EB748u, 0x2EB750u)) {
        return;
    }
    ctx->pc = 0x2EB750u;
label_2eb750:
    // 0x2eb750: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eb750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb754:
    // 0x2eb754: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2eb754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eb758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb75c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB75Cu;
        // 0x2eb760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB764u;
    // 0x2eb764: 0x0  nop
    ctx->pc = 0x2eb764u;
    // NOP
    ctx->pc = 0x2eb768u;
}

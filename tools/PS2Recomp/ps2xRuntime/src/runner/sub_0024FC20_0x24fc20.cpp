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

// Function: sub_0024FC20
// Address: 0x24fc20 - 0x24fcb8
void sub_0024FC20_0x24fc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FC20_0x24fc20");
#endif

    switch (ctx->pc) {
        case 0x24fc60u: goto label_24fc60;
        case 0x24fc94u: goto label_24fc94;
        default: break;
    }

    ctx->pc = 0x24fc20u;

    // 0x24fc20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24fc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24fc24: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x24fc28: 0x8c4241a0  lw          $v0, 0x41A0($v0)
    ctx->pc = 0x24fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41A0u));
    // 0x24fc2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x24fc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x24fc30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24fc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24fc34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24fc34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24fc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24fc3c: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x24fc3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24fc40: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x24fc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24fc44: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x24FC44u;
    {
        const bool branch_taken_0x24fc44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC44u;
        // 0x24fc48: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc44) {
            ctx->pc = 0x24FC9Cu;
            goto label_24fc9c;
        }
    }
    ctx->pc = 0x24FC4Cu;
    // 0x24fc4c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x24fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24fc50: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24FC50u;
    {
        const bool branch_taken_0x24fc50 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x24FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC50u;
        // 0x24fc54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc50) {
            ctx->pc = 0x24FC80u;
            goto label_24fc80;
        }
    }
    ctx->pc = 0x24FC58u;
    // 0x24fc58: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x24fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x24fc5c: 0x0  nop
    ctx->pc = 0x24fc5cu;
    // NOP
label_24fc60:
    // 0x24fc60: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x24fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x24fc64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24fc64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x24fc68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24fc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24fc6c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x24fc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x24fc70: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x24fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24fc74: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x24fc74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24fc78: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x24FC78u;
    {
        const bool branch_taken_0x24fc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24fc78) {
            ctx->pc = 0x24FC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FC78u;
            // 0x24fc7c: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FC60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24fc60;
        }
    }
    ctx->pc = 0x24FC80u;
label_24fc80:
    // 0x24fc80: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x24fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x24fc84: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24FC84u;
    {
        const bool branch_taken_0x24fc84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x24fc84) {
            ctx->pc = 0x24FC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FC84u;
            // 0x24fc88: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FC98u;
            goto label_24fc98;
        }
    }
    ctx->pc = 0x24FC8Cu;
    // 0x24fc8c: 0xc0940f4  jal         func_2503D0
    ctx->pc = 0x24FC8Cu;
    SET_GPR_U32(ctx, 31, 0x24FC94u);
    ctx->pc = 0x2503D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2503D0u, 0x24FC8Cu, 0x24FC94u)) {
        return;
    }
    ctx->pc = 0x24FC94u;
label_24fc94:
    // 0x24fc94: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x24fc94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_24fc98:
    // 0x24fc98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x24fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24fc9c:
    // 0x24fc9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24fc9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fca0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x24fca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x24fca4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x24fca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24fca8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24fca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24fcac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24fcacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fcb0: 0x3e00008  jr          $ra
    ctx->pc = 0x24FCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FCB0u;
        // 0x24fcb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FCB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FCB8u;
}

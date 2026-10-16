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

// Function: sub_00280CE0
// Address: 0x280ce0 - 0x280d88
void sub_00280CE0_0x280ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280CE0_0x280ce0");
#endif

    switch (ctx->pc) {
        case 0x280d18u: goto label_280d18;
        case 0x280d60u: goto label_280d60;
        default: break;
    }

    ctx->pc = 0x280ce0u;

    // 0x280ce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x280ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x280ce4: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x280ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x280ce8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x280ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x280cec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x280cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280cf0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x280cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x280cf4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x280cf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280cf8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x280cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x280cfc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x280cfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280d00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280d04: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x280d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x280d08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x280d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280d0c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x280d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280d10: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x280d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x280d14: 0x0  nop
    ctx->pc = 0x280d14u;
    // NOP
label_280d18:
    // 0x280d18: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x280d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x280d1c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x280d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x280d20: 0x54660003  bnel        $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x280D20u;
    {
        const bool branch_taken_0x280d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x280d20) {
            ctx->pc = 0x280D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280D20u;
            // 0x280d24: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280D30u;
            goto label_280d30;
        }
    }
    ctx->pc = 0x280D28u;
    // 0x280d28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x280D28u;
    {
        const bool branch_taken_0x280d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280D28u;
        // 0x280d2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d28) {
            ctx->pc = 0x280D44u;
            goto label_280d44;
        }
    }
    ctx->pc = 0x280D30u;
label_280d30:
    // 0x280d30: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x280d30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x280d34: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x280d34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x280d38: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x280D38u;
    {
        const bool branch_taken_0x280d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280D38u;
        // 0x280d3c: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d38) {
            ctx->pc = 0x280D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280d18;
        }
    }
    ctx->pc = 0x280D40u;
    // 0x280d40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x280d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280d44:
    // 0x280d44: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x280d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x280d48: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x280d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x280d4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x280d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x280d50: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280D50u;
    {
        const bool branch_taken_0x280d50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x280D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280D50u;
        // 0x280d54: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d50) {
            ctx->pc = 0x280D64u;
            goto label_280d64;
        }
    }
    ctx->pc = 0x280D58u;
    // 0x280d58: 0xc08ab74  jal         func_22ADD0
    ctx->pc = 0x280D58u;
    SET_GPR_U32(ctx, 31, 0x280D60u);
    ctx->pc = 0x22ADD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ADD0u, 0x280D58u, 0x280D60u)) {
        return;
    }
    ctx->pc = 0x280D60u;
label_280d60:
    // 0x280d60: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x280d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_280d64:
    // 0x280d64: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x280d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x280d68: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x280d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280d6c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x280d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280d70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x280d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280d74: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x280d74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x280D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280D7Cu;
        // 0x280d80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280D84u;
    // 0x280d84: 0x0  nop
    ctx->pc = 0x280d84u;
    // NOP
    ctx->pc = 0x280d88u;
}

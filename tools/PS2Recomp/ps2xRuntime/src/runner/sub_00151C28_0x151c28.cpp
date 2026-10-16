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

// Function: sub_00151C28
// Address: 0x151c28 - 0x151cdc
void sub_00151C28_0x151c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151C28_0x151c28");
#endif

    switch (ctx->pc) {
        case 0x151c88u: goto label_151c88;
        case 0x151c98u: goto label_151c98;
        case 0x151ca8u: goto label_151ca8;
        case 0x151cd0u: goto label_151cd0;
        default: break;
    }

    ctx->pc = 0x151c28u;

    // 0x151c28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x151c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x151c2c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x151c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x151c30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x151c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x151c34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x151c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151c38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151c3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x151c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151c40: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x151c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x151c44: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x151c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x151c48: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x151c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x151c4c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x151c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x151c50: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x151c50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x151c54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x151c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151c58: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x151c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151c5c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x151c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x151c60: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x151C60u;
    {
        const bool branch_taken_0x151c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C60u;
        // 0x151c64: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151c60) {
            ctx->pc = 0x151CE4u;
            return;
        }
    }
    ctx->pc = 0x151C68u;
    // 0x151c68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x151c68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x151c6c: 0x24422490  addiu       $v0, $v0, 0x2490
    ctx->pc = 0x151c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9360));
    // 0x151c70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x151c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151c74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x151c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151c78: 0x800008  jr          $a0
    ctx->pc = 0x151C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151C80u: goto label_151c80;
            case 0x151C90u: goto label_151c90;
            case 0x151CA0u: goto label_151ca0;
            case 0x151CB0u: goto label_151cb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151C78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x151C80u;
label_151c80:
    // 0x151c80: 0xc05478a  jal         func_151E28
    ctx->pc = 0x151C80u;
    SET_GPR_U32(ctx, 31, 0x151C88u);
    ctx->pc = 0x151C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C80u;
    // 0x151c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151E28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x151E28u, 0x151C80u, 0x151C88u)) {
        return;
    }
    ctx->pc = 0x151C88u;
label_151c88:
    // 0x151c88: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x151C88u;
    {
        const bool branch_taken_0x151c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C88u;
        // 0x151c8c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151c88) {
            ctx->pc = 0x151CD4u;
            goto label_151cd4;
        }
    }
    ctx->pc = 0x151C90u;
label_151c90:
    // 0x151c90: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x151C90u;
    SET_GPR_U32(ctx, 31, 0x151C98u);
    ctx->pc = 0x151C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C90u;
    // 0x151c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x151F70u, 0x151C90u, 0x151C98u)) {
        return;
    }
    ctx->pc = 0x151C98u;
label_151c98:
    // 0x151c98: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x151C98u;
    {
        const bool branch_taken_0x151c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C98u;
        // 0x151c9c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151c98) {
            ctx->pc = 0x151CD4u;
            goto label_151cd4;
        }
    }
    ctx->pc = 0x151CA0u;
label_151ca0:
    // 0x151ca0: 0xc054870  jal         func_1521C0
    ctx->pc = 0x151CA0u;
    SET_GPR_U32(ctx, 31, 0x151CA8u);
    ctx->pc = 0x151CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151CA0u;
    // 0x151ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1521C0u, 0x151CA0u, 0x151CA8u)) {
        return;
    }
    ctx->pc = 0x151CA8u;
label_151ca8:
    // 0x151ca8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x151CA8u;
    {
        const bool branch_taken_0x151ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CA8u;
        // 0x151cac: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ca8) {
            ctx->pc = 0x151CD4u;
            goto label_151cd4;
        }
    }
    ctx->pc = 0x151CB0u;
label_151cb0:
    // 0x151cb0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x151cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x151cb4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x151cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x151cb8: 0x24c28500  addiu       $v0, $a2, -0x7B00
    ctx->pc = 0x151cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935808));
    // 0x151cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151cc0: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x151cc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x151cc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x151cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x151cc8: 0xc054888  jal         func_152220
    ctx->pc = 0x151CC8u;
    SET_GPR_U32(ctx, 31, 0x151CD0u);
    ctx->pc = 0x151CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151CC8u;
    // 0x151ccc: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x152220u, 0x151CC8u, 0x151CD0u)) {
        return;
    }
    ctx->pc = 0x151CD0u;
label_151cd0:
    // 0x151cd0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x151cd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_151cd4:
    // 0x151cd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151CD4u;
    {
        const bool branch_taken_0x151cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CD4u;
        // 0x151cd8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151cd4) {
            ctx->pc = 0x151CE4u;
            return;
        }
    }
    ctx->pc = 0x151CDCu;
}

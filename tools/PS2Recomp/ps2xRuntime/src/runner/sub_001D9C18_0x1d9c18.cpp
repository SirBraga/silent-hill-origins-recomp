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

// Function: sub_001D9C18
// Address: 0x1d9c18 - 0x1d9ce0
void sub_001D9C18_0x1d9c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9C18_0x1d9c18");
#endif

    switch (ctx->pc) {
        case 0x1d9c80u: goto label_1d9c80;
        case 0x1d9cbcu: goto label_1d9cbc;
        case 0x1d9cc8u: goto label_1d9cc8;
        default: break;
    }

    ctx->pc = 0x1d9c18u;

    // 0x1d9c18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d9c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d9c1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d9c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1d9c20: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d9c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d9c24: 0x24421b88  addiu       $v0, $v0, 0x1B88
    ctx->pc = 0x1d9c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7048));
    // 0x1d9c28: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d9c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d9c2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d9c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d9c34: 0x3c07005c  lui         $a3, 0x5C
    ctx->pc = 0x1d9c34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)92 << 16));
    // 0x1d9c38: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1d9c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1d9c3c: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x1d9c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x1d9c40: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x1d9c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1d9c44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d9c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c48: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1d9c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d9c4c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1d9c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d9c50: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d9c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d9c54: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1d9c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1d9c58: 0x8ce30160  lw          $v1, 0x160($a3)
    ctx->pc = 0x1d9c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x1d9c5c: 0x8d028cb0  lw          $v0, -0x7350($t0)
    ctx->pc = 0x1d9c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294937776)));
    // 0x1d9c60: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1d9c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1d9c64: 0xace30160  sw          $v1, 0x160($a3)
    ctx->pc = 0x1d9c64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 352), GPR_U32(ctx, 3));
    // 0x1d9c68: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d9c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9c6c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1d9c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1d9c70: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D9C70u;
    {
        const bool branch_taken_0x1d9c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D9C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C70u;
        // 0x1d9c74: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9c70) {
            ctx->pc = 0x1D9CA8u;
            goto label_1d9ca8;
        }
    }
    ctx->pc = 0x1D9C78u;
    // 0x1d9c78: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1d9c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c7c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d9c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d9c80:
    // 0x1d9c80: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d9c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9c84: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1d9c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1d9c88: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9C88u;
    {
        const bool branch_taken_0x1d9c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1d9c88) {
            ctx->pc = 0x1D9C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9C88u;
            // 0x1d9c8c: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9C90u;
            goto label_1d9c90;
        }
    }
    ctx->pc = 0x1D9C90u;
label_1d9c90:
    // 0x1d9c90: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1d9c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9c94: 0x8cc48cb0  lw          $a0, -0x7350($a2)
    ctx->pc = 0x1d9c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294937776)));
    // 0x1d9c98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d9c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9c9c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d9c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d9ca0: 0x1464fff7  bne         $v1, $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D9CA0u;
    {
        const bool branch_taken_0x1d9ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D9CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9CA0u;
        // 0x1d9ca4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ca0) {
            ctx->pc = 0x1D9C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9c80;
        }
    }
    ctx->pc = 0x1D9CA8u;
label_1d9ca8:
    // 0x1d9ca8: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1d9ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1d9cac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9CACu;
    {
        const bool branch_taken_0x1d9cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9cac) {
            ctx->pc = 0x1D9CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9CACu;
            // 0x1d9cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D9CB4u;
    // 0x1d9cb4: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1D9CB4u;
    SET_GPR_U32(ctx, 31, 0x1D9CBCu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1D9CB4u, 0x1D9CBCu)) {
        return;
    }
    ctx->pc = 0x1D9CBCu;
label_1d9cbc:
    // 0x1d9cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d9cc0:
    // 0x1d9cc0: 0xc080596  jal         func_201658
    ctx->pc = 0x1D9CC0u;
    SET_GPR_U32(ctx, 31, 0x1D9CC8u);
    ctx->pc = 0x1D9CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9CC0u;
    // 0x1d9cc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201658u, 0x1D9CC0u, 0x1D9CC8u)) {
        return;
    }
    ctx->pc = 0x1D9CC8u;
label_1d9cc8:
    // 0x1d9cc8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d9cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d9ccc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d9cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9cd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d9cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9CD4u;
        // 0x1d9cd8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9CDCu;
    // 0x1d9cdc: 0x0  nop
    ctx->pc = 0x1d9cdcu;
    // NOP
    ctx->pc = 0x1d9ce0u;
}

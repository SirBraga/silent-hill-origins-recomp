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

// Function: sub_001A9E38
// Address: 0x1a9e38 - 0x1a9ed0
void sub_001A9E38_0x1a9e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9E38_0x1a9e38");
#endif

    switch (ctx->pc) {
        case 0x1a9ec0u: goto label_1a9ec0;
        default: break;
    }

    ctx->pc = 0x1a9e38u;

    // 0x1a9e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a9e3c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a9e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9e40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9e44: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x1a9e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1a9e48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a9e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a9e4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9E4Cu;
    {
        const bool branch_taken_0x1a9e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E4Cu;
        // 0x1a9e50: 0xacc20014  sw          $v0, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e4c) {
            ctx->pc = 0x1A9E60u;
            goto label_1a9e60;
        }
    }
    ctx->pc = 0x1A9E54u;
    // 0x1a9e54: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1a9e54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x1a9e58: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1A9E58u;
    {
        const bool branch_taken_0x1a9e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E58u;
        // 0x1a9e5c: 0xacc00010  sw          $zero, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e58) {
            ctx->pc = 0x1A9EC0u;
            goto label_1a9ec0;
        }
    }
    ctx->pc = 0x1A9E60u;
label_1a9e60:
    // 0x1a9e60: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x1a9e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a9e64: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9E64u;
    {
        const bool branch_taken_0x1a9e64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a9e64) {
            ctx->pc = 0x1A9E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9E64u;
            // 0x1a9e68: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9E7Cu;
            goto label_1a9e7c;
        }
    }
    ctx->pc = 0x1A9E6Cu;
    // 0x1a9e6c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1a9e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a9e70: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1a9e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a9e74: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1a9e74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1a9e78: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1a9e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1a9e7c:
    // 0x1a9e7c: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9E7Cu;
    {
        const bool branch_taken_0x1a9e7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a9e7c) {
            ctx->pc = 0x1A9E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9E7Cu;
            // 0x1a9e80: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9EA0u;
            goto label_1a9ea0;
        }
    }
    ctx->pc = 0x1A9E84u;
    // 0x1a9e84: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1a9e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a9e88: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1a9e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a9e8c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1a9e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1a9e90: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1a9e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1a9e94: 0x54a40004  bnel        $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9E94u;
    {
        const bool branch_taken_0x1a9e94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a9e94) {
            ctx->pc = 0x1A9E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9E94u;
            // 0x1a9e98: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9EA8u;
            goto label_1a9ea8;
        }
    }
    ctx->pc = 0x1A9E9Cu;
    // 0x1a9e9c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1a9e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1a9ea0:
    // 0x1a9ea0: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x1a9ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x1a9ea4: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x1a9ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_1a9ea8:
    // 0x1a9ea8: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9EA8u;
    {
        const bool branch_taken_0x1a9ea8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9ea8) {
            ctx->pc = 0x1A9EB8u;
            goto label_1a9eb8;
        }
    }
    ctx->pc = 0x1A9EB0u;
    // 0x1a9eb0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1a9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a9eb4: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x1a9eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_1a9eb8:
    // 0x1a9eb8: 0xc069528  jal         func_1A54A0
    ctx->pc = 0x1A9EB8u;
    SET_GPR_U32(ctx, 31, 0x1A9EC0u);
    ctx->pc = 0x1A9EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9EB8u;
    // 0x1a9ebc: 0x8cc40008  lw          $a0, 0x8($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A54A0u, 0x1A9EB8u, 0x1A9EC0u)) {
        return;
    }
    ctx->pc = 0x1A9EC0u;
label_1a9ec0:
    // 0x1a9ec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EC4u;
        // 0x1a9ec8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9ECCu;
    // 0x1a9ecc: 0x0  nop
    ctx->pc = 0x1a9eccu;
    // NOP
    ctx->pc = 0x1a9ed0u;
}

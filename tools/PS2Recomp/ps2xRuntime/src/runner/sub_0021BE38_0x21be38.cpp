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

// Function: sub_0021BE38
// Address: 0x21be38 - 0x21bed0
void sub_0021BE38_0x21be38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BE38_0x21be38");
#endif

    switch (ctx->pc) {
        case 0x21be60u: goto label_21be60;
        default: break;
    }

    ctx->pc = 0x21be38u;

    // 0x21be38: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x21be38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x21be3c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x21be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x21be40: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x21be40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21be44: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x21be44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x21be48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21be48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21be4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21be4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21be50: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x21BE50u;
    {
        const bool branch_taken_0x21be50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE50u;
        // 0x21be54: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be50) {
            ctx->pc = 0x21BE84u;
            goto label_21be84;
        }
    }
    ctx->pc = 0x21BE58u;
    // 0x21be58: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x21be58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x21be5c: 0x0  nop
    ctx->pc = 0x21be5cu;
    // NOP
label_21be60:
    // 0x21be60: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x21be60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21be64: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21BE64u;
    {
        const bool branch_taken_0x21be64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21be64) {
            ctx->pc = 0x21BE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BE64u;
            // 0x21be68: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BE78u;
            goto label_21be78;
        }
    }
    ctx->pc = 0x21BE6Cu;
    // 0x21be6c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x21be6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21be70: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x21be70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21be74: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x21be74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_21be78:
    // 0x21be78: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21be78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21be7c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21BE7Cu;
    {
        const bool branch_taken_0x21be7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21be7c) {
            ctx->pc = 0x21BE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BE7Cu;
            // 0x21be80: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21be60;
        }
    }
    ctx->pc = 0x21BE84u;
label_21be84:
    // 0x21be84: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BE84u;
    {
        const bool branch_taken_0x21be84 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x21be84) {
            ctx->pc = 0x21BE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BE84u;
            // 0x21be88: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BE94u;
            goto label_21be94;
        }
    }
    ctx->pc = 0x21BE8Cu;
    // 0x21be8c: 0x3e00008  jr          $ra
    ctx->pc = 0x21BE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE8Cu;
        // 0x21be90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BE94u;
label_21be94:
    // 0x21be94: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x21be94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21be98: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x21be98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x21be9c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21BE9Cu;
    {
        const bool branch_taken_0x21be9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE9Cu;
        // 0x21bea0: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be9c) {
            ctx->pc = 0x21BEC4u;
            goto label_21bec4;
        }
    }
    ctx->pc = 0x21BEA4u;
    // 0x21bea4: 0x55000005  bnel        $t0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21BEA4u;
    {
        const bool branch_taken_0x21bea4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bea4) {
            ctx->pc = 0x21BEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BEA4u;
            // 0x21bea8: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BEBCu;
            goto label_21bebc;
        }
    }
    ctx->pc = 0x21BEACu;
    // 0x21beac: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x21beacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21beb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21beb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21BEB4u;
    {
        const bool branch_taken_0x21beb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEB4u;
        // 0x21beb8: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21beb4) {
            ctx->pc = 0x21BEC4u;
            goto label_21bec4;
        }
    }
    ctx->pc = 0x21BEBCu;
label_21bebc:
    // 0x21bebc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21bebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21bec0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x21bec0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_21bec4:
    // 0x21bec4: 0x3e00008  jr          $ra
    ctx->pc = 0x21BEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEC4u;
        // 0x21bec8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BECCu;
    // 0x21becc: 0x0  nop
    ctx->pc = 0x21beccu;
    // NOP
    ctx->pc = 0x21bed0u;
}

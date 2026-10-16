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

// Function: sub_0019FF28
// Address: 0x19ff28 - 0x19fff0
void sub_0019FF28_0x19ff28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019FF28_0x19ff28");
#endif

    switch (ctx->pc) {
        case 0x19ff60u: goto label_19ff60;
        case 0x19ff80u: goto label_19ff80;
        case 0x19ff98u: goto label_19ff98;
        case 0x19ffa8u: goto label_19ffa8;
        default: break;
    }

    ctx->pc = 0x19ff28u;

    // 0x19ff28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19ff28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19ff2c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x19ff2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x19ff30: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19ff30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x19ff34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ff34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff38: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x19ff38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x19ff3c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19ff3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff40: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x19ff40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x19ff44: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x19ff44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x19ff48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ff48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ff4c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x19ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19ff50: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x19FF50u;
    {
        const bool branch_taken_0x19ff50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF50u;
        // 0x19ff54: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ff50) {
            ctx->pc = 0x19FFCCu;
            goto label_19ffcc;
        }
    }
    ctx->pc = 0x19FF58u;
    // 0x19ff58: 0xc068064  jal         func_1A0190
    ctx->pc = 0x19FF58u;
    SET_GPR_U32(ctx, 31, 0x19FF60u);
    ctx->pc = 0x19FF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF58u;
    // 0x19ff5c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0190u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0190u, 0x19FF58u, 0x19FF60u)) {
        return;
    }
    ctx->pc = 0x19FF60u;
label_19ff60:
    // 0x19ff60: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x19FF60u;
    {
        const bool branch_taken_0x19ff60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ff60) {
            ctx->pc = 0x19FF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FF60u;
            // 0x19ff64: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FFCCu;
            goto label_19ffcc;
        }
    }
    ctx->pc = 0x19FF68u;
    // 0x19ff68: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x19ff68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff6c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x19ff6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19ff70: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x19ff70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ff74: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19ff74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff78: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x19ff78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x19ff7c: 0x0  nop
    ctx->pc = 0x19ff7cu;
    // NOP
label_19ff80:
    // 0x19ff80: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19ff84: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19FF84u;
    {
        const bool branch_taken_0x19ff84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF84u;
        // 0x19ff88: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ff84) {
            ctx->pc = 0x19FFB4u;
            goto label_19ffb4;
        }
    }
    ctx->pc = 0x19FF8Cu;
    // 0x19ff8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ff8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff90: 0xc0c4bea  jal         func_312FA8
    ctx->pc = 0x19FF90u;
    SET_GPR_U32(ctx, 31, 0x19FF98u);
    ctx->pc = 0x19FF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF90u;
    // 0x19ff94: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312FA8u, 0x19FF90u, 0x19FF98u)) {
        return;
    }
    ctx->pc = 0x19FF98u;
label_19ff98:
    // 0x19ff98: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x19ff98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x19ff9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ff9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ffa0: 0xc065c40  jal         func_197100
    ctx->pc = 0x19FFA0u;
    SET_GPR_U32(ctx, 31, 0x19FFA8u);
    ctx->pc = 0x19FFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FFA0u;
    // 0x19ffa4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x19FFA0u, 0x19FFA8u)) {
        return;
    }
    ctx->pc = 0x19FFA8u;
label_19ffa8:
    // 0x19ffa8: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x19ffa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x19ffac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19FFACu;
    {
        const bool branch_taken_0x19ffac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFACu;
        // 0x19ffb0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ffac) {
            ctx->pc = 0x19FFC8u;
            goto label_19ffc8;
        }
    }
    ctx->pc = 0x19FFB4u;
label_19ffb4:
    // 0x19ffb4: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x19ffb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x19ffb8: 0x2c620040  sltiu       $v0, $v1, 0x40
    ctx->pc = 0x19ffb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x19ffbc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x19FFBCu;
    {
        const bool branch_taken_0x19ffbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFBCu;
        // 0x19ffc0: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ffbc) {
            ctx->pc = 0x19FF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ff80;
        }
    }
    ctx->pc = 0x19FFC4u;
    // 0x19ffc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19ffc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ffc8:
    // 0x19ffc8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x19ffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_19ffcc:
    // 0x19ffcc: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x19ffccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x19ffd0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x19ffd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19ffd4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x19ffd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ffd8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x19ffd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ffdc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x19ffdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ffe0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x19ffe0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ffe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ffe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ffe8: 0x3e00008  jr          $ra
    ctx->pc = 0x19FFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFE8u;
        // 0x19ffec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FFF0u;
}

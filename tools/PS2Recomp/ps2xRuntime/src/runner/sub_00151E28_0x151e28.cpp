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

// Function: sub_00151E28
// Address: 0x151e28 - 0x151ec0
void sub_00151E28_0x151e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151E28_0x151e28");
#endif

    switch (ctx->pc) {
        case 0x151e54u: goto label_151e54;
        case 0x151e5cu: goto label_151e5c;
        case 0x151e80u: goto label_151e80;
        case 0x151e8cu: goto label_151e8c;
        default: break;
    }

    ctx->pc = 0x151e28u;

    // 0x151e28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x151e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x151e2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x151e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151e30: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x151e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x151e34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x151e34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x151e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x151e3c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x151e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x151e40: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x151e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x151e44: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x151e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x151e48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151e4c: 0xc06037e  jal         func_180DF8
    ctx->pc = 0x151E4Cu;
    SET_GPR_U32(ctx, 31, 0x151E54u);
    ctx->pc = 0x151E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151E4Cu;
    // 0x151e50: 0x24842458  addiu       $a0, $a0, 0x2458 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180DF8u, 0x151E4Cu, 0x151E54u)) {
        return;
    }
    ctx->pc = 0x151E54u;
label_151e54:
    // 0x151e54: 0xc07cd60  jal         func_1F3580
    ctx->pc = 0x151E54u;
    SET_GPR_U32(ctx, 31, 0x151E5Cu);
    ctx->pc = 0x151E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151E54u;
    // 0x151e58: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3580u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3580u, 0x151E54u, 0x151E5Cu)) {
        return;
    }
    ctx->pc = 0x151E5Cu;
label_151e5c:
    // 0x151e5c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x151e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x151e60: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x151E60u;
    {
        const bool branch_taken_0x151e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x151E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151E60u;
        // 0x151e64: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151e60) {
            ctx->pc = 0x151E70u;
            goto label_151e70;
        }
    }
    ctx->pc = 0x151E68u;
    // 0x151e68: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x151E68u;
    {
        const bool branch_taken_0x151e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151E68u;
        // 0x151e6c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151e68) {
            ctx->pc = 0x151E9Cu;
            goto label_151e9c;
        }
    }
    ctx->pc = 0x151E70u;
label_151e70:
    // 0x151e70: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x151e70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x151e74: 0x24428558  addiu       $v0, $v0, -0x7AA8
    ctx->pc = 0x151e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935896));
    // 0x151e78: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x151e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x151e7c: 0x0  nop
    ctx->pc = 0x151e7cu;
    // NOP
label_151e80:
    // 0x151e80: 0x8e04fffc  lw          $a0, -0x4($s0)
    ctx->pc = 0x151e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x151e84: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x151E84u;
    SET_GPR_U32(ctx, 31, 0x151E8Cu);
    ctx->pc = 0x151E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151E84u;
    // 0x151e88: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x151E84u, 0x151E8Cu)) {
        return;
    }
    ctx->pc = 0x151E8Cu;
label_151e8c:
    // 0x151e8c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x151e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x151e90: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x151E90u;
    {
        const bool branch_taken_0x151e90 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x151E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151E90u;
        // 0x151e94: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151e90) {
            ctx->pc = 0x151E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151e80;
        }
    }
    ctx->pc = 0x151E98u;
    // 0x151e98: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x151e98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_151e9c:
    // 0x151e9c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x151e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151ea0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x151ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151ea4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x151ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151ea8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x151ea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151eac: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x151eacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x151EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151EB4u;
        // 0x151eb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151EBCu;
    // 0x151ebc: 0x0  nop
    ctx->pc = 0x151ebcu;
    // NOP
    ctx->pc = 0x151ec0u;
}

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

// Function: sub_00189BB0
// Address: 0x189bb0 - 0x189c48
void sub_00189BB0_0x189bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189BB0_0x189bb0");
#endif

    switch (ctx->pc) {
        case 0x189bd8u: goto label_189bd8;
        case 0x189c00u: goto label_189c00;
        case 0x189c0cu: goto label_189c0c;
        default: break;
    }

    ctx->pc = 0x189bb0u;

    // 0x189bb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x189bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x189bb4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x189bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x189bb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x189bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bbc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x189bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x189bc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x189bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x189bc4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x189bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x189bc8: 0x261100c0  addiu       $s1, $s0, 0xC0
    ctx->pc = 0x189bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x189bcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189bd0: 0xc06242e  jal         func_1890B8
    ctx->pc = 0x189BD0u;
    SET_GPR_U32(ctx, 31, 0x189BD8u);
    ctx->pc = 0x189BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189BD0u;
    // 0x189bd4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1890B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1890B8u, 0x189BD0u, 0x189BD8u)) {
        return;
    }
    ctx->pc = 0x189BD8u;
label_189bd8:
    // 0x189bd8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x189bd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x189bdc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x189bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x189be0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x189be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x189be4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x189be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x189be8: 0x24428d18  addiu       $v0, $v0, -0x72E8
    ctx->pc = 0x189be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937880));
    // 0x189bec: 0x24638d38  addiu       $v1, $v1, -0x72C8
    ctx->pc = 0x189becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937912));
    // 0x189bf0: 0x24848d80  addiu       $a0, $a0, -0x7280
    ctx->pc = 0x189bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937984));
    // 0x189bf4: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x189bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x189bf8: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x189bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x189bfc: 0xae040030  sw          $a0, 0x30($s0)
    ctx->pc = 0x189bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
label_189c00:
    // 0x189c00: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x189c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x189c04: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x189C04u;
    SET_GPR_U32(ctx, 31, 0x189C0Cu);
    ctx->pc = 0x189C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C04u;
    // 0x189c08: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x189C04u, 0x189C0Cu)) {
        return;
    }
    ctx->pc = 0x189C0Cu;
label_189c0c:
    // 0x189c0c: 0x0  nop
    ctx->pc = 0x189c0cu;
    // NOP
    // 0x189c10: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x189C10u;
    {
        const bool branch_taken_0x189c10 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x189C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C10u;
        // 0x189c14: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c10) {
            ctx->pc = 0x189C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189c00;
        }
    }
    ctx->pc = 0x189C18u;
    // 0x189c18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x189c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x189c1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x189c1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c20: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x189c20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
    // 0x189c24: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x189c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x189c28: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x189c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189c2c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x189c2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189c30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x189c30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189c34: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x189c34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x189C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C3Cu;
        // 0x189c40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189C44u;
    // 0x189c44: 0x0  nop
    ctx->pc = 0x189c44u;
    // NOP
    ctx->pc = 0x189c48u;
}

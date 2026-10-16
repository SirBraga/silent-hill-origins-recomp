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

// Function: sub_001FF0E8
// Address: 0x1ff0e8 - 0x1ff188
void sub_001FF0E8_0x1ff0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF0E8_0x1ff0e8");
#endif

    switch (ctx->pc) {
        case 0x1ff128u: goto label_1ff128;
        case 0x1ff154u: goto label_1ff154;
        default: break;
    }

    ctx->pc = 0x1ff0e8u;

    // 0x1ff0e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ff0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ff0ec: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x1ff0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x1ff0f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ff0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ff0f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ff0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ff0f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ff0f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff0fc: 0x8c620128  lw          $v0, 0x128($v1)
    ctx->pc = 0x1ff0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5C0128u));
    // 0x1ff100: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x1ff100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff104: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ff104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ff108: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ff108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1ff10c: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FF10Cu;
    {
        const bool branch_taken_0x1ff10c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1FF110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF10Cu;
        // 0x1ff110: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff10c) {
            ctx->pc = 0x1FF168u;
            goto label_1ff168;
        }
    }
    ctx->pc = 0x1FF114u;
    // 0x1ff114: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1ff114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1ff118: 0x3c130070  lui         $s3, 0x70
    ctx->pc = 0x1ff118u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)112 << 16));
    // 0x1ff11c: 0x24422898  addiu       $v0, $v0, 0x2898
    ctx->pc = 0x1ff11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10392));
    // 0x1ff120: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x1ff120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ff124: 0x0  nop
    ctx->pc = 0x1ff124u;
    // NOP
label_1ff128:
    // 0x1ff128: 0x8e02fffc  lw          $v0, -0x4($s0)
    ctx->pc = 0x1ff128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x1ff12c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FF12Cu;
    {
        const bool branch_taken_0x1ff12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF12Cu;
        // 0x1ff130: 0x8e621a70  lw          $v0, 0x1A70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff12c) {
            ctx->pc = 0x1FF154u;
            goto label_1ff154;
        }
    }
    ctx->pc = 0x1FF134u;
    // 0x1ff134: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ff134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff138: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FF138u;
    {
        const bool branch_taken_0x1ff138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FF13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF138u;
        // 0x1ff13c: 0x8e420128  lw          $v0, 0x128($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff138) {
            ctx->pc = 0x1FF158u;
            goto label_1ff158;
        }
    }
    ctx->pc = 0x1FF140u;
    // 0x1ff140: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ff140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ff144: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF144u;
    {
        const bool branch_taken_0x1ff144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF144u;
        // 0x1ff148: 0x8e420128  lw          $v0, 0x128($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff144) {
            ctx->pc = 0x1FF158u;
            goto label_1ff158;
        }
    }
    ctx->pc = 0x1FF14Cu;
    // 0x1ff14c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1FF14Cu;
    SET_GPR_U32(ctx, 31, 0x1FF154u);
    ctx->pc = 0x1FF150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF14Cu;
    // 0x1ff150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1FF14Cu, 0x1FF154u)) {
        return;
    }
    ctx->pc = 0x1FF154u;
label_1ff154:
    // 0x1ff154: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x1ff154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
label_1ff158:
    // 0x1ff158: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ff158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ff15c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1ff15cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ff160: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1FF160u;
    {
        const bool branch_taken_0x1ff160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF160u;
        // 0x1ff164: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff160) {
            ctx->pc = 0x1FF128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff128;
        }
    }
    ctx->pc = 0x1FF168u;
label_1ff168:
    // 0x1ff168: 0xae400128  sw          $zero, 0x128($s2)
    ctx->pc = 0x1ff168u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 296), GPR_U32(ctx, 0));
    // 0x1ff16c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ff16cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ff170: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ff170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ff174: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ff174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff178: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ff178u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff17c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff180: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF180u;
        // 0x1ff184: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF188u;
}

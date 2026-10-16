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

// Function: sub_0017B050
// Address: 0x17b050 - 0x17b0a8
void sub_0017B050_0x17b050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B050_0x17b050");
#endif

    switch (ctx->pc) {
        case 0x17b070u: goto label_17b070;
        case 0x17b07cu: goto label_17b07c;
        default: break;
    }

    ctx->pc = 0x17b050u;

    // 0x17b050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b054: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x17b054u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x17b058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b05c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17b05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17b060: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x17b060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17b064: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17B064u;
    {
        const bool branch_taken_0x17b064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B064u;
        // 0x17b068: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b064) {
            ctx->pc = 0x17B088u;
            goto label_17b088;
        }
    }
    ctx->pc = 0x17B06Cu;
    // 0x17b06c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b070:
    // 0x17b070: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x17b070u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x17b074: 0xc05e2e4  jal         func_178B90
    ctx->pc = 0x17B074u;
    SET_GPR_U32(ctx, 31, 0x17B07Cu);
    ctx->pc = 0x17B078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B074u;
    // 0x17b078: 0x8e1000b4  lw          $s0, 0xB4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178B90u, 0x17B074u, 0x17B07Cu)) {
        return;
    }
    ctx->pc = 0x17B07Cu;
label_17b07c:
    // 0x17b07c: 0x0  nop
    ctx->pc = 0x17b07cu;
    // NOP
    // 0x17b080: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17B080u;
    {
        const bool branch_taken_0x17b080 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B080u;
        // 0x17b084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b080) {
            ctx->pc = 0x17B070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b070;
        }
    }
    ctx->pc = 0x17B088u;
label_17b088:
    // 0x17b088: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17b088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b08c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b090: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x17b090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17b094: 0x3e00008  jr          $ra
    ctx->pc = 0x17B094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B094u;
        // 0x17b098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B09Cu;
    // 0x17b09c: 0x0  nop
    ctx->pc = 0x17b09cu;
    // NOP
    // 0x17b0a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x17b0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17b0a4: 0x0  nop
    ctx->pc = 0x17b0a4u;
    // NOP
    ctx->pc = 0x17b0a8u;
}

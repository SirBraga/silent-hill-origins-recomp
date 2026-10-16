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

// Function: sub_001FE2A8
// Address: 0x1fe2a8 - 0x1fe338
void sub_001FE2A8_0x1fe2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE2A8_0x1fe2a8");
#endif

    switch (ctx->pc) {
        case 0x1fe2ccu: goto label_1fe2cc;
        case 0x1fe2e0u: goto label_1fe2e0;
        case 0x1fe308u: goto label_1fe308;
        default: break;
    }

    ctx->pc = 0x1fe2a8u;

    // 0x1fe2a8: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1fe2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1fe2ac: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fe2acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fe2b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1fe2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe2b4: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x1fe2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x1fe2b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fe2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fe2bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fe2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe2c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fe2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fe2c4: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x1FE2C4u;
    SET_GPR_U32(ctx, 31, 0x1FE2CCu);
    ctx->pc = 0x1FE2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE2C4u;
    // 0x1fe2c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1FE2C4u, 0x1FE2CCu)) {
        return;
    }
    ctx->pc = 0x1FE2CCu;
label_1fe2cc:
    // 0x1fe2cc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fe2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe2d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fe2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe2d4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FE2D4u;
    {
        const bool branch_taken_0x1fe2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2D4u;
        // 0x1fe2d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe2d4) {
            ctx->pc = 0x1FE324u;
            goto label_1fe324;
        }
    }
    ctx->pc = 0x1FE2DCu;
    // 0x1fe2dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fe2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe2e0:
    // 0x1fe2e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1fe2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fe2e4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE2E4u;
    {
        const bool branch_taken_0x1fe2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2E4u;
        // 0x1fe2e8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe2e4) {
            ctx->pc = 0x1FE2F0u;
            goto label_1fe2f0;
        }
    }
    ctx->pc = 0x1FE2ECu;
    // 0x1fe2ec: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1fe2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1fe2f0:
    // 0x1fe2f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fe2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe2f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fe2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe2f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fe2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe2fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fe2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fe300: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1FE300u;
    SET_GPR_U32(ctx, 31, 0x1FE308u);
    ctx->pc = 0x1FE304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE300u;
    // 0x1fe304: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1FE300u, 0x1FE308u)) {
        return;
    }
    ctx->pc = 0x1FE308u;
label_1fe308:
    // 0x1fe308: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fe308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe30c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fe30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fe310: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE310u;
    {
        const bool branch_taken_0x1fe310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE310u;
        // 0x1fe314: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe310) {
            ctx->pc = 0x1FE324u;
            goto label_1fe324;
        }
    }
    ctx->pc = 0x1FE318u;
    // 0x1fe318: 0x1200fff1  beqz        $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1FE318u;
    {
        const bool branch_taken_0x1fe318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE318u;
        // 0x1fe31c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe318) {
            ctx->pc = 0x1FE2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe2e0;
        }
    }
    ctx->pc = 0x1FE320u;
    // 0x1fe320: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fe320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe324:
    // 0x1fe324: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fe324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe328: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fe328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe32c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE32Cu;
        // 0x1fe330: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE334u;
    // 0x1fe334: 0x0  nop
    ctx->pc = 0x1fe334u;
    // NOP
    ctx->pc = 0x1fe338u;
}

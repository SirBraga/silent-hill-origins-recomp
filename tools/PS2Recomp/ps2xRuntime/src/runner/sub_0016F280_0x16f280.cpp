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

// Function: sub_0016F280
// Address: 0x16f280 - 0x16f328
void sub_0016F280_0x16f280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F280_0x16f280");
#endif

    switch (ctx->pc) {
        case 0x16f29cu: goto label_16f29c;
        case 0x16f2b0u: goto label_16f2b0;
        case 0x16f2c8u: goto label_16f2c8;
        case 0x16f2e8u: goto label_16f2e8;
        case 0x16f304u: goto label_16f304;
        default: break;
    }

    ctx->pc = 0x16f280u;

    // 0x16f280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16f280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16f284: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16f284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16f288: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16f288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16f28c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16f28cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f290: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16f290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16f294: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x16F294u;
    SET_GPR_U32(ctx, 31, 0x16F29Cu);
    ctx->pc = 0x16F298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F294u;
    // 0x16f298: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x16F294u, 0x16F29Cu)) {
        return;
    }
    ctx->pc = 0x16F29Cu;
label_16f29c:
    // 0x16f29c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x16f2a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16f2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f2a4: 0x8c46f708  lw          $a2, -0x8F8($v0)
    ctx->pc = 0x16f2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF708u));
    // 0x16f2a8: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x16F2A8u;
    SET_GPR_U32(ctx, 31, 0x16F2B0u);
    ctx->pc = 0x16F2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F2A8u;
    // 0x16f2ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x16F2A8u, 0x16F2B0u)) {
        return;
    }
    ctx->pc = 0x16F2B0u;
label_16f2b0:
    // 0x16f2b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f2b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16f2b8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x16F2B8u;
    {
        const bool branch_taken_0x16f2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2B8u;
        // 0x16f2bc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2b8) {
            ctx->pc = 0x16F318u;
            goto label_16f318;
        }
    }
    ctx->pc = 0x16F2C0u;
    // 0x16f2c0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x16f2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f2c4: 0x0  nop
    ctx->pc = 0x16f2c4u;
    // NOP
label_16f2c8:
    // 0x16f2c8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x16f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x16f2cc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16F2CCu;
    {
        const bool branch_taken_0x16f2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2CCu;
        // 0x16f2d0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2cc) {
            ctx->pc = 0x16F2ECu;
            goto label_16f2ec;
        }
    }
    ctx->pc = 0x16F2D4u;
    // 0x16f2d4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x16f2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x16f2d8: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x16f2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16f2dc: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x16f2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x16f2e0: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x16F2E0u;
    SET_GPR_U32(ctx, 31, 0x16F2E8u);
    ctx->pc = 0x16F2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F2E0u;
    // 0x16f2e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x16F2E0u, 0x16F2E8u)) {
        return;
    }
    ctx->pc = 0x16F2E8u;
label_16f2e8:
    // 0x16f2e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16f2ec:
    // 0x16f2ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16f2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f2f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16f2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f2f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16f2f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16f2fc: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x16F2FCu;
    SET_GPR_U32(ctx, 31, 0x16F304u);
    ctx->pc = 0x16F300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F2FCu;
    // 0x16f300: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x16F2FCu, 0x16F304u)) {
        return;
    }
    ctx->pc = 0x16F304u;
label_16f304:
    // 0x16f304: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16f304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f308: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16f308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f30c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x16F30Cu;
    {
        const bool branch_taken_0x16f30c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F30Cu;
        // 0x16f310: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f30c) {
            ctx->pc = 0x16F2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f2c8;
        }
    }
    ctx->pc = 0x16F314u;
    // 0x16f314: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16f314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16f318:
    // 0x16f318: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16f318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f31c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16f31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f320: 0x3e00008  jr          $ra
    ctx->pc = 0x16F320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F320u;
        // 0x16f324: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F328u;
}

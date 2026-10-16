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

// Function: sub_001DD4A8
// Address: 0x1dd4a8 - 0x1dd530
void sub_001DD4A8_0x1dd4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD4A8_0x1dd4a8");
#endif

    switch (ctx->pc) {
        case 0x1dd4d8u: goto label_1dd4d8;
        case 0x1dd4f0u: goto label_1dd4f0;
        default: break;
    }

    ctx->pc = 0x1dd4a8u;

label_1dd4a8:
    // 0x1dd4a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1dd4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dd4ac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1dd4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1dd4b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1dd4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1dd4b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd4b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd4b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dd4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dd4bc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1dd4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1dd4c0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DD4C0u;
    {
        const bool branch_taken_0x1dd4c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD4C0u;
        // 0x1dd4c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd4c0) {
            ctx->pc = 0x1DD510u;
            goto label_1dd510;
        }
    }
    ctx->pc = 0x1DD4C8u;
    // 0x1dd4c8: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x1dd4c8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    // 0x1dd4cc: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x1dd4ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
    // 0x1dd4d0: 0x8e62e664  lw          $v0, -0x199C($s3)
    ctx->pc = 0x1dd4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dd4d4: 0x0  nop
    ctx->pc = 0x1dd4d4u;
    // NOP
label_1dd4d8:
    // 0x1dd4d8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1dd4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1dd4dc: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x1dd4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1dd4e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD4E0u;
    {
        const bool branch_taken_0x1dd4e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD4E0u;
        // 0x1dd4e4: 0x8c510024  lw          $s1, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd4e0) {
            ctx->pc = 0x1DD4F0u;
            goto label_1dd4f0;
        }
    }
    ctx->pc = 0x1DD4E8u;
    // 0x1dd4e8: 0xc07752a  jal         func_1DD4A8
    ctx->pc = 0x1DD4E8u;
    SET_GPR_U32(ctx, 31, 0x1DD4F0u);
    ctx->pc = 0x1DD4A8u;
    goto label_1dd4a8;
    ctx->pc = 0x1DD4F0u;
label_1dd4f0:
    // 0x1dd4f0: 0x8e62e664  lw          $v0, -0x199C($s3)
    ctx->pc = 0x1dd4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294960740)));
    // 0x1dd4f4: 0x8e43e668  lw          $v1, -0x1998($s2)
    ctx->pc = 0x1dd4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960744)));
    // 0x1dd4f8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1dd4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1dd4fc: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x1dd4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x1dd500: 0xae50e668  sw          $s0, -0x1998($s2)
    ctx->pc = 0x1dd500u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294960744), GPR_U32(ctx, 16));
    // 0x1dd504: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1dd504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd508: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1DD508u;
    {
        const bool branch_taken_0x1dd508 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD508u;
        // 0x1dd50c: 0x8e62e664  lw          $v0, -0x199C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294960740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd508) {
            ctx->pc = 0x1DD4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd4d8;
        }
    }
    ctx->pc = 0x1DD510u;
label_1dd510:
    // 0x1dd510: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1dd510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dd514: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1dd514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd518: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dd518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd51c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1dd51cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd524: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD524u;
        // 0x1dd528: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD52Cu;
    // 0x1dd52c: 0x0  nop
    ctx->pc = 0x1dd52cu;
    // NOP
    ctx->pc = 0x1dd530u;
}

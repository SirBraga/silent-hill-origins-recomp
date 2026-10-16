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

// Function: sub_001A4938
// Address: 0x1a4938 - 0x1a4998
void sub_001A4938_0x1a4938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4938_0x1a4938");
#endif

    switch (ctx->pc) {
        case 0x1a4958u: goto label_1a4958;
        case 0x1a4984u: goto label_1a4984;
        default: break;
    }

    ctx->pc = 0x1a4938u;

    // 0x1a4938: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a4938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a493c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a493cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a4940: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a4940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a4944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a494c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a494cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4950: 0xc069350  jal         func_1A4D40
    ctx->pc = 0x1A4950u;
    SET_GPR_U32(ctx, 31, 0x1A4958u);
    ctx->pc = 0x1A4954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4950u;
    // 0x1a4954: 0x8e250044  lw          $a1, 0x44($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4D40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4D40u, 0x1A4950u, 0x1A4958u)) {
        return;
    }
    ctx->pc = 0x1A4958u;
label_1a4958:
    // 0x1a4958: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A4958u;
    {
        const bool branch_taken_0x1a4958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4958u;
        // 0x1a495c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4958) {
            ctx->pc = 0x1A497Cu;
            goto label_1a497c;
        }
    }
    ctx->pc = 0x1A4960u;
    // 0x1a4960: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1a4960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a4964: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1a4964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1a4968: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x1a4968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a496c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a496cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a4970: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1a4970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1a4974: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1a4974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1a4978: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x1a4978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1a497c:
    // 0x1a497c: 0xc06937a  jal         func_1A4DE8
    ctx->pc = 0x1A497Cu;
    SET_GPR_U32(ctx, 31, 0x1A4984u);
    ctx->pc = 0x1A4980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A497Cu;
    // 0x1a4980: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4DE8u, 0x1A497Cu, 0x1A4984u)) {
        return;
    }
    ctx->pc = 0x1A4984u;
label_1a4984:
    // 0x1a4984: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a4984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4988: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a498c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a498cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4990: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4990u;
        // 0x1a4994: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4998u;
}

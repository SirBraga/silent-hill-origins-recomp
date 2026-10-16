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

// Function: sub_00178E60
// Address: 0x178e60 - 0x178ec8
void sub_00178E60_0x178e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178E60_0x178e60");
#endif

    switch (ctx->pc) {
        case 0x178ea0u: goto label_178ea0;
        case 0x178eb4u: goto label_178eb4;
        default: break;
    }

    ctx->pc = 0x178e60u;

    // 0x178e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178e64: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x178e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x178e68: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x178e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x178e6c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x178e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x178e70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x178e74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178e7c: 0x24426948  addiu       $v0, $v0, 0x6948
    ctx->pc = 0x178e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26952));
    // 0x178e80: 0x24636968  addiu       $v1, $v1, 0x6968
    ctx->pc = 0x178e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26984));
    // 0x178e84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x178e84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e88: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x178e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x178e8c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x178e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x178e90: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x178E90u;
    {
        const bool branch_taken_0x178e90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x178E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E90u;
        // 0x178e94: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e90) {
            ctx->pc = 0x178EA8u;
            goto label_178ea8;
        }
    }
    ctx->pc = 0x178E98u;
    // 0x178e98: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x178E98u;
    SET_GPR_U32(ctx, 31, 0x178EA0u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x178E98u, 0x178EA0u)) {
        return;
    }
    ctx->pc = 0x178EA0u;
label_178ea0:
    // 0x178ea0: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x178ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x178ea4: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x178ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_178ea8:
    // 0x178ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178eac: 0xc04f084  jal         func_13C210
    ctx->pc = 0x178EACu;
    SET_GPR_U32(ctx, 31, 0x178EB4u);
    ctx->pc = 0x178EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178EACu;
    // 0x178eb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x178EACu, 0x178EB4u)) {
        return;
    }
    ctx->pc = 0x178EB4u;
label_178eb4:
    // 0x178eb4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x178eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178eb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178eb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178ebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x178EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178EC0u;
        // 0x178ec4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178EC8u;
}

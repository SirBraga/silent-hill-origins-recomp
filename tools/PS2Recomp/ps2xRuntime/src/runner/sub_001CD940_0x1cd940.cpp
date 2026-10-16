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

// Function: sub_001CD940
// Address: 0x1cd940 - 0x1cd9b0
void sub_001CD940_0x1cd940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD940_0x1cd940");
#endif

    switch (ctx->pc) {
        case 0x1cd974u: goto label_1cd974;
        case 0x1cd98cu: goto label_1cd98c;
        case 0x1cd99cu: goto label_1cd99c;
        default: break;
    }

    ctx->pc = 0x1cd940u;

    // 0x1cd940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cd940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cd944: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1cd944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1cd948: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cd948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cd94c: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x1cd94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1cd950: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cd950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cd954: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cd954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd95c: 0xae020258  sw          $v0, 0x258($s0)
    ctx->pc = 0x1cd95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
    // 0x1cd960: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1cd960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1cd964: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD964u;
    {
        const bool branch_taken_0x1cd964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD964u;
        // 0x1cd968: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd964) {
            ctx->pc = 0x1CD978u;
            goto label_1cd978;
        }
    }
    ctx->pc = 0x1CD96Cu;
    // 0x1cd96c: 0xc06db5a  jal         func_1B6D68
    ctx->pc = 0x1CD96Cu;
    SET_GPR_U32(ctx, 31, 0x1CD974u);
    ctx->pc = 0x1CD970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD96Cu;
    // 0x1cd970: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D68u, 0x1CD96Cu, 0x1CD974u)) {
        return;
    }
    ctx->pc = 0x1CD974u;
label_1cd974:
    // 0x1cd974: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1cd974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
label_1cd978:
    // 0x1cd978: 0x8e040268  lw          $a0, 0x268($s0)
    ctx->pc = 0x1cd978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x1cd97c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD97Cu;
    {
        const bool branch_taken_0x1cd97c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd97c) {
            ctx->pc = 0x1CD980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD97Cu;
            // 0x1cd980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD994u;
            goto label_1cd994;
        }
    }
    ctx->pc = 0x1CD984u;
    // 0x1cd984: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1CD984u;
    SET_GPR_U32(ctx, 31, 0x1CD98Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1CD984u, 0x1CD98Cu)) {
        return;
    }
    ctx->pc = 0x1CD98Cu;
label_1cd98c:
    // 0x1cd98c: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1cd98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1cd990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd994:
    // 0x1cd994: 0xc06bba8  jal         func_1AEEA0
    ctx->pc = 0x1CD994u;
    SET_GPR_U32(ctx, 31, 0x1CD99Cu);
    ctx->pc = 0x1CD998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD994u;
    // 0x1cd998: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEEA0u, 0x1CD994u, 0x1CD99Cu)) {
        return;
    }
    ctx->pc = 0x1CD99Cu;
label_1cd99c:
    // 0x1cd99c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cd99cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd9a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cd9a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd9a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9A8u;
        // 0x1cd9ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD9B0u;
}

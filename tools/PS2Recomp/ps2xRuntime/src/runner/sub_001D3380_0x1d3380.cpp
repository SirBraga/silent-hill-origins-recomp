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

// Function: sub_001D3380
// Address: 0x1d3380 - 0x1d33f8
void sub_001D3380_0x1d3380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3380_0x1d3380");
#endif

    switch (ctx->pc) {
        case 0x1d33a0u: goto label_1d33a0;
        case 0x1d33b0u: goto label_1d33b0;
        default: break;
    }

    ctx->pc = 0x1d3380u;

    // 0x1d3380: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x1d3380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
    // 0x1d3384: 0x7fb00420  sq          $s0, 0x420($sp)
    ctx->pc = 0x1d3384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 16));
    // 0x1d3388: 0x7fb10410  sq          $s1, 0x410($sp)
    ctx->pc = 0x1d3388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 17));
    // 0x1d338c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d338cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3390: 0xffbf0400  sd          $ra, 0x400($sp)
    ctx->pc = 0x1d3390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 31));
    // 0x1d3394: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d3394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3398: 0xc074ac4  jal         func_1D2B10
    ctx->pc = 0x1D3398u;
    SET_GPR_U32(ctx, 31, 0x1D33A0u);
    ctx->pc = 0x1D339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3398u;
    // 0x1d339c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2B10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2B10u, 0x1D3398u, 0x1D33A0u)) {
        return;
    }
    ctx->pc = 0x1D33A0u;
label_1d33a0:
    // 0x1d33a0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1d33a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1d33a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d33a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d33a8: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D33A8u;
    {
        const bool branch_taken_0x1d33a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D33ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33A8u;
        // 0x1d33ac: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d33a8) {
            ctx->pc = 0x1D33E0u;
            goto label_1d33e0;
        }
    }
    ctx->pc = 0x1D33B0u;
label_1d33b0:
    // 0x1d33b0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1d33b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d33b4: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1d33b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1d33b8: 0x63202  srl         $a2, $a2, 8
    ctx->pc = 0x1d33b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1d33bc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d33bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d33c0: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x1d33c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x1d33c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d33c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d33c8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d33c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d33cc: 0xf1282b  sltu        $a1, $a3, $s1
    ctx->pc = 0x1d33ccu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1d33d0: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x1d33d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x1d33d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d33d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d33d8: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1D33D8u;
    {
        const bool branch_taken_0x1d33d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D33DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33D8u;
        // 0x1d33dc: 0xc33026  xor         $a2, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d33d8) {
            ctx->pc = 0x1D33B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d33b0;
        }
    }
    ctx->pc = 0x1D33E0u;
label_1d33e0:
    // 0x1d33e0: 0x7bb00420  lq          $s0, 0x420($sp)
    ctx->pc = 0x1d33e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x1d33e4: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x1d33e4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x1d33e8: 0x7bb10410  lq          $s1, 0x410($sp)
    ctx->pc = 0x1d33e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1d33ec: 0xdfbf0400  ld          $ra, 0x400($sp)
    ctx->pc = 0x1d33ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1d33f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D33F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D33F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33F0u;
        // 0x1d33f4: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D33F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D33F8u;
}

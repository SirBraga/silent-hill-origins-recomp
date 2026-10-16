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

// Function: sub_001DABC8
// Address: 0x1dabc8 - 0x1dac00
void sub_001DABC8_0x1dabc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DABC8_0x1dabc8");
#endif

    ctx->pc = 0x1dabc8u;

    // 0x1dabc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dabc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dabcc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1dabccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1dabd0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1dabd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1dabd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1dabd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dabd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dabd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dabdc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dabdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1dabe0: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x1dabe0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dabe4: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1dabe4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1dabe8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DABE8u;
    {
        const bool branch_taken_0x1dabe8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DABE8u;
        // 0x1dabec: 0x3c05001e  lui         $a1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dabe8) {
            ctx->pc = 0x1DAC28u;
            return;
        }
    }
    ctx->pc = 0x1DABF0u;
    // 0x1dabf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dabf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dabf4: 0x24a5aa88  addiu       $a1, $a1, -0x5578
    ctx->pc = 0x1dabf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945416));
    // 0x1dabf8: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1DABF8u;
    SET_GPR_U32(ctx, 31, 0x1DAC00u);
    ctx->pc = 0x1DABFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DABF8u;
    // 0x1dabfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2266F0u, 0x1DABF8u, 0x1DAC00u)) {
        return;
    }
    ctx->pc = 0x1DAC00u;
}

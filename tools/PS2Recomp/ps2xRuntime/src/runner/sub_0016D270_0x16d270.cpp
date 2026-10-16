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

// Function: sub_0016D270
// Address: 0x16d270 - 0x16d310
void sub_0016D270_0x16d270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D270_0x16d270");
#endif

    switch (ctx->pc) {
        case 0x16d29cu: goto label_16d29c;
        case 0x16d2b0u: goto label_16d2b0;
        case 0x16d2c4u: goto label_16d2c4;
        default: break;
    }

    ctx->pc = 0x16d270u;

    // 0x16d270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16d270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16d274: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16d274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16d278: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16d278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x16d27c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16d27cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d280: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16d280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16d284: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16d284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16d288: 0x8e5100c8  lw          $s1, 0xC8($s2)
    ctx->pc = 0x16d288u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x16d28c: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x16D28Cu;
    {
        const bool branch_taken_0x16d28c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D28Cu;
        // 0x16d290: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d28c) {
            ctx->pc = 0x16D2F0u;
            goto label_16d2f0;
        }
    }
    ctx->pc = 0x16D294u;
    // 0x16d294: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x16D294u;
    SET_GPR_U32(ctx, 31, 0x16D29Cu);
    ctx->pc = 0x16D298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D294u;
    // 0x16d298: 0x8c5086c4  lw          $s0, -0x793C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x16D294u, 0x16D29Cu)) {
        return;
    }
    ctx->pc = 0x16D29Cu;
label_16d29c:
    // 0x16d29c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16D29Cu;
    {
        const bool branch_taken_0x16d29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D29Cu;
        // 0x16d2a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d29c) {
            ctx->pc = 0x16D2CCu;
            goto label_16d2cc;
        }
    }
    ctx->pc = 0x16D2A4u;
    // 0x16d2a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16d2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d2a8: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x16D2A8u;
    SET_GPR_U32(ctx, 31, 0x16D2B0u);
    ctx->pc = 0x16D2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D2A8u;
    // 0x16d2ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x16D2A8u, 0x16D2B0u)) {
        return;
    }
    ctx->pc = 0x16D2B0u;
label_16d2b0:
    // 0x16d2b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16D2B0u;
    {
        const bool branch_taken_0x16d2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2B0u;
        // 0x16d2b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2b0) {
            ctx->pc = 0x16D2CCu;
            goto label_16d2cc;
        }
    }
    ctx->pc = 0x16D2B8u;
    // 0x16d2b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16d2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d2bc: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x16D2BCu;
    SET_GPR_U32(ctx, 31, 0x16D2C4u);
    ctx->pc = 0x16D2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D2BCu;
    // 0x16d2c0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x16D2BCu, 0x16D2C4u)) {
        return;
    }
    ctx->pc = 0x16D2C4u;
label_16d2c4:
    // 0x16d2c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16D2C4u;
    {
        const bool branch_taken_0x16d2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2C4u;
        // 0x16d2c8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2c4) {
            ctx->pc = 0x16D2D0u;
            goto label_16d2d0;
        }
    }
    ctx->pc = 0x16D2CCu;
label_16d2cc:
    // 0x16d2cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16d2ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d2d0:
    // 0x16d2d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D2D0u;
    {
        const bool branch_taken_0x16d2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2D0u;
        // 0x16d2d4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2d0) {
            ctx->pc = 0x16D2E8u;
            goto label_16d2e8;
        }
    }
    ctx->pc = 0x16D2D8u;
    // 0x16d2d8: 0x8e4300cc  lw          $v1, 0xCC($s2)
    ctx->pc = 0x16d2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x16d2dc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x16d2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x16d2e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16D2E0u;
    {
        const bool branch_taken_0x16d2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2E0u;
        // 0x16d2e4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2e0) {
            ctx->pc = 0x16D2F4u;
            goto label_16d2f4;
        }
    }
    ctx->pc = 0x16D2E8u;
label_16d2e8:
    // 0x16d2e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16D2E8u;
    {
        const bool branch_taken_0x16d2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2E8u;
        // 0x16d2ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2e8) {
            ctx->pc = 0x16D2F4u;
            goto label_16d2f4;
        }
    }
    ctx->pc = 0x16D2F0u;
label_16d2f0:
    // 0x16d2f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d2f4:
    // 0x16d2f4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16d2f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d2f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16d2f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d2fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16d2fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d300: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16d300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d304: 0x3e00008  jr          $ra
    ctx->pc = 0x16D304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D304u;
        // 0x16d308: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D30Cu;
    // 0x16d30c: 0x0  nop
    ctx->pc = 0x16d30cu;
    // NOP
    ctx->pc = 0x16d310u;
}

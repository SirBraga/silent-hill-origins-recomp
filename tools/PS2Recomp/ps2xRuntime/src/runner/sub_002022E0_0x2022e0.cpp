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

// Function: sub_002022E0
// Address: 0x2022e0 - 0x202350
void sub_002022E0_0x2022e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002022E0_0x2022e0");
#endif

    switch (ctx->pc) {
        case 0x20230cu: goto label_20230c;
        case 0x20232cu: goto label_20232c;
        case 0x20233cu: goto label_20233c;
        default: break;
    }

    ctx->pc = 0x2022e0u;

    // 0x2022e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2022e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2022e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2022e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2022e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2022e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022ec: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2022ECu;
    {
        const bool branch_taken_0x2022ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2022F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022ECu;
        // 0x2022f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022ec) {
            ctx->pc = 0x20233Cu;
            goto label_20233c;
        }
    }
    ctx->pc = 0x2022F4u;
    // 0x2022f4: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x2022f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x2022f8: 0x8c440270  lw          $a0, 0x270($v0)
    ctx->pc = 0x2022f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5C0270u));
    // 0x2022fc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2022FCu;
    {
        const bool branch_taken_0x2022fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x202300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022FCu;
        // 0x202300: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022fc) {
            ctx->pc = 0x202318u;
            goto label_202318;
        }
    }
    ctx->pc = 0x202304u;
    // 0x202304: 0xc080ad8  jal         func_202B60
    ctx->pc = 0x202304u;
    SET_GPR_U32(ctx, 31, 0x20230Cu);
    ctx->pc = 0x202308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202304u;
    // 0x202308: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202B60u, 0x202304u, 0x20230Cu)) {
        return;
    }
    ctx->pc = 0x20230Cu;
label_20230c:
    // 0x20230c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x20230Cu;
    {
        const bool branch_taken_0x20230c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20230c) {
            ctx->pc = 0x202310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20230Cu;
            // 0x202310: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202340u;
            goto label_202340;
        }
    }
    ctx->pc = 0x202314u;
    // 0x202314: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x202314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_202318:
    // 0x202318: 0x8c440274  lw          $a0, 0x274($v0)
    ctx->pc = 0x202318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x20231c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20231Cu;
    {
        const bool branch_taken_0x20231c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20231c) {
            ctx->pc = 0x202334u;
            goto label_202334;
        }
    }
    ctx->pc = 0x202324u;
    // 0x202324: 0xc080c5c  jal         func_203170
    ctx->pc = 0x202324u;
    SET_GPR_U32(ctx, 31, 0x20232Cu);
    ctx->pc = 0x202328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202324u;
    // 0x202328: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203170u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203170u, 0x202324u, 0x20232Cu)) {
        return;
    }
    ctx->pc = 0x20232Cu;
label_20232c:
    // 0x20232c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20232Cu;
    {
        const bool branch_taken_0x20232c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20232c) {
            ctx->pc = 0x202330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20232Cu;
            // 0x202330: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202340u;
            goto label_202340;
        }
    }
    ctx->pc = 0x202334u;
label_202334:
    // 0x202334: 0xc0c5486  jal         func_315218
    ctx->pc = 0x202334u;
    SET_GPR_U32(ctx, 31, 0x20233Cu);
    ctx->pc = 0x202338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202334u;
    // 0x202338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x202334u, 0x20233Cu)) {
        return;
    }
    ctx->pc = 0x20233Cu;
label_20233c:
    // 0x20233c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20233cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_202340:
    // 0x202340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202344: 0x3e00008  jr          $ra
    ctx->pc = 0x202344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202344u;
        // 0x202348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20234Cu;
    // 0x20234c: 0x0  nop
    ctx->pc = 0x20234cu;
    // NOP
    ctx->pc = 0x202350u;
}

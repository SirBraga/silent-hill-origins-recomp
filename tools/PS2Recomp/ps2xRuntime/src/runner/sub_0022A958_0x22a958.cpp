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

// Function: sub_0022A958
// Address: 0x22a958 - 0x22a9e8
void sub_0022A958_0x22a958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A958_0x22a958");
#endif

    switch (ctx->pc) {
        case 0x22a998u: goto label_22a998;
        case 0x22a9b0u: goto label_22a9b0;
        case 0x22a9b8u: goto label_22a9b8;
        default: break;
    }

    ctx->pc = 0x22a958u;

    // 0x22a958: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22a958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22a95c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22a960: 0x8c633ea0  lw          $v1, 0x3EA0($v1)
    ctx->pc = 0x22a960u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EA0u));
    // 0x22a964: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x22a964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x22a968: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22a968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22a96c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22a96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x22a970: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x22a970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x22a974: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22a974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22a978: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22a978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a97c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a980: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x22a980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22a984: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x22a984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x22a988: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A988u;
    {
        const bool branch_taken_0x22a988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a988) {
            ctx->pc = 0x22A98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A988u;
            // 0x22a98c: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A9A0u;
            goto label_22a9a0;
        }
    }
    ctx->pc = 0x22A990u;
    // 0x22a990: 0xc08abf6  jal         func_22AFD8
    ctx->pc = 0x22A990u;
    SET_GPR_U32(ctx, 31, 0x22A998u);
    ctx->pc = 0x22A994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A990u;
    // 0x22a994: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AFD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AFD8u, 0x22A990u, 0x22A998u)) {
        return;
    }
    ctx->pc = 0x22A998u;
label_22a998:
    // 0x22a998: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x22A998u;
    {
        const bool branch_taken_0x22a998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A998u;
        // 0x22a99c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a998) {
            ctx->pc = 0x22A9D4u;
            goto label_22a9d4;
        }
    }
    ctx->pc = 0x22A9A0u;
label_22a9a0:
    // 0x22a9a0: 0x1211000b  beq         $s0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x22A9A0u;
    {
        const bool branch_taken_0x22a9a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x22A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A9A0u;
        // 0x22a9a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a9a0) {
            ctx->pc = 0x22A9D0u;
            goto label_22a9d0;
        }
    }
    ctx->pc = 0x22A9A8u;
    // 0x22a9a8: 0x2604fff0  addiu       $a0, $s0, -0x10
    ctx->pc = 0x22a9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x22a9ac: 0x0  nop
    ctx->pc = 0x22a9acu;
    // NOP
label_22a9b0:
    // 0x22a9b0: 0xc08abf6  jal         func_22AFD8
    ctx->pc = 0x22A9B0u;
    SET_GPR_U32(ctx, 31, 0x22A9B8u);
    ctx->pc = 0x22A9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A9B0u;
    // 0x22a9b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AFD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AFD8u, 0x22A9B0u, 0x22A9B8u)) {
        return;
    }
    ctx->pc = 0x22A9B8u;
label_22a9b8:
    // 0x22a9b8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A9B8u;
    {
        const bool branch_taken_0x22a9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a9b8) {
            ctx->pc = 0x22A9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A9B8u;
            // 0x22a9bc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A9D4u;
            goto label_22a9d4;
        }
    }
    ctx->pc = 0x22A9C0u;
    // 0x22a9c0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x22a9c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22a9c4: 0x1611fffa  bne         $s0, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22A9C4u;
    {
        const bool branch_taken_0x22a9c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x22A9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A9C4u;
        // 0x22a9c8: 0x2604fff0  addiu       $a0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a9c4) {
            ctx->pc = 0x22A9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a9b0;
        }
    }
    ctx->pc = 0x22A9CCu;
    // 0x22a9cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22a9ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a9d0:
    // 0x22a9d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22a9d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22a9d4:
    // 0x22a9d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22a9d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a9d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22a9d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a9dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x22A9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A9E0u;
        // 0x22a9e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A9E8u;
}

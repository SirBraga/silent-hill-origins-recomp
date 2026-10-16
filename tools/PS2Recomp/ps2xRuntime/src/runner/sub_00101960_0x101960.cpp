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

// Function: sub_00101960
// Address: 0x101960 - 0x1019c0
void sub_00101960_0x101960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101960_0x101960");
#endif

    switch (ctx->pc) {
        case 0x10197cu: goto label_10197c;
        case 0x10198cu: goto label_10198c;
        case 0x1019acu: goto label_1019ac;
        default: break;
    }

    ctx->pc = 0x101960u;

    // 0x101960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x101960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x101964: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x101964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x101968: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10196c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10196cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101970: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101974: 0xc0401a6  jal         func_100698
    ctx->pc = 0x101974u;
    SET_GPR_U32(ctx, 31, 0x10197Cu);
    ctx->pc = 0x101978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101974u;
    // 0x101978: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x100698u, 0x101974u, 0x10197Cu)) {
        return;
    }
    ctx->pc = 0x10197Cu;
label_10197c:
    // 0x10197c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x10197cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x101980: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x101980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101984: 0xc05953e  jal         func_1654F8
    ctx->pc = 0x101984u;
    SET_GPR_U32(ctx, 31, 0x10198Cu);
    ctx->pc = 0x101988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101984u;
    // 0x101988: 0x8c448668  lw          $a0, -0x7998($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1654F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1654F8u, 0x101984u, 0x10198Cu)) {
        return;
    }
    ctx->pc = 0x10198Cu;
label_10198c:
    // 0x10198c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10198cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101990: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x101990u;
    {
        const bool branch_taken_0x101990 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x101994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101990u;
        // 0x101994: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101990) {
            ctx->pc = 0x1019B0u;
            goto label_1019b0;
        }
    }
    ctx->pc = 0x101998u;
    // 0x101998: 0x8ca20660  lw          $v0, 0x660($a1)
    ctx->pc = 0x101998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1632)));
    // 0x10199c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10199Cu;
    {
        const bool branch_taken_0x10199c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10199c) {
            ctx->pc = 0x1019A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10199Cu;
            // 0x1019a0: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1019B4u;
            goto label_1019b4;
        }
    }
    ctx->pc = 0x1019A4u;
    // 0x1019a4: 0xc040980  jal         func_102600
    ctx->pc = 0x1019A4u;
    SET_GPR_U32(ctx, 31, 0x1019ACu);
    ctx->pc = 0x1019A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1019A4u;
    // 0x1019a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102600u, 0x1019A4u, 0x1019ACu)) {
        return;
    }
    ctx->pc = 0x1019ACu;
label_1019ac:
    // 0x1019ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1019acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1019b0:
    // 0x1019b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1019b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1019b4:
    // 0x1019b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1019b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1019b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1019B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1019BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1019B8u;
        // 0x1019bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1019B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1019C0u;
}

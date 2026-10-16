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

// Function: sub_00276668
// Address: 0x276668 - 0x2766c0
void sub_00276668_0x276668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276668_0x276668");
#endif

    switch (ctx->pc) {
        case 0x27669cu: goto label_27669c;
        default: break;
    }

    ctx->pc = 0x276668u;

    // 0x276668: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x276668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27666c: 0x8f8587b8  lw          $a1, -0x7848($gp)
    ctx->pc = 0x27666cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936504)));
    // 0x276670: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x276670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x276674: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x276674u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x276678: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x276678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27667c: 0x8f8787bc  lw          $a3, -0x7844($gp)
    ctx->pc = 0x27667cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936508)));
    // 0x276680: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x276680u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x276684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276688: 0x25085640  addiu       $t0, $t0, 0x5640
    ctx->pc = 0x276688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22080));
    // 0x27668c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x27668cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x276690: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x276690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x276694: 0xc0930ce  jal         func_24C338
    ctx->pc = 0x276694u;
    SET_GPR_U32(ctx, 31, 0x27669Cu);
    ctx->pc = 0x276698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276694u;
    // 0x276698: 0x3529001b  ori         $t1, $t1, 0x1B (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)27);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x276694u, 0x27669Cu)) {
        return;
    }
    ctx->pc = 0x27669Cu;
label_27669c:
    // 0x27669c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27669cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2766a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2766a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2766a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2766a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2766a8: 0xaf838f94  sw          $v1, -0x706C($gp)
    ctx->pc = 0x2766a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938516), GPR_U32(ctx, 3));
    // 0x2766ac: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x2766acu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16));
    // 0x2766b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2766b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2766b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2766B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2766B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2766B4u;
        // 0x2766b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2766B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2766BCu;
    // 0x2766bc: 0x0  nop
    ctx->pc = 0x2766bcu;
    // NOP
    ctx->pc = 0x2766c0u;
}

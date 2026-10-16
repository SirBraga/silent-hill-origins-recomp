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

// Function: sub_001D8098
// Address: 0x1d8098 - 0x1d80f8
void sub_001D8098_0x1d8098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8098_0x1d8098");
#endif

    switch (ctx->pc) {
        case 0x1d80ccu: goto label_1d80cc;
        case 0x1d80e0u: goto label_1d80e0;
        case 0x1d80e8u: goto label_1d80e8;
        default: break;
    }

    ctx->pc = 0x1d8098u;

    // 0x1d8098: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d8098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d809c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d809cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d80a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d80a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d80a4: 0x8c4588f0  lw          $a1, -0x7710($v0)
    ctx->pc = 0x1d80a4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6F88F0u));
    // 0x1d80a8: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1d80a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1d80ac: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D80ACu;
    {
        const bool branch_taken_0x1d80ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D80B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80ACu;
        // 0x1d80b0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80ac) {
            ctx->pc = 0x1D80CCu;
            goto label_1d80cc;
        }
    }
    ctx->pc = 0x1D80B4u;
    // 0x1d80b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d80b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d80b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D80B8u;
    {
        const bool branch_taken_0x1d80b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D80BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80B8u;
        // 0x1d80bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80b8) {
            ctx->pc = 0x1D80CCu;
            goto label_1d80cc;
        }
    }
    ctx->pc = 0x1D80C0u;
    // 0x1d80c0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1d80c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1d80c4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D80C4u;
    SET_GPR_U32(ctx, 31, 0x1D80CCu);
    ctx->pc = 0x1D80C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D80C4u;
    // 0x1d80c8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D80C4u, 0x1D80CCu)) {
        return;
    }
    ctx->pc = 0x1D80CCu;
label_1d80cc:
    // 0x1d80cc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d80ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d80d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d80d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d80d4: 0xac629d8c  sw          $v0, -0x6274($v1)
    ctx->pc = 0x1d80d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x339D8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339D8Cu, _value); } while (0);
    // 0x1d80d8: 0xc0761c6  jal         func_1D8718
    ctx->pc = 0x1D80D8u;
    SET_GPR_U32(ctx, 31, 0x1D80E0u);
    ctx->pc = 0x1D80DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D80D8u;
    // 0x1d80dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8718u, 0x1D80D8u, 0x1D80E0u)) {
        return;
    }
    ctx->pc = 0x1D80E0u;
label_1d80e0:
    // 0x1d80e0: 0xc075d82  jal         func_1D7608
    ctx->pc = 0x1D80E0u;
    SET_GPR_U32(ctx, 31, 0x1D80E8u);
    ctx->pc = 0x1D80E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D80E0u;
    // 0x1d80e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7608u, 0x1D80E0u, 0x1D80E8u)) {
        return;
    }
    ctx->pc = 0x1D80E8u;
label_1d80e8:
    // 0x1d80e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d80e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d80ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D80ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D80F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80ECu;
        // 0x1d80f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D80ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D80F4u;
    // 0x1d80f4: 0x0  nop
    ctx->pc = 0x1d80f4u;
    // NOP
    ctx->pc = 0x1d80f8u;
}

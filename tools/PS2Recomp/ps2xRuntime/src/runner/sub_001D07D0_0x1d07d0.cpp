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

// Function: sub_001D07D0
// Address: 0x1d07d0 - 0x1d0828
void sub_001D07D0_0x1d07d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D07D0_0x1d07d0");
#endif

    switch (ctx->pc) {
        case 0x1d0804u: goto label_1d0804;
        case 0x1d0818u: goto label_1d0818;
        default: break;
    }

    ctx->pc = 0x1d07d0u;

    // 0x1d07d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1d07d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1d07d4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d07d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d07d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d07d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d07dc: 0x8c4543b8  lw          $a1, 0x43B8($v0)
    ctx->pc = 0x1d07dcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B43B8u));
    // 0x1d07e0: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1d07e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1d07e4: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D07E4u;
    {
        const bool branch_taken_0x1d07e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D07E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07E4u;
        // 0x1d07e8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07e4) {
            ctx->pc = 0x1D0804u;
            goto label_1d0804;
        }
    }
    ctx->pc = 0x1D07ECu;
    // 0x1d07ec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d07ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d07f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D07F0u;
    {
        const bool branch_taken_0x1d07f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D07F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07F0u;
        // 0x1d07f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07f0) {
            ctx->pc = 0x1D0804u;
            goto label_1d0804;
        }
    }
    ctx->pc = 0x1D07F8u;
    // 0x1d07f8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1d07f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1d07fc: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D07FCu;
    SET_GPR_U32(ctx, 31, 0x1D0804u);
    ctx->pc = 0x1D0800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D07FCu;
    // 0x1d0800: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D07FCu, 0x1D0804u)) {
        return;
    }
    ctx->pc = 0x1D0804u;
label_1d0804:
    // 0x1d0804: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d0804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d0808: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d0808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d080c: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x1d080cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339168u));
    // 0x1d0810: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x1D0810u;
    SET_GPR_U32(ctx, 31, 0x1D0818u);
    ctx->pc = 0x1D0814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0810u;
    // 0x1d0814: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1D0810u, 0x1D0818u)) {
        return;
    }
    ctx->pc = 0x1D0818u;
label_1d0818:
    // 0x1d0818: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d081c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d081cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0820: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0820u;
        // 0x1d0824: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0828u;
}

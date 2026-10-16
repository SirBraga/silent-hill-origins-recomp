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

// Function: sub_001D0720
// Address: 0x1d0720 - 0x1d0778
void sub_001D0720_0x1d0720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0720_0x1d0720");
#endif

    switch (ctx->pc) {
        case 0x1d0754u: goto label_1d0754;
        case 0x1d0768u: goto label_1d0768;
        default: break;
    }

    ctx->pc = 0x1d0720u;

    // 0x1d0720: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1d0720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1d0724: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d0724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d0728: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d072c: 0x8c4543b8  lw          $a1, 0x43B8($v0)
    ctx->pc = 0x1d072cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B43B8u));
    // 0x1d0730: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1d0730u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1d0734: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0734u;
    {
        const bool branch_taken_0x1d0734 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D0738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0734u;
        // 0x1d0738: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0734) {
            ctx->pc = 0x1D0754u;
            goto label_1d0754;
        }
    }
    ctx->pc = 0x1D073Cu;
    // 0x1d073c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d073cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d0740: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0740u;
    {
        const bool branch_taken_0x1d0740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0740u;
        // 0x1d0744: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0740) {
            ctx->pc = 0x1D0754u;
            goto label_1d0754;
        }
    }
    ctx->pc = 0x1D0748u;
    // 0x1d0748: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1d0748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1d074c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D074Cu;
    SET_GPR_U32(ctx, 31, 0x1D0754u);
    ctx->pc = 0x1D0750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D074Cu;
    // 0x1d0750: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D074Cu, 0x1D0754u)) {
        return;
    }
    ctx->pc = 0x1D0754u;
label_1d0754:
    // 0x1d0754: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d0754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d0758: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d0758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d075c: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x1d075cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339168u));
    // 0x1d0760: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x1D0760u;
    SET_GPR_U32(ctx, 31, 0x1D0768u);
    ctx->pc = 0x1D0764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0760u;
    // 0x1d0764: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1D0760u, 0x1D0768u)) {
        return;
    }
    ctx->pc = 0x1D0768u;
label_1d0768:
    // 0x1d0768: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d076c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d076cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0770: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0770u;
        // 0x1d0774: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0778u;
}

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

// Function: sub_001D2CC0
// Address: 0x1d2cc0 - 0x1d2d10
void sub_001D2CC0_0x1d2cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2CC0_0x1d2cc0");
#endif

    switch (ctx->pc) {
        case 0x1d2ce8u: goto label_1d2ce8;
        case 0x1d2cf0u: goto label_1d2cf0;
        default: break;
    }

    ctx->pc = 0x1d2cc0u;

    // 0x1d2cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d2cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d2cc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d2cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d2cc8: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x1d2cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x1d2ccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d2cd0: 0x8e029b5c  lw          $v0, -0x64A4($s0)
    ctx->pc = 0x1d2cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x339B5Cu));
    // 0x1d2cd4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2CD4u;
    {
        const bool branch_taken_0x1d2cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2CD4u;
        // 0x1d2cd8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2cd4) {
            ctx->pc = 0x1D2CF8u;
            goto label_1d2cf8;
        }
    }
    ctx->pc = 0x1D2CDCu;
    // 0x1d2cdc: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1d2cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1d2ce0: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1D2CE0u;
    SET_GPR_U32(ctx, 31, 0x1D2CE8u);
    ctx->pc = 0x1D2CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2CE0u;
    // 0x1d2ce4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1D2CE0u, 0x1D2CE8u)) {
        return;
    }
    ctx->pc = 0x1D2CE8u;
label_1d2ce8:
    // 0x1d2ce8: 0xc075700  jal         func_1D5C00
    ctx->pc = 0x1D2CE8u;
    SET_GPR_U32(ctx, 31, 0x1D2CF0u);
    ctx->pc = 0x1D2CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2CE8u;
    // 0x1d2cec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5C00u, 0x1D2CE8u, 0x1D2CF0u)) {
        return;
    }
    ctx->pc = 0x1D2CF0u;
label_1d2cf0:
    // 0x1d2cf0: 0xae029b5c  sw          $v0, -0x64A4($s0)
    ctx->pc = 0x1d2cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941532), GPR_U32(ctx, 2));
    // 0x1d2cf4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d2cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d2cf8:
    // 0x1d2cf8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d2cf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2d00: 0xac409b60  sw          $zero, -0x64A0($v0)
    ctx->pc = 0x1d2d00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941536), GPR_U32(ctx, 0));
    // 0x1d2d04: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D04u;
        // 0x1d2d08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2D0Cu;
    // 0x1d2d0c: 0x0  nop
    ctx->pc = 0x1d2d0cu;
    // NOP
    ctx->pc = 0x1d2d10u;
}

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

// Function: sub_0010FC90
// Address: 0x10fc90 - 0x10fcf8
void sub_0010FC90_0x10fc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FC90_0x10fc90");
#endif

    switch (ctx->pc) {
        case 0x10fcb4u: goto label_10fcb4;
        case 0x10fcd8u: goto label_10fcd8;
        case 0x10fce0u: goto label_10fce0;
        default: break;
    }

    ctx->pc = 0x10fc90u;

    // 0x10fc90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10fc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10fc94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10fc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10fc98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10fc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10fc9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10fc9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fca0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x10fca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x10fca4: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x10FCA4u;
    {
        const bool branch_taken_0x10fca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fca4) {
            ctx->pc = 0x10FCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10FCA4u;
            // 0x10fca8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10FCE8u;
            goto label_10fce8;
        }
    }
    ctx->pc = 0x10FCACu;
    // 0x10fcac: 0xc0b879c  jal         func_2E1E70
    ctx->pc = 0x10FCACu;
    SET_GPR_U32(ctx, 31, 0x10FCB4u);
    ctx->pc = 0x10FCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FCACu;
    // 0x10fcb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1E70u, 0x10FCACu, 0x10FCB4u)) {
        return;
    }
    ctx->pc = 0x10FCB4u;
label_10fcb4:
    // 0x10fcb4: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x10fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x10fcb8: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x10fcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
    // 0x10fcbc: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x10fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x10fcc0: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x10fcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x10fcc4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FCC4u;
    {
        const bool branch_taken_0x10fcc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCC4u;
        // 0x10fcc8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fcc4) {
            ctx->pc = 0x10FCD8u;
            goto label_10fcd8;
        }
    }
    ctx->pc = 0x10FCCCu;
    // 0x10fccc: 0xc46c0058  lwc1        $f12, 0x58($v1)
    ctx->pc = 0x10fcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10fcd0: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10FCD0u;
    SET_GPR_U32(ctx, 31, 0x10FCD8u);
    ctx->pc = 0x10FCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FCD0u;
    // 0x10fcd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10FCD0u, 0x10FCD8u)) {
        return;
    }
    ctx->pc = 0x10FCD8u;
label_10fcd8:
    // 0x10fcd8: 0xc0765ea  jal         func_1D97A8
    ctx->pc = 0x10FCD8u;
    SET_GPR_U32(ctx, 31, 0x10FCE0u);
    ctx->pc = 0x10FCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FCD8u;
    // 0x10fcdc: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D97A8u, 0x10FCD8u, 0x10FCE0u)) {
        return;
    }
    ctx->pc = 0x10FCE0u;
label_10fce0:
    // 0x10fce0: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x10fce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x10fce4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10fce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10fce8:
    // 0x10fce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fcec: 0x3e00008  jr          $ra
    ctx->pc = 0x10FCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCECu;
        // 0x10fcf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FCECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FCF4u;
    // 0x10fcf4: 0x0  nop
    ctx->pc = 0x10fcf4u;
    // NOP
    ctx->pc = 0x10fcf8u;
}

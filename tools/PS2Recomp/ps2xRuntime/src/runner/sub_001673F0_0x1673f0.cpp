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

// Function: sub_001673F0
// Address: 0x1673f0 - 0x167468
void sub_001673F0_0x1673f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001673F0_0x1673f0");
#endif

    switch (ctx->pc) {
        case 0x167428u: goto label_167428;
        case 0x167430u: goto label_167430;
        case 0x167438u: goto label_167438;
        case 0x167450u: goto label_167450;
        case 0x167458u: goto label_167458;
        default: break;
    }

    ctx->pc = 0x1673f0u;

    // 0x1673f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1673f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1673f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1673f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1673f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1673f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1673fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1673fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167400: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x167400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x167404: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x167404u;
    {
        const bool branch_taken_0x167404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167404u;
        // 0x167408: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167404) {
            ctx->pc = 0x167458u;
            goto label_167458;
        }
    }
    ctx->pc = 0x16740Cu;
    // 0x16740c: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x16740cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x167410: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x167410u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x167414: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x167414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167418: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x167418u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x16741c: 0xa3a00002  sb          $zero, 0x2($sp)
    ctx->pc = 0x16741cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x167420: 0xc08941c  jal         func_225070
    ctx->pc = 0x167420u;
    SET_GPR_U32(ctx, 31, 0x167428u);
    ctx->pc = 0x167424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167420u;
    // 0x167424: 0xa3a00003  sb          $zero, 0x3($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225070u, 0x167420u, 0x167428u)) {
        return;
    }
    ctx->pc = 0x167428u;
label_167428:
    // 0x167428: 0xc0893a2  jal         func_224E88
    ctx->pc = 0x167428u;
    SET_GPR_U32(ctx, 31, 0x167430u);
    ctx->pc = 0x16742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167428u;
    // 0x16742c: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E88u, 0x167428u, 0x167430u)) {
        return;
    }
    ctx->pc = 0x167430u;
label_167430:
    // 0x167430: 0xc0760d0  jal         func_1D8340
    ctx->pc = 0x167430u;
    SET_GPR_U32(ctx, 31, 0x167438u);
    ctx->pc = 0x1D8340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8340u, 0x167430u, 0x167438u)) {
        return;
    }
    ctx->pc = 0x167438u;
label_167438:
    // 0x167438: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x167438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x16743c: 0xa3a00013  sb          $zero, 0x13($sp)
    ctx->pc = 0x16743cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x167440: 0xa3a00012  sb          $zero, 0x12($sp)
    ctx->pc = 0x167440u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x167444: 0xa3a00011  sb          $zero, 0x11($sp)
    ctx->pc = 0x167444u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x167448: 0xc095438  jal         func_2550E0
    ctx->pc = 0x167448u;
    SET_GPR_U32(ctx, 31, 0x167450u);
    ctx->pc = 0x16744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167448u;
    // 0x16744c: 0xa3a00010  sb          $zero, 0x10($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2550E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2550E0u, 0x167448u, 0x167450u)) {
        return;
    }
    ctx->pc = 0x167450u;
label_167450:
    // 0x167450: 0xc08939a  jal         func_224E68
    ctx->pc = 0x167450u;
    SET_GPR_U32(ctx, 31, 0x167458u);
    ctx->pc = 0x167454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167450u;
    // 0x167454: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E68u, 0x167450u, 0x167458u)) {
        return;
    }
    ctx->pc = 0x167458u;
label_167458:
    // 0x167458: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x167458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16745c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16745cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167460: 0x3e00008  jr          $ra
    ctx->pc = 0x167460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167460u;
        // 0x167464: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167468u;
}

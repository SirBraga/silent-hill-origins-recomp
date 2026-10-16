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

// Function: sub_001C1548
// Address: 0x1c1548 - 0x1c15a8
void sub_001C1548_0x1c1548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1548_0x1c1548");
#endif

    switch (ctx->pc) {
        case 0x1c1584u: goto label_1c1584;
        case 0x1c1594u: goto label_1c1594;
        default: break;
    }

    ctx->pc = 0x1c1548u;

    // 0x1c1548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c1548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c154c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c154cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c1550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1554: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1558: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1c1558u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c155c: 0x8e020308  lw          $v0, 0x308($s0)
    ctx->pc = 0x1c155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 776)));
    // 0x1c1560: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1C1560u;
    {
        const bool branch_taken_0x1c1560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1560) {
            ctx->pc = 0x1C1564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1560u;
            // 0x1c1564: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1598u;
            goto label_1c1598;
        }
    }
    ctx->pc = 0x1C1568u;
    // 0x1c1568: 0x8e020310  lw          $v0, 0x310($s0)
    ctx->pc = 0x1c1568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1c156c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C156Cu;
    {
        const bool branch_taken_0x1c156c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c156c) {
            ctx->pc = 0x1C1570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C156Cu;
            // 0x1c1570: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1598u;
            goto label_1c1598;
        }
    }
    ctx->pc = 0x1C1574u;
    // 0x1c1574: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x1c1574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x1c1578: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c1578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c157c: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x1C157Cu;
    SET_GPR_U32(ctx, 31, 0x1C1584u);
    ctx->pc = 0x1C1580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C157Cu;
    // 0x1c1580: 0x46146502  mul.s       $f20, $f12, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1C157Cu, 0x1C1584u)) {
        return;
    }
    ctx->pc = 0x1C1584u;
label_1c1584:
    // 0x1c1584: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x1c1584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c1588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c158c: 0xc070582  jal         func_1C1608
    ctx->pc = 0x1C158Cu;
    SET_GPR_U32(ctx, 31, 0x1C1594u);
    ctx->pc = 0x1C1590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C158Cu;
    // 0x1c1590: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C1608u, 0x1C158Cu, 0x1C1594u)) {
        return;
    }
    ctx->pc = 0x1C1594u;
label_1c1594:
    // 0x1c1594: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c1594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1598:
    // 0x1c1598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c159c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1c159cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c15a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C15A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C15A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15A0u;
        // 0x1c15a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C15A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C15A8u;
}

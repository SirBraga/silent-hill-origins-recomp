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

// Function: sub_001C1480
// Address: 0x1c1480 - 0x1c14e8
void sub_001C1480_0x1c1480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1480_0x1c1480");
#endif

    switch (ctx->pc) {
        case 0x1c14dcu: goto label_1c14dc;
        default: break;
    }

    ctx->pc = 0x1c1480u;

    // 0x1c1480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1488: 0x8c8202cc  lw          $v0, 0x2CC($a0)
    ctx->pc = 0x1c1488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 716)));
    // 0x1c148c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C148Cu;
    {
        const bool branch_taken_0x1c148c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c148c) {
            ctx->pc = 0x1C1490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C148Cu;
            // 0x1c1490: 0xc48302ec  lwc1        $f3, 0x2EC($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C14B4u;
            goto label_1c14b4;
        }
    }
    ctx->pc = 0x1C1494u;
    // 0x1c1494: 0x8c8202c8  lw          $v0, 0x2C8($a0)
    ctx->pc = 0x1c1494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 712)));
    // 0x1c1498: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1498u;
    {
        const bool branch_taken_0x1c1498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1498) {
            ctx->pc = 0x1C149Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1498u;
            // 0x1c149c: 0xc48302ec  lwc1        $f3, 0x2EC($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C14B4u;
            goto label_1c14b4;
        }
    }
    ctx->pc = 0x1C14A0u;
    // 0x1c14a0: 0xc48302e4  lwc1        $f3, 0x2E4($a0)
    ctx->pc = 0x1c14a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c14a4: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1c14a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x1c14a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c14a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c14ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C14ACu;
    {
        const bool branch_taken_0x1c14ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C14B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C14ACu;
        // 0x1c14b0: 0xc48202e8  lwc1        $f2, 0x2E8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c14ac) {
            ctx->pc = 0x1C14C0u;
            goto label_1c14c0;
        }
    }
    ctx->pc = 0x1C14B4u;
label_1c14b4:
    // 0x1c14b4: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1c14b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x1c14b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c14b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c14bc: 0xc48202f0  lwc1        $f2, 0x2F0($a0)
    ctx->pc = 0x1c14bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c14c0:
    // 0x1c14c0: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x1c14c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x1c14c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c14c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c14c8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1c14c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1c14cc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c14ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c14d0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1c14d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1c14d4: 0xc070166  jal         func_1C0598
    ctx->pc = 0x1C14D4u;
    SET_GPR_U32(ctx, 31, 0x1C14DCu);
    ctx->pc = 0x1C14D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C14D4u;
    // 0x1c14d8: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C0598u, 0x1C14D4u, 0x1C14DCu)) {
        return;
    }
    ctx->pc = 0x1C14DCu;
label_1c14dc:
    // 0x1c14dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c14dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c14e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C14E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C14E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C14E0u;
        // 0x1c14e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C14E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C14E8u;
}

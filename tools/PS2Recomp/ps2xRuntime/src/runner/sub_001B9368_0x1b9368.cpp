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

// Function: sub_001B9368
// Address: 0x1b9368 - 0x1b93d0
void sub_001B9368_0x1b9368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9368_0x1b9368");
#endif

    ctx->pc = 0x1b9368u;

    // 0x1b9368: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1b9368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b936c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1b936cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9370: 0xa23818  mult        $a3, $a1, $v0
    ctx->pc = 0x1b9370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1b9374: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b9374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9378: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x1b9378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1b937c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b937cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9380: 0xac4402c4  sw          $a0, 0x2C4($v0)
    ctx->pc = 0x1b9380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 708), GPR_U32(ctx, 4));
    // 0x1b9384: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9384u;
    {
        const bool branch_taken_0x1b9384 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9384u;
        // 0x1b9388: 0xac6002c8  sw          $zero, 0x2C8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 712), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9384) {
            ctx->pc = 0x1B9398u;
            goto label_1b9398;
        }
    }
    ctx->pc = 0x1B938Cu;
    // 0x1b938c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b938cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b9390: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9390u;
    {
        const bool branch_taken_0x1b9390 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B9394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9390u;
        // 0x1b9394: 0xc71021  addu        $v0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9390) {
            ctx->pc = 0x1B93B0u;
            goto label_1b93b0;
        }
    }
    ctx->pc = 0x1B9398u;
label_1b9398:
    // 0x1b9398: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1b9398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1b939c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b939cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b93a0: 0xc44002d0  lwc1        $f0, 0x2D0($v0)
    ctx->pc = 0x1b93a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b93a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b93a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b93a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B93A8u;
    {
        const bool branch_taken_0x1b93a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B93ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93A8u;
        // 0x1b93ac: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b93a8) {
            ctx->pc = 0x1B93C4u;
            goto label_1b93c4;
        }
    }
    ctx->pc = 0x1B93B0u;
label_1b93b0:
    // 0x1b93b0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1b93b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1b93b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b93b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b93b8: 0xc44002d0  lwc1        $f0, 0x2D0($v0)
    ctx->pc = 0x1b93b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b93bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b93bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b93c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b93c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b93c4:
    // 0x1b93c4: 0xe46002cc  swc1        $f0, 0x2CC($v1)
    ctx->pc = 0x1b93c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 716), bits); }
    // 0x1b93c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B93C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93C8u;
        // 0x1b93cc: 0xe44002d4  swc1        $f0, 0x2D4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B93C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B93D0u;
}

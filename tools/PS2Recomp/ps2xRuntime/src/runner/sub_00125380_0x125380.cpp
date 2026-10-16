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

// Function: sub_00125380
// Address: 0x125380 - 0x1253b8
void sub_00125380_0x125380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125380_0x125380");
#endif

    switch (ctx->pc) {
        case 0x125394u: goto label_125394;
        default: break;
    }

    ctx->pc = 0x125380u;

    // 0x125380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x125380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x125384: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x125384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x125388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12538c: 0xc04f0c2  jal         func_13C308
    ctx->pc = 0x12538Cu;
    SET_GPR_U32(ctx, 31, 0x125394u);
    ctx->pc = 0x125390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12538Cu;
    // 0x125390: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x12538Cu, 0x125394u)) {
        return;
    }
    ctx->pc = 0x125394u;
label_125394:
    // 0x125394: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x125394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125398: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x125398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12539c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12539cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1253a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1253a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1253a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1253a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1253a8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1253a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1253ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1253acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1253b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1253B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1253B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253B0u;
        // 0x1253b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1253B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1253B8u;
}

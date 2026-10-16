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

// Function: sub_001C3740
// Address: 0x1c3740 - 0x1c3798
void sub_001C3740_0x1c3740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3740_0x1c3740");
#endif

    switch (ctx->pc) {
        case 0x1c376cu: goto label_1c376c;
        case 0x1c3788u: goto label_1c3788;
        default: break;
    }

    ctx->pc = 0x1c3740u;

    // 0x1c3740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c3740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c3744: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c3744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c3748: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c3748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c374c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c374cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3750: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c3750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c3754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c3758: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1c3758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1c375c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c375cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3760: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c3760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3764: 0xc043642  jal         func_10D908
    ctx->pc = 0x1C3764u;
    SET_GPR_U32(ctx, 31, 0x1C376Cu);
    ctx->pc = 0x1C3768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3764u;
    // 0x1c3768: 0x8c4482f0  lw          $a0, -0x7D10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10D908u, 0x1C3764u, 0x1C376Cu)) {
        return;
    }
    ctx->pc = 0x1C376Cu;
label_1c376c:
    // 0x1c376c: 0x8e030818  lw          $v1, 0x818($s0)
    ctx->pc = 0x1c376cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2072)));
    // 0x1c3770: 0xc6000834  lwc1        $f0, 0x834($s0)
    ctx->pc = 0x1c3770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3774: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1c3774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1c3778: 0xc6010848  lwc1        $f1, 0x848($s0)
    ctx->pc = 0x1c3778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c377c: 0x8e02081c  lw          $v0, 0x81C($s0)
    ctx->pc = 0x1c377cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2076)));
    // 0x1c3780: 0xc0601bc  jal         func_1806F0
    ctx->pc = 0x1C3780u;
    SET_GPR_U32(ctx, 31, 0x1C3788u);
    ctx->pc = 0x1C3784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3780u;
    // 0x1c3784: 0xe4410004  swc1        $f1, 0x4($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1806F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1806F0u, 0x1C3780u, 0x1C3788u)) {
        return;
    }
    ctx->pc = 0x1C3788u;
label_1c3788:
    // 0x1c3788: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c3788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c378c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c378cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3790: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3790u;
        // 0x1c3794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3798u;
}

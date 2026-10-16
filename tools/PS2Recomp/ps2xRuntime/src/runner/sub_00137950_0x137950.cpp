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

// Function: sub_00137950
// Address: 0x137950 - 0x1379a0
void sub_00137950_0x137950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137950_0x137950");
#endif

    ctx->pc = 0x137950u;

    // 0x137950: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x137950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x137954: 0xc4801abc  lwc1        $f0, 0x1ABC($a0)
    ctx->pc = 0x137954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137958: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x137958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13795c: 0x0  nop
    ctx->pc = 0x13795cu;
    // NOP
    // 0x137960: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x137960u;
    {
        const bool branch_taken_0x137960 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x137960) {
            ctx->pc = 0x137998u;
            goto label_137998;
        }
    }
    ctx->pc = 0x137968u;
    // 0x137968: 0x8c821b84  lw          $v0, 0x1B84($a0)
    ctx->pc = 0x137968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7044)));
    // 0x13796c: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x13796cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
    // 0x137970: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x137970u;
    {
        const bool branch_taken_0x137970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137970) {
            ctx->pc = 0x137998u;
            goto label_137998;
        }
    }
    ctx->pc = 0x137978u;
    // 0x137978: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x137978u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x13797c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13797cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137980: 0x0  nop
    ctx->pc = 0x137980u;
    // NOP
    // 0x137984: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x137984u;
    {
        const bool branch_taken_0x137984 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x137988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137984u;
        // 0x137988: 0xe4801abc  swc1        $f0, 0x1ABC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6844), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137984) {
            ctx->pc = 0x137998u;
            goto label_137998;
        }
    }
    ctx->pc = 0x13798Cu;
    // 0x13798c: 0xc4801ad0  lwc1        $f0, 0x1AD0($a0)
    ctx->pc = 0x13798cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137990: 0xe4811abc  swc1        $f1, 0x1ABC($a0)
    ctx->pc = 0x137990u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6844), bits); }
    // 0x137994: 0xe4801acc  swc1        $f0, 0x1ACC($a0)
    ctx->pc = 0x137994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6860), bits); }
label_137998:
    // 0x137998: 0x3e00008  jr          $ra
    ctx->pc = 0x137998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1379A0u;
}

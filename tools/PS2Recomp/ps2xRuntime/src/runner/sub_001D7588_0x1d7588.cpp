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

// Function: sub_001D7588
// Address: 0x1d7588 - 0x1d75d8
void sub_001D7588_0x1d7588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7588_0x1d7588");
#endif

    ctx->pc = 0x1d7588u;

    // 0x1d7588: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1d7588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d758c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d758cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d7590: 0xc4409cdc  lwc1        $f0, -0x6324($v0)
    ctx->pc = 0x1d7590u;
    { uint32_t bits = FAST_READ32(0x339CDCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7594: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d7594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d7598: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d7598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d759c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d759cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d75a0: 0x46026832  c.eq.s      $f13, $f2
    ctx->pc = 0x1d75a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d75a4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d75a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d75a8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1d75a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1d75ac: 0xe4409ccc  swc1        $f0, -0x6334($v0)
    ctx->pc = 0x1d75acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x339CCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339CCCu, _value); } while (0); }
    // 0x1d75b0: 0xe46c9cd0  swc1        $f12, -0x6330($v1)
    ctx->pc = 0x1d75b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x339CD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339CD0u, _value); } while (0); }
    // 0x1d75b4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D75B4u;
    {
        const bool branch_taken_0x1d75b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D75B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75B4u;
        // 0x1d75b8: 0xe4819cd8  swc1        $f1, -0x6328($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294941912), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d75b4) {
            ctx->pc = 0x1D75CCu;
            goto label_1d75cc;
        }
    }
    ctx->pc = 0x1D75BCu;
    // 0x1d75bc: 0x0  nop
    ctx->pc = 0x1d75bcu;
    // NOP
    // 0x1d75c0: 0x0  nop
    ctx->pc = 0x1d75c0u;
    // NOP
    // 0x1d75c4: 0x460d0803  div.s       $f0, $f1, $f13
    ctx->pc = 0x1d75c4u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[13]);
    // 0x1d75c8: 0xe4809cd8  swc1        $f0, -0x6328($a0)
    ctx->pc = 0x1d75c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294941912), bits); }
label_1d75cc:
    // 0x1d75cc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d75ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d75d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D75D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75D0u;
        // 0x1d75d4: 0xe4429cd4  swc1        $f2, -0x632C($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294941908), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D75D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D75D8u;
}

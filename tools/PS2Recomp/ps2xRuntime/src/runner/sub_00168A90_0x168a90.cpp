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

// Function: sub_00168A90
// Address: 0x168a90 - 0x168ab8
void sub_00168A90_0x168a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168A90_0x168a90");
#endif

    ctx->pc = 0x168a90u;

    // 0x168a90: 0x3c014480  lui         $at, 0x4480
    ctx->pc = 0x168a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17536 << 16));
    // 0x168a94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x168a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168a98: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x168a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x168a9c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x168a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x168aa0: 0xe44c86b0  swc1        $f12, -0x7950($v0)
    ctx->pc = 0x168aa0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3386B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3386B0u, _value); } while (0); }
    // 0x168aa4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x168aa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x168aa8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x168aa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x168aac: 0xe46186b4  swc1        $f1, -0x794C($v1)
    ctx->pc = 0x168aacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3386B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3386B4u, _value); } while (0); }
    // 0x168ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x168AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168AB8u;
}

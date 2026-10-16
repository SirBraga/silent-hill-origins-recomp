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

// Function: sub_002EBC78
// Address: 0x2ebc78 - 0x2ebc98
void sub_002EBC78_0x2ebc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBC78_0x2ebc78");
#endif

    ctx->pc = 0x2ebc78u;

    // 0x2ebc78: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2ebc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ebc7c: 0xc78182d8  lwc1        $f1, -0x7D28($gp)
    ctx->pc = 0x2ebc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ebc80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ebc80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ebc84: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ebc84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ebc88: 0xe48106a0  swc1        $f1, 0x6A0($a0)
    ctx->pc = 0x2ebc88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1696), bits); }
    // 0x2ebc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC8Cu;
        // 0x2ebc90: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBC94u;
    // 0x2ebc94: 0x0  nop
    ctx->pc = 0x2ebc94u;
    // NOP
    ctx->pc = 0x2ebc98u;
}

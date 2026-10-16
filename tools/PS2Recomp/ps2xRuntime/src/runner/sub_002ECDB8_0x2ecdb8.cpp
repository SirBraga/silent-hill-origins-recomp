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

// Function: sub_002ECDB8
// Address: 0x2ecdb8 - 0x2ecdf0
void sub_002ECDB8_0x2ecdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECDB8_0x2ecdb8");
#endif

    ctx->pc = 0x2ecdb8u;

    // 0x2ecdb8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ecdb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ecdbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ecdbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecdc0: 0x94820058  lhu         $v0, 0x58($a0)
    ctx->pc = 0x2ecdc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2ecdc4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2ecdc4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2ecdc8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2ecdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2ecdcc: 0xa4820058  sh          $v0, 0x58($a0)
    ctx->pc = 0x2ecdccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ecdd0: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2ecdd0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2ecdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDD4u;
        // 0x2ecdd8: 0xe48c0088  swc1        $f12, 0x88($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECDDCu;
    // 0x2ecddc: 0x0  nop
    ctx->pc = 0x2ecddcu;
    // NOP
    // 0x2ecde0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ecde0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ecde4: 0x0  nop
    ctx->pc = 0x2ecde4u;
    // NOP
    // 0x2ecde8: 0xa4820058  sh          $v0, 0x58($a0)
    ctx->pc = 0x2ecde8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ecdec: 0x0  nop
    ctx->pc = 0x2ecdecu;
    // NOP
    ctx->pc = 0x2ecdf0u;
}

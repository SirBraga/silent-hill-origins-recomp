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

// Function: sub_0025FE48
// Address: 0x25fe48 - 0x25fe80
void sub_0025FE48_0x25fe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FE48_0x25fe48");
#endif

    ctx->pc = 0x25fe48u;

    // 0x25fe48: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x25fe48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fe4c: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x25fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x25fe50: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x25fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x25fe54: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x25fe54u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x25fe58: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25FE58u;
    {
        const bool branch_taken_0x25fe58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE58u;
        // 0x25fe5c: 0xaca30020  sw          $v1, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe58) {
            ctx->pc = 0x25FE78u;
            goto label_25fe78;
        }
    }
    ctx->pc = 0x25FE60u;
    // 0x25fe60: 0x24c2004c  addiu       $v0, $a2, 0x4C
    ctx->pc = 0x25fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 76));
    // 0x25fe64: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x25fe64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25fe68: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x25fe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25fe6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25fe6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25fe70: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x25fe70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x25fe74: 0x0  nop
    ctx->pc = 0x25fe74u;
    // NOP
label_25fe78:
    // 0x25fe78: 0x3e00008  jr          $ra
    ctx->pc = 0x25FE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FE80u;
}

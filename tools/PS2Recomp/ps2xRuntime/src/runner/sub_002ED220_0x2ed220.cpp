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

// Function: sub_002ED220
// Address: 0x2ed220 - 0x2ed260
void sub_002ED220_0x2ed220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED220_0x2ed220");
#endif

    switch (ctx->pc) {
        case 0x2ed230u: goto label_2ed230;
        default: break;
    }

    ctx->pc = 0x2ed220u;

    // 0x2ed220: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ed220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed224: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x2ed224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2ed228: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED228u;
        // 0x2ed22c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED230u;
label_2ed230:
    // 0x2ed230: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2ed230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed234: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ed234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ed238: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ed238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ed23c: 0x94830058  lhu         $v1, 0x58($a0)
    ctx->pc = 0x2ed23cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2ed240: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ed240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed244: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ed244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ed248: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2ed248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2ed24c: 0xa4830058  sh          $v1, 0x58($a0)
    ctx->pc = 0x2ed24cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ed250: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ed250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ed254: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED254u;
        // 0x2ed258: 0xe4800088  swc1        $f0, 0x88($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED25Cu;
    // 0x2ed25c: 0x0  nop
    ctx->pc = 0x2ed25cu;
    // NOP
    ctx->pc = 0x2ed260u;
}

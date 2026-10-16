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

// Function: sub_0025FD40
// Address: 0x25fd40 - 0x25fd80
void sub_0025FD40_0x25fd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FD40_0x25fd40");
#endif

    switch (ctx->pc) {
        case 0x25fd60u: goto label_25fd60;
        default: break;
    }

    ctx->pc = 0x25fd40u;

    // 0x25fd40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25fd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25fd44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25fd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25fd48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25fd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25fd4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25fd4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fd50: 0xc4ad0054  lwc1        $f13, 0x54($a1)
    ctx->pc = 0x25fd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25fd54: 0xc4ac0050  lwc1        $f12, 0x50($a1)
    ctx->pc = 0x25fd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25fd58: 0xc0987ce  jal         func_261F38
    ctx->pc = 0x25FD58u;
    SET_GPR_U32(ctx, 31, 0x25FD60u);
    ctx->pc = 0x25FD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FD58u;
    // 0x25fd5c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261F38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x261F38u, 0x25FD58u, 0x25FD60u)) {
        return;
    }
    ctx->pc = 0x25FD60u;
label_25fd60:
    // 0x25fd60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25fd60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fd64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fd68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25fd68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x25FD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD6Cu;
        // 0x25fd70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FD6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FD74u;
    // 0x25fd74: 0x0  nop
    ctx->pc = 0x25fd74u;
    // NOP
    // 0x25fd78: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25fd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25fd7c: 0x0  nop
    ctx->pc = 0x25fd7cu;
    // NOP
    ctx->pc = 0x25fd80u;
}

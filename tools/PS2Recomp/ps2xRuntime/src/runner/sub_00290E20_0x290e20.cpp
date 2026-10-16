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

// Function: sub_00290E20
// Address: 0x290e20 - 0x290e70
void sub_00290E20_0x290e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290E20_0x290e20");
#endif

    switch (ctx->pc) {
        case 0x290e38u: goto label_290e38;
        default: break;
    }

    ctx->pc = 0x290e20u;

    // 0x290e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x290e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x290e24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x290e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x290e28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x290e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290e30: 0xc0a3f12  jal         func_28FC48
    ctx->pc = 0x290E30u;
    SET_GPR_U32(ctx, 31, 0x290E38u);
    ctx->pc = 0x290E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290E30u;
    // 0x290e34: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FC48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28FC48u, 0x290E30u, 0x290E38u)) {
        return;
    }
    ctx->pc = 0x290E38u;
label_290e38:
    // 0x290e38: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x290e38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290e40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x290e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e44: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x290e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x290e48: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x290e48u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16));
    // 0x290e4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x290e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290e50: 0x3e00008  jr          $ra
    ctx->pc = 0x290E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E50u;
        // 0x290e54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290E58u;
    // 0x290e58: 0xe44c00bc  swc1        $f12, 0xBC($v0)
    ctx->pc = 0x290e58u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x290e5c: 0x0  nop
    ctx->pc = 0x290e5cu;
    // NOP
    // 0x290e60: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x290e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x290e64: 0x0  nop
    ctx->pc = 0x290e64u;
    // NOP
    // 0x290e68: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x290e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x290e6c: 0x0  nop
    ctx->pc = 0x290e6cu;
    // NOP
    ctx->pc = 0x290e70u;
}

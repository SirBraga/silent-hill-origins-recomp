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

// Function: sub_001B6D10
// Address: 0x1b6d10 - 0x1b6d68
void sub_001B6D10_0x1b6d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6D10_0x1b6d10");
#endif

    switch (ctx->pc) {
        case 0x1b6d48u: goto label_1b6d48;
        default: break;
    }

    ctx->pc = 0x1b6d10u;

    // 0x1b6d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b6d14: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b6d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1b6d18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b6d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6d1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b6d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b6d20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6d2c: 0x3c0143df  lui         $at, 0x43DF
    ctx->pc = 0x1b6d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17375 << 16));
    // 0x1b6d30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b6d30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b6d34: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1b6d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1b6d38: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1b6d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b6d3c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1b6d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1b6d40: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B6D40u;
    SET_GPR_U32(ctx, 31, 0x1B6D48u);
    ctx->pc = 0x1B6D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D40u;
    // 0x1b6d44: 0xe6010010  swc1        $f1, 0x10($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B6D40u, 0x1B6D48u)) {
        return;
    }
    ctx->pc = 0x1B6D48u;
label_1b6d48:
    // 0x1b6d48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b6d48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d4c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1b6d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1b6d50: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1b6d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1b6d54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b6d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D5Cu;
        // 0x1b6d60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6D64u;
    // 0x1b6d64: 0x0  nop
    ctx->pc = 0x1b6d64u;
    // NOP
    ctx->pc = 0x1b6d68u;
}

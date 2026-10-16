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

// Function: sub_001AAF10
// Address: 0x1aaf10 - 0x1aaf70
void sub_001AAF10_0x1aaf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAF10_0x1aaf10");
#endif

    switch (ctx->pc) {
        case 0x1aaf40u: goto label_1aaf40;
        case 0x1aaf58u: goto label_1aaf58;
        default: break;
    }

    ctx->pc = 0x1aaf10u;

    // 0x1aaf10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aaf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aaf14: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1aaf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1aaf18: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1aaf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1aaf1c: 0x2442b648  addiu       $v0, $v0, -0x49B8
    ctx->pc = 0x1aaf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948424));
    // 0x1aaf20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aaf20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aaf24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aaf24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aaf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aaf2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1aaf2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf30: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1aaf30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1aaf34: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x1aaf34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x1aaf38: 0xc06b00e  jal         func_1AC038
    ctx->pc = 0x1AAF38u;
    SET_GPR_U32(ctx, 31, 0x1AAF40u);
    ctx->pc = 0x1AAF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAF38u;
    // 0x1aaf3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AC038u, 0x1AAF38u, 0x1AAF40u)) {
        return;
    }
    ctx->pc = 0x1AAF40u;
label_1aaf40:
    // 0x1aaf40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1aaf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1aaf44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aaf44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf48: 0x2442b490  addiu       $v0, $v0, -0x4B70
    ctx->pc = 0x1aaf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947984));
    // 0x1aaf4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1aaf4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf50: 0xc06adda  jal         func_1AB768
    ctx->pc = 0x1AAF50u;
    SET_GPR_U32(ctx, 31, 0x1AAF58u);
    ctx->pc = 0x1AAF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAF50u;
    // 0x1aaf54: 0xae020120  sw          $v0, 0x120($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AB768u, 0x1AAF50u, 0x1AAF58u)) {
        return;
    }
    ctx->pc = 0x1AAF58u;
label_1aaf58:
    // 0x1aaf58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1aaf58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aaf5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aaf5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aaf60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aaf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aaf64: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF64u;
        // 0x1aaf68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAF6Cu;
    // 0x1aaf6c: 0x0  nop
    ctx->pc = 0x1aaf6cu;
    // NOP
    ctx->pc = 0x1aaf70u;
}

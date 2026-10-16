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

// Function: sub_002B2F18
// Address: 0x2b2f18 - 0x2b2f98
void sub_002B2F18_0x2b2f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2F18_0x2b2f18");
#endif

    switch (ctx->pc) {
        case 0x2b2f78u: goto label_2b2f78;
        default: break;
    }

    ctx->pc = 0x2b2f18u;

    // 0x2b2f18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b2f1c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2b2f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b2f20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b2f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b2f24: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2b2f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2b2f28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2f2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2f30: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2b2f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2b2f34: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x2b2f34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b2f38: 0xae080004  sw          $t0, 0x4($s0)
    ctx->pc = 0x2b2f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
    // 0x2b2f3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2b2f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2b2f40: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2b2f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2b2f44: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2b2f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2b2f48: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2b2f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2b2f4c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2b2f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2b2f50: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x2b2f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2b2f54: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2b2f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2b2f58: 0x240703e8  addiu       $a3, $zero, 0x3E8
    ctx->pc = 0x2b2f58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2b2f5c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2b2f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2b2f60: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x2b2f60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b2f64: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2b2f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x2b2f68: 0xae090024  sw          $t1, 0x24($s0)
    ctx->pc = 0x2b2f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 9));
    // 0x2b2f6c: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2b2f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x2b2f70: 0xc0acbfa  jal         func_2B2FE8
    ctx->pc = 0x2B2F70u;
    SET_GPR_U32(ctx, 31, 0x2B2F78u);
    ctx->pc = 0x2B2F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2F70u;
    // 0x2b2f74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2FE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2FE8u, 0x2B2F70u, 0x2B2F78u)) {
        return;
    }
    ctx->pc = 0x2B2F78u;
label_2b2f78:
    // 0x2b2f78: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x2b2f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x2b2f7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b2f7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2f80: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x2b2f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x2b2f84: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x2b2f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x2b2f88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b2f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2f90: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F90u;
        // 0x2b2f94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2F98u;
}

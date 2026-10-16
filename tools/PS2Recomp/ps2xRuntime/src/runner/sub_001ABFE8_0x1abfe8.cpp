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

// Function: sub_001ABFE8
// Address: 0x1abfe8 - 0x1ac038
void sub_001ABFE8_0x1abfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABFE8_0x1abfe8");
#endif

    switch (ctx->pc) {
        case 0x1abffcu: goto label_1abffc;
        case 0x1ac010u: goto label_1ac010;
        default: break;
    }

    ctx->pc = 0x1abfe8u;

    // 0x1abfe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1abfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1abfec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1abfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1abff0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1abff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1abff4: 0xc06ae1a  jal         func_1AB868
    ctx->pc = 0x1ABFF4u;
    SET_GPR_U32(ctx, 31, 0x1ABFFCu);
    ctx->pc = 0x1ABFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABFF4u;
    // 0x1abff8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB868u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AB868u, 0x1ABFF4u, 0x1ABFFCu)) {
        return;
    }
    ctx->pc = 0x1ABFFCu;
label_1abffc:
    // 0x1abffc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1abffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1ac000: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1ac000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1ac004: 0x2463b760  addiu       $v1, $v1, -0x48A0
    ctx->pc = 0x1ac004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948704));
    // 0x1ac008: 0xc069cc8  jal         func_1A7320
    ctx->pc = 0x1AC008u;
    SET_GPR_U32(ctx, 31, 0x1AC010u);
    ctx->pc = 0x1AC00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC008u;
    // 0x1ac00c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A7320u, 0x1AC008u, 0x1AC010u)) {
        return;
    }
    ctx->pc = 0x1AC010u;
label_1ac010:
    // 0x1ac010: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ac010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac014: 0xae001070  sw          $zero, 0x1070($s0)
    ctx->pc = 0x1ac014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4208), GPR_U32(ctx, 0));
    // 0x1ac018: 0xae001078  sw          $zero, 0x1078($s0)
    ctx->pc = 0x1ac018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4216), GPR_U32(ctx, 0));
    // 0x1ac01c: 0xae00107c  sw          $zero, 0x107C($s0)
    ctx->pc = 0x1ac01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4220), GPR_U32(ctx, 0));
    // 0x1ac020: 0xae001080  sw          $zero, 0x1080($s0)
    ctx->pc = 0x1ac020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4224), GPR_U32(ctx, 0));
    // 0x1ac024: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ac024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac02c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC02Cu;
        // 0x1ac030: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC034u;
    // 0x1ac034: 0x0  nop
    ctx->pc = 0x1ac034u;
    // NOP
    ctx->pc = 0x1ac038u;
}

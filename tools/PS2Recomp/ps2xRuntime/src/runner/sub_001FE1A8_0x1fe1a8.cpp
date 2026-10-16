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

// Function: sub_001FE1A8
// Address: 0x1fe1a8 - 0x1fe238
void sub_001FE1A8_0x1fe1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE1A8_0x1fe1a8");
#endif

    switch (ctx->pc) {
        case 0x1fe1d4u: goto label_1fe1d4;
        case 0x1fe1f0u: goto label_1fe1f0;
        case 0x1fe210u: goto label_1fe210;
        default: break;
    }

    ctx->pc = 0x1fe1a8u;

    // 0x1fe1a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1fe1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1fe1ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1fe1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1fe1b0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1fe1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1fe1b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1fe1b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe1b8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1fe1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1fe1bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fe1bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe1c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fe1c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe1c4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1fe1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1fe1c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fe1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1fe1cc: 0xc080858  jal         func_202160
    ctx->pc = 0x1FE1CCu;
    SET_GPR_U32(ctx, 31, 0x1FE1D4u);
    ctx->pc = 0x1FE1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE1CCu;
    // 0x1fe1d0: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1FE1CCu, 0x1FE1D4u)) {
        return;
    }
    ctx->pc = 0x1FE1D4u;
label_1fe1d4:
    // 0x1fe1d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe1d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe1d8: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1fe1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1fe1dc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1fe1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1fe1e0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1fe1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1fe1e4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1fe1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1fe1e8: 0xc07f2f2  jal         func_1FCBC8
    ctx->pc = 0x1FE1E8u;
    SET_GPR_U32(ctx, 31, 0x1FE1F0u);
    ctx->pc = 0x1FE1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE1E8u;
    // 0x1fe1ec: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FCBC8u, 0x1FE1E8u, 0x1FE1F0u)) {
        return;
    }
    ctx->pc = 0x1FE1F0u;
label_1fe1f0:
    // 0x1fe1f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe1f4: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1fe1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x1fe1f8: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x1fe1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
    // 0x1fe1fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fe1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe200: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x1fe200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
    // 0x1fe204: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1fe204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1fe208: 0xc07f730  jal         func_1FDCC0
    ctx->pc = 0x1FE208u;
    SET_GPR_U32(ctx, 31, 0x1FE210u);
    ctx->pc = 0x1FE20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE208u;
    // 0x1fe20c: 0xafb00024  sw          $s0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FDCC0u, 0x1FE208u, 0x1FE210u)) {
        return;
    }
    ctx->pc = 0x1FE210u;
label_1fe210:
    // 0x1fe210: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1fe210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe214: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1fe214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fe218: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1fe218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fe21c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1fe21cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fe220: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1fe220u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fe224: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fe224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe228: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE228u;
        // 0x1fe22c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE230u;
    // 0x1fe230: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1fe230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fe234: 0x0  nop
    ctx->pc = 0x1fe234u;
    // NOP
    ctx->pc = 0x1fe238u;
}

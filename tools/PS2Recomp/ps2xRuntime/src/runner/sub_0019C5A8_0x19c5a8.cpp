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

// Function: sub_0019C5A8
// Address: 0x19c5a8 - 0x19c628
void sub_0019C5A8_0x19c5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C5A8_0x19c5a8");
#endif

    switch (ctx->pc) {
        case 0x19c5ecu: goto label_19c5ec;
        case 0x19c604u: goto label_19c604;
        case 0x19c614u: goto label_19c614;
        default: break;
    }

    ctx->pc = 0x19c5a8u;

    // 0x19c5a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c5ac: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x19c5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19c5b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19c5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19c5b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19c5b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c5b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c5c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19c5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c5c4: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x19c5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x19c5c8: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x19c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x19c5cc: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x19c5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x19c5d0: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x19c5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x19c5d4: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x19c5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x19c5d8: 0xae050058  sw          $a1, 0x58($s0)
    ctx->pc = 0x19c5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 5));
    // 0x19c5dc: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x19c5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
    // 0x19c5e0: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x19c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x19c5e4: 0xc076642  jal         func_1D9908
    ctx->pc = 0x19C5E4u;
    SET_GPR_U32(ctx, 31, 0x19C5ECu);
    ctx->pc = 0x19C5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C5E4u;
    // 0x19c5e8: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9908u, 0x19C5E4u, 0x19C5ECu)) {
        return;
    }
    ctx->pc = 0x19C5ECu;
label_19c5ec:
    // 0x19c5ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c5ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19c5f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19c5f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5fc: 0xc0ba6e0  jal         func_2E9B80
    ctx->pc = 0x19C5FCu;
    SET_GPR_U32(ctx, 31, 0x19C604u);
    ctx->pc = 0x19C600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C5FCu;
    // 0x19c600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9B80u, 0x19C5FCu, 0x19C604u)) {
        return;
    }
    ctx->pc = 0x19C604u;
label_19c604:
    // 0x19c604: 0x26050058  addiu       $a1, $s0, 0x58
    ctx->pc = 0x19c604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x19c608: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x19c608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x19c60c: 0xc0ba720  jal         func_2E9C80
    ctx->pc = 0x19C60Cu;
    SET_GPR_U32(ctx, 31, 0x19C614u);
    ctx->pc = 0x19C610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C60Cu;
    // 0x19c610: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9C80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9C80u, 0x19C60Cu, 0x19C614u)) {
        return;
    }
    ctx->pc = 0x19C614u;
label_19c614:
    // 0x19c614: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19c614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c61c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C61Cu;
        // 0x19c620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C624u;
    // 0x19c624: 0x0  nop
    ctx->pc = 0x19c624u;
    // NOP
    ctx->pc = 0x19c628u;
}

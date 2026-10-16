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

// Function: sub_001FF778
// Address: 0x1ff778 - 0x1ff7c0
void sub_001FF778_0x1ff778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF778_0x1ff778");
#endif

    switch (ctx->pc) {
        case 0x1ff7a4u: goto label_1ff7a4;
        default: break;
    }

    ctx->pc = 0x1ff778u;

    // 0x1ff778: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff77c: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1ff77cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x1ff780: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x1ff780u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
    // 0x1ff784: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ff784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ff788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff78c: 0x24c6f740  addiu       $a2, $a2, -0x8C0
    ctx->pc = 0x1ff78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965056));
    // 0x1ff790: 0x2508f758  addiu       $t0, $t0, -0x8A8
    ctx->pc = 0x1ff790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965080));
    // 0x1ff794: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1ff794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ff798: 0x240507ff  addiu       $a1, $zero, 0x7FF
    ctx->pc = 0x1ff798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x1ff79c: 0xc09579e  jal         func_255E78
    ctx->pc = 0x1FF79Cu;
    SET_GPR_U32(ctx, 31, 0x1FF7A4u);
    ctx->pc = 0x1FF7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF79Cu;
    // 0x1ff7a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255E78u, 0x1FF79Cu, 0x1FF7A4u)) {
        return;
    }
    ctx->pc = 0x1FF7A4u;
label_1ff7a4:
    // 0x1ff7a4: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x1ff7a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x1ff7a8: 0xae020144  sw          $v0, 0x144($s0)
    ctx->pc = 0x1ff7a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5C0144u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C0144u, _value); } while (0);
    // 0x1ff7ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ff7acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff7b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ff7b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ff7b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF7B8u;
        // 0x1ff7bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF7C0u;
}

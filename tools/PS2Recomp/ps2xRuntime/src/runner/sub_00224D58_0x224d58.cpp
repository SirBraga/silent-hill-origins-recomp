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

// Function: sub_00224D58
// Address: 0x224d58 - 0x224dd8
void sub_00224D58_0x224d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224D58_0x224d58");
#endif

    switch (ctx->pc) {
        case 0x224d94u: goto label_224d94;
        default: break;
    }

    ctx->pc = 0x224d58u;

    // 0x224d58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x224d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x224d5c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x224d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x224d60: 0x8c633e80  lw          $v1, 0x3E80($v1)
    ctx->pc = 0x224d60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3E80u));
    // 0x224d64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x224d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x224d68: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x224d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x224d6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x224d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x224d70: 0x24510fc8  addiu       $s1, $v0, 0xFC8
    ctx->pc = 0x224d70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x224d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224d78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224d78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d7c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x224d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x224d80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x224d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x224d84: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x224D84u;
    {
        const bool branch_taken_0x224d84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x224d84) {
            ctx->pc = 0x224DA4u;
            goto label_224da4;
        }
    }
    ctx->pc = 0x224D8Cu;
    // 0x224d8c: 0xc093106  jal         func_24C418
    ctx->pc = 0x224D8Cu;
    SET_GPR_U32(ctx, 31, 0x224D94u);
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x224D8Cu, 0x224D94u)) {
        return;
    }
    ctx->pc = 0x224D94u;
label_224d94:
    // 0x224d94: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x224d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x224d98: 0x8c633e80  lw          $v1, 0x3E80($v1)
    ctx->pc = 0x224d98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3E80u));
    // 0x224d9c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x224d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x224da0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x224da0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_224da4:
    // 0x224da4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x224da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x224da8: 0x8c633e84  lw          $v1, 0x3E84($v1)
    ctx->pc = 0x224da8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3E84u));
    // 0x224dac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x224dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224db0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x224db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224db4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x224db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x224db8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x224db8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224dbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224dc0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x224dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x224dc4: 0xac233e84  sw          $v1, 0x3E84($at)
    ctx->pc = 0x224dc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3E84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3E84u, _value); } while (0);
    // 0x224dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x224DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DC8u;
        // 0x224dcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224DD0u;
    // 0x224dd0: 0xaf85c000  sw          $a1, -0x4000($gp)
    ctx->pc = 0x224dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950912), GPR_U32(ctx, 5));
    // 0x224dd4: 0x0  nop
    ctx->pc = 0x224dd4u;
    // NOP
    ctx->pc = 0x224dd8u;
}

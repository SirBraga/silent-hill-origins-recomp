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

// Function: sub_0024ECC8
// Address: 0x24ecc8 - 0x24ed20
void sub_0024ECC8_0x24ecc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024ECC8_0x24ecc8");
#endif

    switch (ctx->pc) {
        case 0x24ecf4u: goto label_24ecf4;
        default: break;
    }

    ctx->pc = 0x24ecc8u;

    // 0x24ecc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24ecc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24eccc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24ecccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24ecd0: 0xac253f80  sw          $a1, 0x3F80($at)
    ctx->pc = 0x24ecd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B3F80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F80u, _value); } while (0);
    // 0x24ecd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24ecd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24ecd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24ecd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ecdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24ecdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ece0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24ece0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24ece4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24ece4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ece8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24ece8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ecec: 0xc093a50  jal         func_24E940
    ctx->pc = 0x24ECECu;
    SET_GPR_U32(ctx, 31, 0x24ECF4u);
    ctx->pc = 0x24ECF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ECECu;
    // 0x24ecf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E940u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E940u, 0x24ECECu, 0x24ECF4u)) {
        return;
    }
    ctx->pc = 0x24ECF4u;
label_24ecf4:
    // 0x24ecf4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x24ecf8: 0x8c633f84  lw          $v1, 0x3F84($v1)
    ctx->pc = 0x24ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F84u));
    // 0x24ecfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24ecfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ed00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24ed00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ed04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24ed04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24ed08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24ed08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ed0c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24ed0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24ed10: 0xac233f84  sw          $v1, 0x3F84($at)
    ctx->pc = 0x24ed10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3F84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F84u, _value); } while (0);
    // 0x24ed14: 0x3e00008  jr          $ra
    ctx->pc = 0x24ED14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED14u;
        // 0x24ed18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24ED14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24ED1Cu;
    // 0x24ed1c: 0x0  nop
    ctx->pc = 0x24ed1cu;
    // NOP
    ctx->pc = 0x24ed20u;
}

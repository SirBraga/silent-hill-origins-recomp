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

// Function: sub_0025CF48
// Address: 0x25cf48 - 0x25cff0
void sub_0025CF48_0x25cf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CF48_0x25cf48");
#endif

    switch (ctx->pc) {
        case 0x25cf84u: goto label_25cf84;
        case 0x25cfb4u: goto label_25cfb4;
        default: break;
    }

    ctx->pc = 0x25cf48u;

    // 0x25cf48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25cf48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25cf4c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25cf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x25cf50: 0x8c633fe8  lw          $v1, 0x3FE8($v1)
    ctx->pc = 0x25cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FE8u));
    // 0x25cf54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25cf54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25cf58: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x25cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x25cf5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25cf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25cf60: 0x24500fc8  addiu       $s0, $v0, 0xFC8
    ctx->pc = 0x25cf60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x25cf64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25cf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25cf68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25cf68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf6c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x25cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25cf70: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x25cf70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25cf74: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25CF74u;
    {
        const bool branch_taken_0x25cf74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF74u;
        // 0x25cf78: 0x8f828f78  lw          $v0, -0x7088($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf74) {
            ctx->pc = 0x25CF9Cu;
            goto label_25cf9c;
        }
    }
    ctx->pc = 0x25CF7Cu;
    // 0x25cf7c: 0xc093106  jal         func_24C418
    ctx->pc = 0x25CF7Cu;
    SET_GPR_U32(ctx, 31, 0x25CF84u);
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x25CF7Cu, 0x25CF84u)) {
        return;
    }
    ctx->pc = 0x25CF84u;
label_25cf84:
    // 0x25cf84: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x25cf88: 0x8c633fe8  lw          $v1, 0x3FE8($v1)
    ctx->pc = 0x25cf88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FE8u));
    // 0x25cf8c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x25cf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25cf90: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x25cf90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x25cf94: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x25cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x25cf98: 0x8c423fe8  lw          $v0, 0x3FE8($v0)
    ctx->pc = 0x25cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3FE8u));
label_25cf9c:
    // 0x25cf9c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x25cf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x25cfa0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25cfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25cfa4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25CFA4u;
    {
        const bool branch_taken_0x25cfa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cfa4) {
            ctx->pc = 0x25CFC4u;
            goto label_25cfc4;
        }
    }
    ctx->pc = 0x25CFACu;
    // 0x25cfac: 0xc093106  jal         func_24C418
    ctx->pc = 0x25CFACu;
    SET_GPR_U32(ctx, 31, 0x25CFB4u);
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x25CFACu, 0x25CFB4u)) {
        return;
    }
    ctx->pc = 0x25CFB4u;
label_25cfb4:
    // 0x25cfb4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25cfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x25cfb8: 0x8c633fe8  lw          $v1, 0x3FE8($v1)
    ctx->pc = 0x25cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FE8u));
    // 0x25cfbc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x25cfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25cfc0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x25cfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_25cfc4:
    // 0x25cfc4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x25cfc8: 0x8c633fec  lw          $v1, 0x3FEC($v1)
    ctx->pc = 0x25cfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FECu));
    // 0x25cfcc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25cfccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cfd0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25cfd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cfd4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25cfd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25cfd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cfdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25cfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cfe0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x25cfe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x25cfe4: 0xac233fec  sw          $v1, 0x3FEC($at)
    ctx->pc = 0x25cfe4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3FECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FECu, _value); } while (0);
    // 0x25cfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x25CFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFE8u;
        // 0x25cfec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CFF0u;
}

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

// Function: sub_0010E3B0
// Address: 0x10e3b0 - 0x10e440
void sub_0010E3B0_0x10e3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E3B0_0x10e3b0");
#endif

    switch (ctx->pc) {
        case 0x10e3e4u: goto label_10e3e4;
        case 0x10e3f4u: goto label_10e3f4;
        default: break;
    }

    ctx->pc = 0x10e3b0u;

    // 0x10e3b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10e3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10e3b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10e3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x10e3b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10e3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10e3bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10e3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e3c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e3c4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10e3c8: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x10E3C8u;
    {
        const bool branch_taken_0x10e3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e3c8) {
            ctx->pc = 0x10E3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E3C8u;
            // 0x10e3cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E42Cu;
            goto label_10e42c;
        }
    }
    ctx->pc = 0x10E3D0u;
    // 0x10e3d0: 0x8e111244  lw          $s1, 0x1244($s0)
    ctx->pc = 0x10e3d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4676)));
    // 0x10e3d4: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10E3D4u;
    {
        const bool branch_taken_0x10e3d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3D4u;
        // 0x10e3d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e3d4) {
            ctx->pc = 0x10E3F4u;
            goto label_10e3f4;
        }
    }
    ctx->pc = 0x10E3DCu;
    // 0x10e3dc: 0xc0ba760  jal         func_2E9D80
    ctx->pc = 0x10E3DCu;
    SET_GPR_U32(ctx, 31, 0x10E3E4u);
    ctx->pc = 0x10E3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E3DCu;
    // 0x10e3e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9D80u, 0x10E3DCu, 0x10E3E4u)) {
        return;
    }
    ctx->pc = 0x10E3E4u;
label_10e3e4:
    // 0x10e3e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e3e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10e3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e3ec: 0xc0b69c2  jal         func_2DA708
    ctx->pc = 0x10E3ECu;
    SET_GPR_U32(ctx, 31, 0x10E3F4u);
    ctx->pc = 0x10E3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E3ECu;
    // 0x10e3f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DA708u, 0x10E3ECu, 0x10E3F4u)) {
        return;
    }
    ctx->pc = 0x10E3F4u;
label_10e3f4:
    // 0x10e3f4: 0xae001244  sw          $zero, 0x1244($s0)
    ctx->pc = 0x10e3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4676), GPR_U32(ctx, 0));
    // 0x10e3f8: 0x260212d0  addiu       $v0, $s0, 0x12D0
    ctx->pc = 0x10e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4816));
    // 0x10e3fc: 0xa20012d0  sb          $zero, 0x12D0($s0)
    ctx->pc = 0x10e3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4816), (uint8_t)GPR_U32(ctx, 0));
    // 0x10e400: 0x26031358  addiu       $v1, $s0, 0x1358
    ctx->pc = 0x10e400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4952));
    // 0x10e404: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x10e404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x10e408: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x10e408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x10e40c: 0xa2001358  sb          $zero, 0x1358($s0)
    ctx->pc = 0x10e40cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4952), (uint8_t)GPR_U32(ctx, 0));
    // 0x10e410: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x10e410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
    // 0x10e414: 0xac600080  sw          $zero, 0x80($v1)
    ctx->pc = 0x10e414u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 0));
    // 0x10e418: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x10e418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x10e41c: 0xae0013e0  sw          $zero, 0x13E0($s0)
    ctx->pc = 0x10e41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5088), GPR_U32(ctx, 0));
    // 0x10e420: 0xae0013e4  sw          $zero, 0x13E4($s0)
    ctx->pc = 0x10e420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5092), GPR_U32(ctx, 0));
    // 0x10e424: 0xae0013e8  sw          $zero, 0x13E8($s0)
    ctx->pc = 0x10e424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 0));
    // 0x10e428: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10e428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10e42c:
    // 0x10e42c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10e42cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e434: 0x3e00008  jr          $ra
    ctx->pc = 0x10E434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E434u;
        // 0x10e438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E43Cu;
    // 0x10e43c: 0x0  nop
    ctx->pc = 0x10e43cu;
    // NOP
    ctx->pc = 0x10e440u;
}

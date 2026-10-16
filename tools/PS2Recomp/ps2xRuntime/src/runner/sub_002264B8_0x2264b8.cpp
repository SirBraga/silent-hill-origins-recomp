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

// Function: sub_002264B8
// Address: 0x2264b8 - 0x226528
void sub_002264B8_0x2264b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002264B8_0x2264b8");
#endif

    ctx->pc = 0x2264b8u;

    // 0x2264b8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2264b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2264bc: 0x8cc700a0  lw          $a3, 0xA0($a2)
    ctx->pc = 0x2264bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x2264c0: 0x90e80003  lbu         $t0, 0x3($a3)
    ctx->pc = 0x2264c0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x2264c4: 0x31020003  andi        $v0, $t0, 0x3
    ctx->pc = 0x2264c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x2264c8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2264C8u;
    {
        const bool branch_taken_0x2264c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2264c8) {
            ctx->pc = 0x2264CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2264C8u;
            // 0x2264cc: 0x8cc500a0  lw          $a1, 0xA0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226508u;
            goto label_226508;
        }
    }
    ctx->pc = 0x2264D0u;
    // 0x2264d0: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x2264d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x2264d4: 0x8ca31084  lw          $v1, 0x1084($a1)
    ctx->pc = 0x2264d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x731084u));
    // 0x2264d8: 0x24a41084  addiu       $a0, $a1, 0x1084
    ctx->pc = 0x2264d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4228));
    // 0x2264dc: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x2264dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x2264e0: 0x8cc200a0  lw          $v0, 0xA0($a2)
    ctx->pc = 0x2264e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x2264e4: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x2264e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x2264e8: 0x8cc300a0  lw          $v1, 0xA0($a2)
    ctx->pc = 0x2264e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x2264ec: 0x8ca41084  lw          $a0, 0x1084($a1)
    ctx->pc = 0x2264ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x731084u));
    // 0x2264f0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2264f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2264f4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2264f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2264f8: 0x8cc200a0  lw          $v0, 0xA0($a2)
    ctx->pc = 0x2264f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x2264fc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2264fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x226500: 0xaca21084  sw          $v0, 0x1084($a1)
    ctx->pc = 0x226500u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x731084u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x731084u, _value); } while (0);
    // 0x226504: 0x8cc500a0  lw          $a1, 0xA0($a2)
    ctx->pc = 0x226504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
label_226508:
    // 0x226508: 0x35040003  ori         $a0, $t0, 0x3
    ctx->pc = 0x226508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)3);
    // 0x22650c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x22650cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226510: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x226510u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x226514: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x226514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x226518: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x226518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x22651c: 0x3e00008  jr          $ra
    ctx->pc = 0x22651Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22651Cu;
        // 0x226520: 0xa0c30003  sb          $v1, 0x3($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22651Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226524u;
    // 0x226524: 0x0  nop
    ctx->pc = 0x226524u;
    // NOP
    ctx->pc = 0x226528u;
}

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

// Function: sub_0021AA50
// Address: 0x21aa50 - 0x21aab8
void sub_0021AA50_0x21aa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AA50_0x21aa50");
#endif

    switch (ctx->pc) {
        case 0x21aa6cu: goto label_21aa6c;
        case 0x21aa88u: goto label_21aa88;
        case 0x21aaa4u: goto label_21aaa4;
        default: break;
    }

    ctx->pc = 0x21aa50u;

    // 0x21aa50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21aa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21aa54: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x21aa54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x21aa58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21aa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21aa5c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x21aa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21aa60: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21aa60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21aa64: 0xc0930c4  jal         func_24C310
    ctx->pc = 0x21AA64u;
    SET_GPR_U32(ctx, 31, 0x21AA6Cu);
    ctx->pc = 0x21AA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AA64u;
    // 0x21aa68: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C310u, 0x21AA64u, 0x21AA6Cu)) {
        return;
    }
    ctx->pc = 0x21AA6Cu;
label_21aa6c:
    // 0x21aa6c: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x21aa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x21aa70: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x21aa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21aa74: 0xac6202c0  sw          $v0, 0x2C0($v1)
    ctx->pc = 0x21aa74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5C02C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C02C0u, _value); } while (0);
    // 0x21aa78: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x21aa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x21aa7c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21aa7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21aa80: 0xc0930c4  jal         func_24C310
    ctx->pc = 0x21AA80u;
    SET_GPR_U32(ctx, 31, 0x21AA88u);
    ctx->pc = 0x21AA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AA80u;
    // 0x21aa84: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C310u, 0x21AA80u, 0x21AA88u)) {
        return;
    }
    ctx->pc = 0x21AA88u;
label_21aa88:
    // 0x21aa88: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x21aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x21aa8c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x21aa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x21aa90: 0xac6202bc  sw          $v0, 0x2BC($v1)
    ctx->pc = 0x21aa90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5C02BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C02BCu, _value); } while (0);
    // 0x21aa94: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x21aa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21aa98: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21aa98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21aa9c: 0xc0930c4  jal         func_24C310
    ctx->pc = 0x21AA9Cu;
    SET_GPR_U32(ctx, 31, 0x21AAA4u);
    ctx->pc = 0x21AAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AA9Cu;
    // 0x21aaa0: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C310u, 0x21AA9Cu, 0x21AAA4u)) {
        return;
    }
    ctx->pc = 0x21AAA4u;
label_21aaa4:
    // 0x21aaa4: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x21aaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x21aaa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21aaa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21aaac: 0xac6202c4  sw          $v0, 0x2C4($v1)
    ctx->pc = 0x21aaacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5C02C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C02C4u, _value); } while (0);
    // 0x21aab0: 0x3e00008  jr          $ra
    ctx->pc = 0x21AAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAB0u;
        // 0x21aab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AAB8u;
}

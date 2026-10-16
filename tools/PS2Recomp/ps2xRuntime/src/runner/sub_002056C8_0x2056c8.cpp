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

// Function: sub_002056C8
// Address: 0x2056c8 - 0x205728
void sub_002056C8_0x2056c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002056C8_0x2056c8");
#endif

    switch (ctx->pc) {
        case 0x205714u: goto label_205714;
        default: break;
    }

    ctx->pc = 0x2056c8u;

    // 0x2056c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2056c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2056cc: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x2056ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
    // 0x2056d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2056d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2056d4: 0x8cc22d08  lw          $v0, 0x2D08($a2)
    ctx->pc = 0x2056d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x702D08u));
    // 0x2056d8: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x2056d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x2056dc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2056DCu;
    {
        const bool branch_taken_0x2056dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2056E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056DCu;
        // 0x2056e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2056dc) {
            ctx->pc = 0x205714u;
            goto label_205714;
        }
    }
    ctx->pc = 0x2056E4u;
    // 0x2056e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2056e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2056e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2056e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2056ec: 0x26055570  addiu       $a1, $s0, 0x5570
    ctx->pc = 0x2056ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 21872));
    // 0x2056f0: 0xacc32d08  sw          $v1, 0x2D08($a2)
    ctx->pc = 0x2056f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 11528), GPR_U32(ctx, 3));
    // 0x2056f4: 0x24423ee8  addiu       $v0, $v0, 0x3EE8
    ctx->pc = 0x2056f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16104));
    // 0x2056f8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2056f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2056fc: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x2056fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x205700: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x205700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x205704: 0xae005570  sw          $zero, 0x5570($s0)
    ctx->pc = 0x205704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 21872), GPR_U32(ctx, 0));
    // 0x205708: 0x24846238  addiu       $a0, $a0, 0x6238
    ctx->pc = 0x205708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25144));
    // 0x20570c: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x20570Cu;
    SET_GPR_U32(ctx, 31, 0x205714u);
    ctx->pc = 0x205710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20570Cu;
    // 0x205710: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x20570Cu, 0x205714u)) {
        return;
    }
    ctx->pc = 0x205714u;
label_205714:
    // 0x205714: 0x26025570  addiu       $v0, $s0, 0x5570
    ctx->pc = 0x205714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 21872));
    // 0x205718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20571c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20571cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205720: 0x3e00008  jr          $ra
    ctx->pc = 0x205720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205720u;
        // 0x205724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205728u;
}

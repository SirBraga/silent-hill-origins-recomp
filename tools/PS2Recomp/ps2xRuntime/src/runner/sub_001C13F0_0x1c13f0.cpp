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

// Function: sub_001C13F0
// Address: 0x1c13f0 - 0x1c1480
void sub_001C13F0_0x1c13f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C13F0_0x1c13f0");
#endif

    switch (ctx->pc) {
        case 0x1c1428u: goto label_1c1428;
        case 0x1c1448u: goto label_1c1448;
        case 0x1c1468u: goto label_1c1468;
        default: break;
    }

    ctx->pc = 0x1c13f0u;

    // 0x1c13f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c13f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c13f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c13f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c13f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c13f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c13fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c13fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1404: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C1404u;
    {
        const bool branch_taken_0x1c1404 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1404u;
        // 0x1c1408: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1404) {
            ctx->pc = 0x1C1430u;
            goto label_1c1430;
        }
    }
    ctx->pc = 0x1C140Cu;
    // 0x1c140c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1c140cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1c1410: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1414: 0x8c444120  lw          $a0, 0x4120($v0)
    ctx->pc = 0x1c1414u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4120u));
    // 0x1c1418: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c1418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c141c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c141cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1420: 0xc07bf14  jal         func_1EFC50
    ctx->pc = 0x1C1420u;
    SET_GPR_U32(ctx, 31, 0x1C1428u);
    ctx->pc = 0x1C1424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1420u;
    // 0x1c1424: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFC50u, 0x1C1420u, 0x1C1428u)) {
        return;
    }
    ctx->pc = 0x1C1428u;
label_1c1428:
    // 0x1c1428: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1428u;
    {
        const bool branch_taken_0x1c1428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1428u;
        // 0x1c142c: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1428) {
            ctx->pc = 0x1C144Cu;
            goto label_1c144c;
        }
    }
    ctx->pc = 0x1C1430u;
label_1c1430:
    // 0x1c1430: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1c1430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1c1434: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1438: 0x8c444120  lw          $a0, 0x4120($v0)
    ctx->pc = 0x1c1438u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4120u));
    // 0x1c143c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c143cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1440: 0xc07bf5e  jal         func_1EFD78
    ctx->pc = 0x1C1440u;
    SET_GPR_U32(ctx, 31, 0x1C1448u);
    ctx->pc = 0x1C1444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1440u;
    // 0x1c1444: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFD78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFD78u, 0x1C1440u, 0x1C1448u)) {
        return;
    }
    ctx->pc = 0x1C1448u;
label_1c1448:
    // 0x1c1448: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c1448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c144c:
    // 0x1c144c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c144cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1450: 0xae110304  sw          $s1, 0x304($s0)
    ctx->pc = 0x1c1450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 17));
    // 0x1c1454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1458: 0xae020308  sw          $v0, 0x308($s0)
    ctx->pc = 0x1c1458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 776), GPR_U32(ctx, 2));
    // 0x1c145c: 0x248400f8  addiu       $a0, $a0, 0xF8
    ctx->pc = 0x1c145cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
    // 0x1c1460: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C1460u;
    SET_GPR_U32(ctx, 31, 0x1C1468u);
    ctx->pc = 0x1C1464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1460u;
    // 0x1c1464: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C1460u, 0x1C1468u)) {
        return;
    }
    ctx->pc = 0x1C1468u;
label_1c1468:
    // 0x1c1468: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c1468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c146c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c146cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1474: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1474u;
        // 0x1c1478: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C147Cu;
    // 0x1c147c: 0x0  nop
    ctx->pc = 0x1c147cu;
    // NOP
    ctx->pc = 0x1c1480u;
}

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

// Function: sub_002EE2F0
// Address: 0x2ee2f0 - 0x2ee380
void sub_002EE2F0_0x2ee2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE2F0_0x2ee2f0");
#endif

    switch (ctx->pc) {
        case 0x2ee338u: goto label_2ee338;
        case 0x2ee354u: goto label_2ee354;
        case 0x2ee368u: goto label_2ee368;
        default: break;
    }

    ctx->pc = 0x2ee2f0u;

    // 0x2ee2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ee2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ee2f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ee2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ee2f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ee2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ee2fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ee2fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ee300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ee304: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x2ee304u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x2ee308: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2ee308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ee30c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE30Cu;
    {
        const bool branch_taken_0x2ee30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE30Cu;
        // 0x2ee310: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee30c) {
            ctx->pc = 0x2EE320u;
            goto label_2ee320;
        }
    }
    ctx->pc = 0x2EE314u;
    // 0x2ee314: 0x306200fe  andi        $v0, $v1, 0xFE
    ctx->pc = 0x2ee314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x2ee318: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2ee318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee31c: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x2ee31cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
label_2ee320:
    // 0x2ee320: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x2ee320u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x2ee324: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2ee324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2ee328: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE328u;
    {
        const bool branch_taken_0x2ee328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee328) {
            ctx->pc = 0x2EE32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE328u;
            // 0x2ee32c: 0x92020009  lbu         $v0, 0x9($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE33Cu;
            goto label_2ee33c;
        }
    }
    ctx->pc = 0x2EE330u;
    // 0x2ee330: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2EE330u;
    SET_GPR_U32(ctx, 31, 0x2EE338u);
    ctx->pc = 0x2EE334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE330u;
    // 0x2ee334: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2EE330u, 0x2EE338u)) {
        return;
    }
    ctx->pc = 0x2EE338u;
label_2ee338:
    // 0x2ee338: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x2ee338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_2ee33c:
    // 0x2ee33c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ee33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ee340: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE340u;
    {
        const bool branch_taken_0x2ee340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE340u;
        // 0x2ee344: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee340) {
            ctx->pc = 0x2EE354u;
            goto label_2ee354;
        }
    }
    ctx->pc = 0x2EE348u;
    // 0x2ee348: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2ee348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2ee34c: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2EE34Cu;
    SET_GPR_U32(ctx, 31, 0x2EE354u);
    ctx->pc = 0x2EE350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE34Cu;
    // 0x2ee350: 0x2484f0a8  addiu       $a0, $a0, -0xF58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2EE34Cu, 0x2EE354u)) {
        return;
    }
    ctx->pc = 0x2EE354u;
label_2ee354:
    // 0x2ee354: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE354u;
    {
        const bool branch_taken_0x2ee354 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE354u;
        // 0x2ee358: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee354) {
            ctx->pc = 0x2EE368u;
            goto label_2ee368;
        }
    }
    ctx->pc = 0x2EE35Cu;
    // 0x2ee35c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2ee35cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2ee360: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2EE360u;
    SET_GPR_U32(ctx, 31, 0x2EE368u);
    ctx->pc = 0x2EE364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE360u;
    // 0x2ee364: 0x2484f0d0  addiu       $a0, $a0, -0xF30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2EE360u, 0x2EE368u)) {
        return;
    }
    ctx->pc = 0x2EE368u;
label_2ee368:
    // 0x2ee368: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ee368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ee36c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ee36cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ee370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee374: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE374u;
        // 0x2ee378: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE37Cu;
    // 0x2ee37c: 0x0  nop
    ctx->pc = 0x2ee37cu;
    // NOP
    ctx->pc = 0x2ee380u;
}

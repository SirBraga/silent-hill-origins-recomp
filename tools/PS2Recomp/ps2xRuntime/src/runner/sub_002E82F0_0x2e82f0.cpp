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

// Function: sub_002E82F0
// Address: 0x2e82f0 - 0x2e83a8
void sub_002E82F0_0x2e82f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E82F0_0x2e82f0");
#endif

    switch (ctx->pc) {
        case 0x2e8320u: goto label_2e8320;
        case 0x2e8348u: goto label_2e8348;
        case 0x2e8358u: goto label_2e8358;
        default: break;
    }

    ctx->pc = 0x2e82f0u;

    // 0x2e82f0: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x2e82f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x2e82f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e82f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e82f8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e82f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e82fc: 0x24a5001e  addiu       $a1, $a1, 0x1E
    ctx->pc = 0x2e82fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
    // 0x2e8300: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x2e8300u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x2e8304: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x2e8304u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x2e8308: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e8308u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e830c: 0x18a00024  blez        $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E830Cu;
    {
        const bool branch_taken_0x2e830c = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x2E8310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E830Cu;
        // 0x2e8310: 0x55840  sll         $t3, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e830c) {
            ctx->pc = 0x2E83A0u;
            goto label_2e83a0;
        }
    }
    ctx->pc = 0x2E8314u;
    // 0x2e8314: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x2e8314u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e8318: 0x90880000  lbu         $t0, 0x0($a0)
    ctx->pc = 0x2e8318u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e831c: 0x0  nop
    ctx->pc = 0x2e831cu;
    // NOP
label_2e8320:
    // 0x2e8320: 0x246a0001  addiu       $t2, $v1, 0x1
    ctx->pc = 0x2e8320u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e8324: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2e8324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2e8328: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e8328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e832c: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x2e832cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x2e8330: 0x310300f0  andi        $v1, $t0, 0xF0
    ctx->pc = 0x2e8330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)240);
    // 0x2e8334: 0x1821023  subu        $v0, $t4, $v0
    ctx->pc = 0x2e8334u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2e8338: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e8338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e833c: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x2e833cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e8340: 0xa0c80000  sb          $t0, 0x0($a2)
    ctx->pc = 0x2e8340u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x2e8344: 0x0  nop
    ctx->pc = 0x2e8344u;
    // NOP
label_2e8348:
    // 0x2e8348: 0x24e90001  addiu       $t1, $a3, 0x1
    ctx->pc = 0x2e8348u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e834c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e834cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e8350: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2e8350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e8354: 0x0  nop
    ctx->pc = 0x2e8354u;
    // NOP
label_2e8358:
    // 0x2e8358: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2e8358u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e835c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2e835cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2e8360: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e8360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e8364: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2e8364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2e8368: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x2e8368u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2e836c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e836cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e8370: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e8370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e8374: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x2e8374u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e8378: 0x4e1fff7  bgez        $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E8378u;
    {
        const bool branch_taken_0x2e8378 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x2E837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8378u;
        // 0x2e837c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8378) {
            ctx->pc = 0x2E8358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8358;
        }
    }
    ctx->pc = 0x2E8380u;
    // 0x2e8380: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x2e8380u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8384: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x2e8384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e8388: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2E8388u;
    {
        const bool branch_taken_0x2e8388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8388) {
            ctx->pc = 0x2E838Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8388u;
            // 0x2e838c: 0xa0c80000  sb          $t0, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8348;
        }
    }
    ctx->pc = 0x2E8390u;
    // 0x2e8390: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x2e8390u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8394: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x2e8394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2e8398: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2E8398u;
    {
        const bool branch_taken_0x2e8398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8398) {
            ctx->pc = 0x2E839Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8398u;
            // 0x2e839c: 0x90880000  lbu         $t0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8320;
        }
    }
    ctx->pc = 0x2E83A0u;
label_2e83a0:
    // 0x2e83a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E83A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E83A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83A0u;
        // 0x2e83a4: 0xb10c0  sll         $v0, $t3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E83A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E83A8u;
}

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

// Function: sub_002DC6F0
// Address: 0x2dc6f0 - 0x2dc770
void sub_002DC6F0_0x2dc6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC6F0_0x2dc6f0");
#endif

    switch (ctx->pc) {
        case 0x2dc710u: goto label_2dc710;
        case 0x2dc72cu: goto label_2dc72c;
        case 0x2dc73cu: goto label_2dc73c;
        case 0x2dc74cu: goto label_2dc74c;
        case 0x2dc754u: goto label_2dc754;
        default: break;
    }

    ctx->pc = 0x2dc6f0u;

    // 0x2dc6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dc6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dc6f4: 0x8f828bc8  lw          $v0, -0x7438($gp)
    ctx->pc = 0x2dc6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937544)));
    // 0x2dc6f8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DC6F8u;
    {
        const bool branch_taken_0x2dc6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC6F8u;
        // 0x2dc6fc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc6f8) {
            ctx->pc = 0x2DC75Cu;
            goto label_2dc75c;
        }
    }
    ctx->pc = 0x2DC700u;
    // 0x2dc700: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x2dc700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x2dc704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc708: 0xc089726  jal         func_225C98
    ctx->pc = 0x2DC708u;
    SET_GPR_U32(ctx, 31, 0x2DC710u);
    ctx->pc = 0x2DC70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC708u;
    // 0x2dc70c: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225C98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225C98u, 0x2DC708u, 0x2DC710u)) {
        return;
    }
    ctx->pc = 0x2DC710u;
label_2dc710:
    // 0x2dc710: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DC710u;
    {
        const bool branch_taken_0x2dc710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC710u;
        // 0x2dc714: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc710) {
            ctx->pc = 0x2DC720u;
            goto label_2dc720;
        }
    }
    ctx->pc = 0x2DC718u;
    // 0x2dc718: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2DC718u;
    {
        const bool branch_taken_0x2dc718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC718u;
        // 0x2dc71c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc718) {
            ctx->pc = 0x2DC760u;
            goto label_2dc760;
        }
    }
    ctx->pc = 0x2DC720u;
label_2dc720:
    // 0x2dc720: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dc720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc724: 0xc0896e0  jal         func_225B80
    ctx->pc = 0x2DC724u;
    SET_GPR_U32(ctx, 31, 0x2DC72Cu);
    ctx->pc = 0x2DC728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC724u;
    // 0x2dc728: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225B80u, 0x2DC724u, 0x2DC72Cu)) {
        return;
    }
    ctx->pc = 0x2DC72Cu;
label_2dc72c:
    // 0x2dc72c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DC72Cu;
    {
        const bool branch_taken_0x2dc72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc72c) {
            ctx->pc = 0x2DC74Cu;
            goto label_2dc74c;
        }
    }
    ctx->pc = 0x2DC734u;
    // 0x2dc734: 0xc08969c  jal         func_225A70
    ctx->pc = 0x2DC734u;
    SET_GPR_U32(ctx, 31, 0x2DC73Cu);
    ctx->pc = 0x225A70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225A70u, 0x2DC734u, 0x2DC73Cu)) {
        return;
    }
    ctx->pc = 0x2DC73Cu;
label_2dc73c:
    // 0x2dc73c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DC73Cu;
    {
        const bool branch_taken_0x2dc73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC73Cu;
        // 0x2dc740: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc73c) {
            ctx->pc = 0x2DC760u;
            goto label_2dc760;
        }
    }
    ctx->pc = 0x2DC744u;
    // 0x2dc744: 0xc0896c8  jal         func_225B20
    ctx->pc = 0x2DC744u;
    SET_GPR_U32(ctx, 31, 0x2DC74Cu);
    ctx->pc = 0x225B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225B20u, 0x2DC744u, 0x2DC74Cu)) {
        return;
    }
    ctx->pc = 0x2DC74Cu;
label_2dc74c:
    // 0x2dc74c: 0xc089714  jal         func_225C50
    ctx->pc = 0x2DC74Cu;
    SET_GPR_U32(ctx, 31, 0x2DC754u);
    ctx->pc = 0x225C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225C50u, 0x2DC74Cu, 0x2DC754u)) {
        return;
    }
    ctx->pc = 0x2DC754u;
label_2dc754:
    // 0x2dc754: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DC754u;
    {
        const bool branch_taken_0x2dc754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC754u;
        // 0x2dc758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc754) {
            ctx->pc = 0x2DC760u;
            goto label_2dc760;
        }
    }
    ctx->pc = 0x2DC75Cu;
label_2dc75c:
    // 0x2dc75c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dc75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dc760:
    // 0x2dc760: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dc760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc764: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC764u;
        // 0x2dc768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC76Cu;
    // 0x2dc76c: 0x0  nop
    ctx->pc = 0x2dc76cu;
    // NOP
    ctx->pc = 0x2dc770u;
}

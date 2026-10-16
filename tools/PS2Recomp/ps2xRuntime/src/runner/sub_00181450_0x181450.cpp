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

// Function: sub_00181450
// Address: 0x181450 - 0x1814c0
void sub_00181450_0x181450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181450_0x181450");
#endif

    switch (ctx->pc) {
        case 0x181468u: goto label_181468;
        case 0x1814a4u: goto label_1814a4;
        default: break;
    }

    ctx->pc = 0x181450u;

    // 0x181450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181454: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x181454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x181458: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x181458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18145c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18145cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181460: 0xc060698  jal         func_181A60
    ctx->pc = 0x181460u;
    SET_GPR_U32(ctx, 31, 0x181468u);
    ctx->pc = 0x181464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181460u;
    // 0x181464: 0x24047fff  addiu       $a0, $zero, 0x7FFF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181A60u, 0x181460u, 0x181468u)) {
        return;
    }
    ctx->pc = 0x181468u;
label_181468:
    // 0x181468: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x181468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x18146c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18146cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x181470: 0x8e080044  lw          $t0, 0x44($s0)
    ctx->pc = 0x181470u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x181474: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x181474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181478: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x181478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18147c: 0x246903ff  addiu       $t1, $v1, 0x3FF
    ctx->pc = 0x18147cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x181480: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x181480u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3));
    // 0x181484: 0x8e0a0058  lw          $t2, 0x58($s0)
    ctx->pc = 0x181484u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x181488: 0x94a83  sra         $t1, $t1, 10
    ctx->pc = 0x181488u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 10));
    // 0x18148c: 0x340580e0  ori         $a1, $zero, 0x80E0
    ctx->pc = 0x18148cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32992);
    // 0x181490: 0x94a80  sll         $t1, $t1, 10
    ctx->pc = 0x181490u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 10));
    // 0x181494: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x181494u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x181498: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x181498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18149c: 0xc0be22c  jal         func_2F88B0
    ctx->pc = 0x18149Cu;
    SET_GPR_U32(ctx, 31, 0x1814A4u);
    ctx->pc = 0x1814A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18149Cu;
    // 0x1814a0: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F88B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F88B0u, 0x18149Cu, 0x1814A4u)) {
        return;
    }
    ctx->pc = 0x1814A4u;
label_1814a4:
    // 0x1814a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1814a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1814a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1814a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1814ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1814acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1814b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1814b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1814b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1814B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1814B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814B4u;
        // 0x1814b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1814B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1814BCu;
    // 0x1814bc: 0x0  nop
    ctx->pc = 0x1814bcu;
    // NOP
    ctx->pc = 0x1814c0u;
}

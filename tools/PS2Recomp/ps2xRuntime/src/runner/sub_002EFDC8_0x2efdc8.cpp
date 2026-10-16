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

// Function: sub_002EFDC8
// Address: 0x2efdc8 - 0x2efe70
void sub_002EFDC8_0x2efdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFDC8_0x2efdc8");
#endif

    switch (ctx->pc) {
        case 0x2efddcu: goto label_2efddc;
        default: break;
    }

    ctx->pc = 0x2efdc8u;

    // 0x2efdc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2efdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2efdcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2efdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2efdd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2efdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2efdd4: 0xc0bbe00  jal         func_2EF800
    ctx->pc = 0x2EFDD4u;
    SET_GPR_U32(ctx, 31, 0x2EFDDCu);
    ctx->pc = 0x2EFDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFDD4u;
    // 0x2efdd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF800u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF800u, 0x2EFDD4u, 0x2EFDDCu)) {
        return;
    }
    ctx->pc = 0x2EFDDCu;
label_2efddc:
    // 0x2efddc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2EFDDCu;
    {
        const bool branch_taken_0x2efddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFDDCu;
        // 0x2efde0: 0x8f8590a8  lw          $a1, -0x6F58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efddc) {
            ctx->pc = 0x2EFE58u;
            goto label_2efe58;
        }
    }
    ctx->pc = 0x2EFDE4u;
    // 0x2efde4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2efde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2efde8: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x2efde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2efdec: 0x24a60008  addiu       $a2, $a1, 0x8
    ctx->pc = 0x2efdecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2efdf0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2efdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2efdf4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2efdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2efdf8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2efdf8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x2efdfc: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2efdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2efe00: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x2efe00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2efe04: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2efe04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2efe08: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x2efe08u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x2efe0c: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x2efe0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2efe10: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x2efe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2efe14: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x2efe14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2efe18: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2efe18u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x2efe1c: 0x8cc80014  lw          $t0, 0x14($a2)
    ctx->pc = 0x2efe1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2efe20: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x2efe20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2efe24: 0x8cc90018  lw          $t1, 0x18($a2)
    ctx->pc = 0x2efe24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2efe28: 0x67100b  movn        $v0, $v1, $a3
    ctx->pc = 0x2efe28u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x2efe2c: 0x8cca001c  lw          $t2, 0x1C($a2)
    ctx->pc = 0x2efe2cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2efe30: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x2efe30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2efe34: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x2efe34u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x2efe38: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2efe38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2efe3c: 0x88100b  movn        $v0, $a0, $t0
    ctx->pc = 0x2efe3cu;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x2efe40: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x2efe40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2efe44: 0x69100b  movn        $v0, $v1, $t1
    ctx->pc = 0x2efe44u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x2efe48: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2efe48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2efe4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EFE4Cu;
    {
        const bool branch_taken_0x2efe4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFE4Cu;
        // 0x2efe50: 0x8a100b  movn        $v0, $a0, $t2 (Delay Slot)
        if (GPR_U64(ctx, 10) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efe4c) {
            ctx->pc = 0x2EFE5Cu;
            goto label_2efe5c;
        }
    }
    ctx->pc = 0x2EFE54u;
    // 0x2efe54: 0x0  nop
    ctx->pc = 0x2efe54u;
    // NOP
label_2efe58:
    // 0x2efe58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2efe58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2efe5c:
    // 0x2efe5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2efe5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2efe60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2efe60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2efe64: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFE64u;
        // 0x2efe68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFE6Cu;
    // 0x2efe6c: 0x0  nop
    ctx->pc = 0x2efe6cu;
    // NOP
    ctx->pc = 0x2efe70u;
}

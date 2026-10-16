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

// Function: sub_0020DAC0
// Address: 0x20dac0 - 0x20db38
void sub_0020DAC0_0x20dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DAC0_0x20dac0");
#endif

    switch (ctx->pc) {
        case 0x20dac0u: goto label_20dac0;
        case 0x20dac4u: goto label_20dac4;
        case 0x20dac8u: goto label_20dac8;
        case 0x20daccu: goto label_20dacc;
        case 0x20dad0u: goto label_20dad0;
        case 0x20dad4u: goto label_20dad4;
        case 0x20dad8u: goto label_20dad8;
        case 0x20dadcu: goto label_20dadc;
        case 0x20dae0u: goto label_20dae0;
        case 0x20dae4u: goto label_20dae4;
        case 0x20dae8u: goto label_20dae8;
        case 0x20daecu: goto label_20daec;
        case 0x20daf0u: goto label_20daf0;
        case 0x20daf4u: goto label_20daf4;
        case 0x20daf8u: goto label_20daf8;
        case 0x20dafcu: goto label_20dafc;
        case 0x20db00u: goto label_20db00;
        case 0x20db04u: goto label_20db04;
        case 0x20db08u: goto label_20db08;
        case 0x20db0cu: goto label_20db0c;
        case 0x20db10u: goto label_20db10;
        case 0x20db14u: goto label_20db14;
        case 0x20db18u: goto label_20db18;
        case 0x20db1cu: goto label_20db1c;
        case 0x20db20u: goto label_20db20;
        case 0x20db24u: goto label_20db24;
        case 0x20db28u: goto label_20db28;
        case 0x20db2cu: goto label_20db2c;
        case 0x20db30u: goto label_20db30;
        case 0x20db34u: goto label_20db34;
        default: break;
    }

    ctx->pc = 0x20dac0u;

label_20dac0:
    // 0x20dac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20dac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20dac4:
    // 0x20dac4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20dac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20dac8:
    // 0x20dac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20dac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20dacc:
    // 0x20dacc: 0x4a1000f  bgez        $a1, . + 4 + (0xF << 2)
label_20dad0:
    if (ctx->pc == 0x20DAD0u) {
        ctx->pc = 0x20DAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DACCu;
        // 0x20dad0: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DAD4u;
        goto label_20dad4;
    }
    ctx->pc = 0x20DACCu;
    {
        const bool branch_taken_0x20dacc = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x20DAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DACCu;
        // 0x20dad0: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dacc) {
            ctx->pc = 0x20DB0Cu;
            goto label_20db0c;
        }
    }
    ctx->pc = 0x20DAD4u;
label_20dad4:
    // 0x20dad4: 0xde020070  ld          $v0, 0x70($s0)
    ctx->pc = 0x20dad4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 112)));
label_20dad8:
    // 0x20dad8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_20dadc:
    if (ctx->pc == 0x20DADCu) {
        ctx->pc = 0x20DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DAD8u;
        // 0x20dadc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DAE0u;
        goto label_20dae0;
    }
    ctx->pc = 0x20DAD8u;
    {
        const bool branch_taken_0x20dad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dad8) {
            ctx->pc = 0x20DADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DAD8u;
            // 0x20dadc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DAF4u;
            goto label_20daf4;
        }
    }
    ctx->pc = 0x20DAE0u;
label_20dae0:
    // 0x20dae0: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x20dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_20dae4:
    // 0x20dae4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x20dae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_20dae8:
    // 0x20dae8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_20daec:
    if (ctx->pc == 0x20DAECu) {
        ctx->pc = 0x20DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DAE8u;
        // 0x20daec: 0xde020070  ld          $v0, 0x70($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DAF0u;
        goto label_20daf0;
    }
    ctx->pc = 0x20DAE8u;
    {
        const bool branch_taken_0x20dae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20dae8) {
            ctx->pc = 0x20DAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DAE8u;
            // 0x20daec: 0xde020070  ld          $v0, 0x70($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DB00u;
            goto label_20db00;
        }
    }
    ctx->pc = 0x20DAF0u;
label_20daf0:
    // 0x20daf0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x20daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20daf4:
    // 0x20daf4: 0x40f809  jalr        $v0
label_20daf8:
    if (ctx->pc == 0x20DAF8u) {
        ctx->pc = 0x20DAFCu;
        goto label_20dafc;
    }
    ctx->pc = 0x20DAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20DAFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DAF4u, 0x20DAFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DAFCu;
label_20dafc:
    // 0x20dafc: 0xde020070  ld          $v0, 0x70($s0)
    ctx->pc = 0x20dafcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 112)));
label_20db00:
    // 0x20db00: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x20db00u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_20db04:
    // 0x20db04: 0x10000008  b           . + 4 + (0x8 << 2)
label_20db08:
    if (ctx->pc == 0x20DB08u) {
        ctx->pc = 0x20DB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB04u;
        // 0x20db08: 0xfe020070  sd          $v0, 0x70($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DB0Cu;
        goto label_20db0c;
    }
    ctx->pc = 0x20DB04u;
    {
        const bool branch_taken_0x20db04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB04u;
        // 0x20db08: 0xfe020070  sd          $v0, 0x70($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db04) {
            ctx->pc = 0x20DB28u;
            goto label_20db28;
        }
    }
    ctx->pc = 0x20DB0Cu;
label_20db0c:
    // 0x20db0c: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x20db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_20db10:
    // 0x20db10: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x20db10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_20db14:
    // 0x20db14: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_20db18:
    if (ctx->pc == 0x20DB18u) {
        ctx->pc = 0x20DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB14u;
        // 0x20db18: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DB1Cu;
        goto label_20db1c;
    }
    ctx->pc = 0x20DB14u;
    {
        const bool branch_taken_0x20db14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20db14) {
            ctx->pc = 0x20DB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DB14u;
            // 0x20db18: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DB2Cu;
            goto label_20db2c;
        }
    }
    ctx->pc = 0x20DB1Cu;
label_20db1c:
    // 0x20db1c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x20db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20db20:
    // 0x20db20: 0x40f809  jalr        $v0
label_20db24:
    if (ctx->pc == 0x20DB24u) {
        ctx->pc = 0x20DB28u;
        goto label_20db28;
    }
    ctx->pc = 0x20DB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20DB28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DB20u, 0x20DB28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DB28u;
label_20db28:
    // 0x20db28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20db28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20db2c:
    // 0x20db2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20db2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20db30:
    // 0x20db30: 0x3e00008  jr          $ra
label_20db34:
    if (ctx->pc == 0x20DB34u) {
        ctx->pc = 0x20DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB30u;
        // 0x20db34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DB38u;
        goto label_fallthrough_0x20db30;
    }
    ctx->pc = 0x20DB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB30u;
        // 0x20db34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20db30:
    ctx->pc = 0x20DB38u;
}

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

// Function: sub_00194FC8
// Address: 0x194fc8 - 0x195040
void sub_00194FC8_0x194fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194FC8_0x194fc8");
#endif

    switch (ctx->pc) {
        case 0x194fc8u: goto label_194fc8;
        case 0x194fccu: goto label_194fcc;
        case 0x194fd0u: goto label_194fd0;
        case 0x194fd4u: goto label_194fd4;
        case 0x194fd8u: goto label_194fd8;
        case 0x194fdcu: goto label_194fdc;
        case 0x194fe0u: goto label_194fe0;
        case 0x194fe4u: goto label_194fe4;
        case 0x194fe8u: goto label_194fe8;
        case 0x194fecu: goto label_194fec;
        case 0x194ff0u: goto label_194ff0;
        case 0x194ff4u: goto label_194ff4;
        case 0x194ff8u: goto label_194ff8;
        case 0x194ffcu: goto label_194ffc;
        case 0x195000u: goto label_195000;
        case 0x195004u: goto label_195004;
        case 0x195008u: goto label_195008;
        case 0x19500cu: goto label_19500c;
        case 0x195010u: goto label_195010;
        case 0x195014u: goto label_195014;
        case 0x195018u: goto label_195018;
        case 0x19501cu: goto label_19501c;
        case 0x195020u: goto label_195020;
        case 0x195024u: goto label_195024;
        case 0x195028u: goto label_195028;
        case 0x19502cu: goto label_19502c;
        case 0x195030u: goto label_195030;
        case 0x195034u: goto label_195034;
        case 0x195038u: goto label_195038;
        case 0x19503cu: goto label_19503c;
        default: break;
    }

    ctx->pc = 0x194fc8u;

label_194fc8:
    // 0x194fc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_194fcc:
    // 0x194fcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x194fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_194fd0:
    // 0x194fd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_194fd4:
    // 0x194fd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x194fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_194fd8:
    // 0x194fd8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x194fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_194fdc:
    // 0x194fdc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_194fe0:
    if (ctx->pc == 0x194FE0u) {
        ctx->pc = 0x194FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FDCu;
        // 0x194fe0: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194FE4u;
        goto label_194fe4;
    }
    ctx->pc = 0x194FDCu;
    {
        const bool branch_taken_0x194fdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x194FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FDCu;
        // 0x194fe0: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194fdc) {
            ctx->pc = 0x194FF0u;
            goto label_194ff0;
        }
    }
    ctx->pc = 0x194FE4u;
label_194fe4:
    // 0x194fe4: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x194fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_194fe8:
    // 0x194fe8: 0x40f809  jalr        $v0
label_194fec:
    if (ctx->pc == 0x194FECu) {
        ctx->pc = 0x194FF0u;
        goto label_194ff0;
    }
    ctx->pc = 0x194FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194FF0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194FE8u, 0x194FF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194FF0u;
label_194ff0:
    // 0x194ff0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x194ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_194ff4:
    // 0x194ff4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_194ff8:
    if (ctx->pc == 0x194FF8u) {
        ctx->pc = 0x194FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FF4u;
        // 0x194ff8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194FFCu;
        goto label_194ffc;
    }
    ctx->pc = 0x194FF4u;
    {
        const bool branch_taken_0x194ff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x194FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FF4u;
        // 0x194ff8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ff4) {
            ctx->pc = 0x195008u;
            goto label_195008;
        }
    }
    ctx->pc = 0x194FFCu;
label_194ffc:
    // 0x194ffc: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x194ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_195000:
    // 0x195000: 0x40f809  jalr        $v0
label_195004:
    if (ctx->pc == 0x195004u) {
        ctx->pc = 0x195008u;
        goto label_195008;
    }
    ctx->pc = 0x195000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195008u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195000u, 0x195008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195008u;
label_195008:
    // 0x195008: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x195008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_19500c:
    // 0x19500c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_195010:
    if (ctx->pc == 0x195010u) {
        ctx->pc = 0x195010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19500Cu;
        // 0x195010: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195014u;
        goto label_195014;
    }
    ctx->pc = 0x19500Cu;
    {
        const bool branch_taken_0x19500c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x195010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19500Cu;
        // 0x195010: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19500c) {
            ctx->pc = 0x195020u;
            goto label_195020;
        }
    }
    ctx->pc = 0x195014u;
label_195014:
    // 0x195014: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x195014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_195018:
    // 0x195018: 0x40f809  jalr        $v0
label_19501c:
    if (ctx->pc == 0x19501Cu) {
        ctx->pc = 0x195020u;
        goto label_195020;
    }
    ctx->pc = 0x195018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195020u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195018u, 0x195020u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195020u;
label_195020:
    // 0x195020: 0xc0808b8  jal         func_2022E0
label_195024:
    if (ctx->pc == 0x195024u) {
        ctx->pc = 0x195024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195020u;
        // 0x195024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195028u;
        goto label_195028;
    }
    ctx->pc = 0x195020u;
    SET_GPR_U32(ctx, 31, 0x195028u);
    ctx->pc = 0x195024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195020u;
    // 0x195024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x195020u, 0x195028u)) {
        return;
    }
    ctx->pc = 0x195028u;
label_195028:
    // 0x195028: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x195028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19502c:
    // 0x19502c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19502cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_195030:
    // 0x195030: 0x3e00008  jr          $ra
label_195034:
    if (ctx->pc == 0x195034u) {
        ctx->pc = 0x195034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195030u;
        // 0x195034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195038u;
        goto label_195038;
    }
    ctx->pc = 0x195030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195030u;
        // 0x195034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195038u;
label_195038:
    // 0x195038: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x195038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_19503c:
    // 0x19503c: 0x0  nop
    ctx->pc = 0x19503cu;
    // NOP
    ctx->pc = 0x195040u;
}

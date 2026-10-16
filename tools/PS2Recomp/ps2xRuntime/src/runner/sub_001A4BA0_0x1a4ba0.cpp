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

// Function: sub_001A4BA0
// Address: 0x1a4ba0 - 0x1a4c78
void sub_001A4BA0_0x1a4ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4BA0_0x1a4ba0");
#endif

    switch (ctx->pc) {
        case 0x1a4c00u: goto label_1a4c00;
        case 0x1a4c14u: goto label_1a4c14;
        case 0x1a4c24u: goto label_1a4c24;
        default: break;
    }

    ctx->pc = 0x1a4ba0u;

    // 0x1a4ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a4ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a4ba4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a4ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a4ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a4ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a4bac: 0x24d01510  addiu       $s0, $a2, 0x1510
    ctx->pc = 0x1a4bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 5392));
    // 0x1a4bb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4bb4: 0x8e021290  lw          $v0, 0x1290($s0)
    ctx->pc = 0x1a4bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4752)));
    // 0x1a4bb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4BB8u;
    {
        const bool branch_taken_0x1a4bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BB8u;
        // 0x1a4bbc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4bb8) {
            ctx->pc = 0x1A4BC8u;
            goto label_1a4bc8;
        }
    }
    ctx->pc = 0x1A4BC0u;
    // 0x1a4bc0: 0x8e021294  lw          $v0, 0x1294($s0)
    ctx->pc = 0x1a4bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4756)));
    // 0x1a4bc4: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1a4bc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a4bc8:
    // 0x1a4bc8: 0x50600024  beql        $v1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A4BC8u;
    {
        const bool branch_taken_0x1a4bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4bc8) {
            ctx->pc = 0x1A4BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4BC8u;
            // 0x1a4bcc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4C5Cu;
            goto label_1a4c5c;
        }
    }
    ctx->pc = 0x1A4BD0u;
    // 0x1a4bd0: 0xc6011348  lwc1        $f1, 0x1348($s0)
    ctx->pc = 0x1a4bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4bd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4bd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4bd8: 0x0  nop
    ctx->pc = 0x1a4bd8u;
    // NOP
    // 0x1a4bdc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a4bdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a4be0: 0x0  nop
    ctx->pc = 0x1a4be0u;
    // NOP
    // 0x1a4be4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4BE4u;
    {
        const bool branch_taken_0x1a4be4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BE4u;
        // 0x1a4be8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4be4) {
            ctx->pc = 0x1A4BF0u;
            goto label_1a4bf0;
        }
    }
    ctx->pc = 0x1A4BECu;
    // 0x1a4bec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4bf0:
    // 0x1a4bf0: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A4BF0u;
    {
        const bool branch_taken_0x1a4bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4bf0) {
            ctx->pc = 0x1A4BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4BF0u;
            // 0x1a4bf4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4C5Cu;
            goto label_1a4c5c;
        }
    }
    ctx->pc = 0x1A4BF8u;
    // 0x1a4bf8: 0xc06931e  jal         func_1A4C78
    ctx->pc = 0x1A4BF8u;
    SET_GPR_U32(ctx, 31, 0x1A4C00u);
    ctx->pc = 0x1A4BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4BF8u;
    // 0x1a4bfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4C78u, 0x1A4BF8u, 0x1A4C00u)) {
        return;
    }
    ctx->pc = 0x1A4C00u;
label_1a4c00:
    // 0x1a4c00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a4c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4c04: 0x52200015  beql        $s1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A4C04u;
    {
        const bool branch_taken_0x1a4c04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4c04) {
            ctx->pc = 0x1A4C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4C04u;
            // 0x1a4c08: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4C5Cu;
            goto label_1a4c5c;
        }
    }
    ctx->pc = 0x1A4C0Cu;
    // 0x1a4c0c: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1A4C0Cu;
    SET_GPR_U32(ctx, 31, 0x1A4C14u);
    ctx->pc = 0x1A4C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4C0Cu;
    // 0x1a4c10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1A4C0Cu, 0x1A4C14u)) {
        return;
    }
    ctx->pc = 0x1A4C14u;
label_1a4c14:
    // 0x1a4c14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a4c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4c1c: 0xc0685da  jal         func_1A1768
    ctx->pc = 0x1A4C1Cu;
    SET_GPR_U32(ctx, 31, 0x1A4C24u);
    ctx->pc = 0x1A4C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4C1Cu;
    // 0x1a4c20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A1768u, 0x1A4C1Cu, 0x1A4C24u)) {
        return;
    }
    ctx->pc = 0x1A4C24u;
label_1a4c24:
    // 0x1a4c24: 0x8e031350  lw          $v1, 0x1350($s0)
    ctx->pc = 0x1a4c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4944)));
    // 0x1a4c28: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A4C28u;
    {
        const bool branch_taken_0x1a4c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4c28) {
            ctx->pc = 0x1A4C44u;
            goto label_1a4c44;
        }
    }
    ctx->pc = 0x1A4C30u;
    // 0x1a4c30: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1a4c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1a4c34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a4c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a4c38: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4C38u;
    {
        const bool branch_taken_0x1a4c38 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1A4C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C38u;
        // 0x1a4c3c: 0xac620058  sw          $v0, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4c38) {
            ctx->pc = 0x1A4C44u;
            goto label_1a4c44;
        }
    }
    ctx->pc = 0x1A4C40u;
    // 0x1a4c40: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x1a4c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
label_1a4c44:
    // 0x1a4c44: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4C44u;
    {
        const bool branch_taken_0x1a4c44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C44u;
        // 0x1a4c48: 0xae111350  sw          $s1, 0x1350($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4944), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4c44) {
            ctx->pc = 0x1A4C58u;
            goto label_1a4c58;
        }
    }
    ctx->pc = 0x1A4C4Cu;
    // 0x1a4c4c: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x1a4c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1a4c50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a4c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a4c54: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x1a4c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
label_1a4c58:
    // 0x1a4c58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a4c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a4c5c:
    // 0x1a4c5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4c64: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C64u;
        // 0x1a4c68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4C6Cu;
    // 0x1a4c6c: 0x0  nop
    ctx->pc = 0x1a4c6cu;
    // NOP
    // 0x1a4c70: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a4c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a4c74: 0x0  nop
    ctx->pc = 0x1a4c74u;
    // NOP
    ctx->pc = 0x1a4c78u;
}

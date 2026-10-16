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

// Function: sub_00141ED0
// Address: 0x141ed0 - 0x141f80
void sub_00141ED0_0x141ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141ED0_0x141ed0");
#endif

    switch (ctx->pc) {
        case 0x141ed0u: goto label_141ed0;
        case 0x141ed4u: goto label_141ed4;
        case 0x141ed8u: goto label_141ed8;
        case 0x141edcu: goto label_141edc;
        case 0x141ee0u: goto label_141ee0;
        case 0x141ee4u: goto label_141ee4;
        case 0x141ee8u: goto label_141ee8;
        case 0x141eecu: goto label_141eec;
        case 0x141ef0u: goto label_141ef0;
        case 0x141ef4u: goto label_141ef4;
        case 0x141ef8u: goto label_141ef8;
        case 0x141efcu: goto label_141efc;
        case 0x141f00u: goto label_141f00;
        case 0x141f04u: goto label_141f04;
        case 0x141f08u: goto label_141f08;
        case 0x141f0cu: goto label_141f0c;
        case 0x141f10u: goto label_141f10;
        case 0x141f14u: goto label_141f14;
        case 0x141f18u: goto label_141f18;
        case 0x141f1cu: goto label_141f1c;
        case 0x141f20u: goto label_141f20;
        case 0x141f24u: goto label_141f24;
        case 0x141f28u: goto label_141f28;
        case 0x141f2cu: goto label_141f2c;
        case 0x141f30u: goto label_141f30;
        case 0x141f34u: goto label_141f34;
        case 0x141f38u: goto label_141f38;
        case 0x141f3cu: goto label_141f3c;
        case 0x141f40u: goto label_141f40;
        case 0x141f44u: goto label_141f44;
        case 0x141f48u: goto label_141f48;
        case 0x141f4cu: goto label_141f4c;
        case 0x141f50u: goto label_141f50;
        case 0x141f54u: goto label_141f54;
        case 0x141f58u: goto label_141f58;
        case 0x141f5cu: goto label_141f5c;
        case 0x141f60u: goto label_141f60;
        case 0x141f64u: goto label_141f64;
        case 0x141f68u: goto label_141f68;
        case 0x141f6cu: goto label_141f6c;
        case 0x141f70u: goto label_141f70;
        case 0x141f74u: goto label_141f74;
        case 0x141f78u: goto label_141f78;
        case 0x141f7cu: goto label_141f7c;
        default: break;
    }

    ctx->pc = 0x141ed0u;

label_141ed0:
    // 0x141ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x141ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_141ed4:
    // 0x141ed4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x141ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_141ed8:
    // 0x141ed8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x141ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_141edc:
    // 0x141edc: 0xc050078  jal         func_1401E0
label_141ee0:
    if (ctx->pc == 0x141EE0u) {
        ctx->pc = 0x141EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141EDCu;
        // 0x141ee0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141EE4u;
        goto label_141ee4;
    }
    ctx->pc = 0x141EDCu;
    SET_GPR_U32(ctx, 31, 0x141EE4u);
    ctx->pc = 0x141EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141EDCu;
    // 0x141ee0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1401E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1401E0u, 0x141EDCu, 0x141EE4u)) {
        return;
    }
    ctx->pc = 0x141EE4u;
label_141ee4:
    // 0x141ee4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x141ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_141ee8:
    // 0x141ee8: 0x8c438474  lw          $v1, -0x7B8C($v0)
    ctx->pc = 0x141ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935668)));
label_141eec:
    // 0x141eec: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_141ef0:
    if (ctx->pc == 0x141EF0u) {
        ctx->pc = 0x141EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141EECu;
        // 0x141ef0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141EF4u;
        goto label_141ef4;
    }
    ctx->pc = 0x141EECu;
    {
        const bool branch_taken_0x141eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x141EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141EECu;
        // 0x141ef0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141eec) {
            ctx->pc = 0x141F00u;
            goto label_141f00;
        }
    }
    ctx->pc = 0x141EF4u;
label_141ef4:
    // 0x141ef4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x141ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_141ef8:
    // 0x141ef8: 0x8c438478  lw          $v1, -0x7B88($v0)
    ctx->pc = 0x141ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935672)));
label_141efc:
    // 0x141efc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x141efcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_141f00:
    // 0x141f00: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_141f04:
    if (ctx->pc == 0x141F04u) {
        ctx->pc = 0x141F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F00u;
        // 0x141f04: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141F08u;
        goto label_141f08;
    }
    ctx->pc = 0x141F00u;
    {
        const bool branch_taken_0x141f00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x141F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F00u;
        // 0x141f04: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141f00) {
            ctx->pc = 0x141F2Cu;
            goto label_141f2c;
        }
    }
    ctx->pc = 0x141F08u;
label_141f08:
    // 0x141f08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141f0c:
    // 0x141f0c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x141f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_141f10:
    // 0x141f10: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x141f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
label_141f14:
    // 0x141f14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x141f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141f18:
    // 0x141f18: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x141f18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_141f1c:
    // 0x141f1c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x141f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_141f20:
    // 0x141f20: 0x40f809  jalr        $v0
label_141f24:
    if (ctx->pc == 0x141F24u) {
        ctx->pc = 0x141F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F20u;
        // 0x141f24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141F28u;
        goto label_141f28;
    }
    ctx->pc = 0x141F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x141F28u);
        ctx->pc = 0x141F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F20u;
        // 0x141f24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141F20u, 0x141F28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x141F28u;
label_141f28:
    // 0x141f28: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x141f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_141f2c:
    // 0x141f2c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x141f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_141f30:
    // 0x141f30: 0x8c4346f8  lw          $v1, 0x46F8($v0)
    ctx->pc = 0x141f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18168)));
label_141f34:
    // 0x141f34: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_141f38:
    if (ctx->pc == 0x141F38u) {
        ctx->pc = 0x141F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F34u;
        // 0x141f38: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141F3Cu;
        goto label_141f3c;
    }
    ctx->pc = 0x141F34u;
    {
        const bool branch_taken_0x141f34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x141F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F34u;
        // 0x141f38: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141f34) {
            ctx->pc = 0x141F70u;
            goto label_141f70;
        }
    }
    ctx->pc = 0x141F3Cu;
label_141f3c:
    // 0x141f3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x141f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_141f40:
    // 0x141f40: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x141f40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_141f44:
    // 0x141f44: 0x8c454708  lw          $a1, 0x4708($v0)
    ctx->pc = 0x141f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18184)));
label_141f48:
    // 0x141f48: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x141f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_141f4c:
    // 0x141f4c: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_141f50:
    if (ctx->pc == 0x141F50u) {
        ctx->pc = 0x141F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F4Cu;
        // 0x141f50: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141F54u;
        goto label_141f54;
    }
    ctx->pc = 0x141F4Cu;
    {
        const bool branch_taken_0x141f4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x141F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F4Cu;
        // 0x141f50: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141f4c) {
            ctx->pc = 0x141F74u;
            goto label_141f74;
        }
    }
    ctx->pc = 0x141F54u;
label_141f54:
    // 0x141f54: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x141f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_141f58:
    // 0x141f58: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_141f5c:
    if (ctx->pc == 0x141F5Cu) {
        ctx->pc = 0x141F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F58u;
        // 0x141f5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141F60u;
        goto label_141f60;
    }
    ctx->pc = 0x141F58u;
    {
        const bool branch_taken_0x141f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F58u;
        // 0x141f5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141f58) {
            ctx->pc = 0x141F74u;
            goto label_141f74;
        }
    }
    ctx->pc = 0x141F60u;
label_141f60:
    // 0x141f60: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x141f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_141f64:
    // 0x141f64: 0xc07fd18  jal         func_1FF460
label_141f68:
    if (ctx->pc == 0x141F68u) {
        ctx->pc = 0x141F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F64u;
        // 0x141f68: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141F6Cu;
        goto label_141f6c;
    }
    ctx->pc = 0x141F64u;
    SET_GPR_U32(ctx, 31, 0x141F6Cu);
    ctx->pc = 0x141F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141F64u;
    // 0x141f68: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x141F64u, 0x141F6Cu)) {
        return;
    }
    ctx->pc = 0x141F6Cu;
label_141f6c:
    // 0x141f6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x141f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_141f70:
    // 0x141f70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x141f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_141f74:
    // 0x141f74: 0x3e00008  jr          $ra
label_141f78:
    if (ctx->pc == 0x141F78u) {
        ctx->pc = 0x141F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F74u;
        // 0x141f78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141F7Cu;
        goto label_141f7c;
    }
    ctx->pc = 0x141F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F74u;
        // 0x141f78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141F7Cu;
label_141f7c:
    // 0x141f7c: 0x0  nop
    ctx->pc = 0x141f7cu;
    // NOP
    ctx->pc = 0x141f80u;
}

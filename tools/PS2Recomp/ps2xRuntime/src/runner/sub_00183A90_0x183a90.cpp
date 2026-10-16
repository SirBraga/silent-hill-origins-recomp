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

// Function: sub_00183A90
// Address: 0x183a90 - 0x183b88
void sub_00183A90_0x183a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183A90_0x183a90");
#endif

    switch (ctx->pc) {
        case 0x183ae0u: goto label_183ae0;
        case 0x183ae8u: goto label_183ae8;
        case 0x183af0u: goto label_183af0;
        case 0x183b00u: goto label_183b00;
        case 0x183b18u: goto label_183b18;
        case 0x183b20u: goto label_183b20;
        case 0x183b28u: goto label_183b28;
        case 0x183b60u: goto label_183b60;
        case 0x183b74u: goto label_183b74;
        default: break;
    }

    ctx->pc = 0x183a90u;

    // 0x183a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183a98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x183a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x183a9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x183a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x183aa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x183aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183aa4: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x183aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x183aa8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x183AA8u;
    {
        const bool branch_taken_0x183aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x183AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183AA8u;
        // 0x183aac: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183aa8) {
            ctx->pc = 0x183AD4u;
            goto label_183ad4;
        }
    }
    ctx->pc = 0x183AB0u;
    // 0x183ab0: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x183AB0u;
    {
        const bool branch_taken_0x183ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x183ab0) {
            ctx->pc = 0x183AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183AB0u;
            // 0x183ab4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183B78u;
            goto label_183b78;
        }
    }
    ctx->pc = 0x183AB8u;
    // 0x183ab8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x183ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183abc: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x183ABCu;
    {
        const bool branch_taken_0x183abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x183AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183ABCu;
        // 0x183ac0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183abc) {
            ctx->pc = 0x183B0Cu;
            goto label_183b0c;
        }
    }
    ctx->pc = 0x183AC4u;
    // 0x183ac4: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x183AC4u;
    {
        const bool branch_taken_0x183ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x183AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183AC4u;
        // 0x183ac8: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ac4) {
            ctx->pc = 0x183B30u;
            goto label_183b30;
        }
    }
    ctx->pc = 0x183ACCu;
    // 0x183acc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x183ACCu;
    {
        const bool branch_taken_0x183acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183ACCu;
        // 0x183ad0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183acc) {
            ctx->pc = 0x183B78u;
            goto label_183b78;
        }
    }
    ctx->pc = 0x183AD4u;
label_183ad4:
    // 0x183ad4: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x183ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x183ad8: 0xc09d64c  jal         func_275930
    ctx->pc = 0x183AD8u;
    SET_GPR_U32(ctx, 31, 0x183AE0u);
    ctx->pc = 0x183ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183AD8u;
    // 0x183adc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275930u, 0x183AD8u, 0x183AE0u)) {
        return;
    }
    ctx->pc = 0x183AE0u;
label_183ae0:
    // 0x183ae0: 0xc0942f2  jal         func_250BC8
    ctx->pc = 0x183AE0u;
    SET_GPR_U32(ctx, 31, 0x183AE8u);
    ctx->pc = 0x183AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183AE0u;
    // 0x183ae4: 0x8e0400a0  lw          $a0, 0xA0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250BC8u, 0x183AE0u, 0x183AE8u)) {
        return;
    }
    ctx->pc = 0x183AE8u;
label_183ae8:
    // 0x183ae8: 0xc060fc8  jal         func_183F20
    ctx->pc = 0x183AE8u;
    SET_GPR_U32(ctx, 31, 0x183AF0u);
    ctx->pc = 0x183AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183AE8u;
    // 0x183aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183F20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x183F20u, 0x183AE8u, 0x183AF0u)) {
        return;
    }
    ctx->pc = 0x183AF0u;
label_183af0:
    // 0x183af0: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x183af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x183af4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183af8: 0xc044f40  jal         func_113D00
    ctx->pc = 0x183AF8u;
    SET_GPR_U32(ctx, 31, 0x183B00u);
    ctx->pc = 0x183AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183AF8u;
    // 0x183afc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113D00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x113D00u, 0x183AF8u, 0x183B00u)) {
        return;
    }
    ctx->pc = 0x183B00u;
label_183b00:
    // 0x183b00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x183b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183b04: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x183B04u;
    {
        const bool branch_taken_0x183b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B04u;
        // 0x183b08: 0xae02009c  sw          $v0, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b04) {
            ctx->pc = 0x183B74u;
            goto label_183b74;
        }
    }
    ctx->pc = 0x183B0Cu;
label_183b0c:
    // 0x183b0c: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x183b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x183b10: 0xc09d64c  jal         func_275930
    ctx->pc = 0x183B10u;
    SET_GPR_U32(ctx, 31, 0x183B18u);
    ctx->pc = 0x183B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183B10u;
    // 0x183b14: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275930u, 0x183B10u, 0x183B18u)) {
        return;
    }
    ctx->pc = 0x183B18u;
label_183b18:
    // 0x183b18: 0xc0942f2  jal         func_250BC8
    ctx->pc = 0x183B18u;
    SET_GPR_U32(ctx, 31, 0x183B20u);
    ctx->pc = 0x183B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183B18u;
    // 0x183b1c: 0x8e0400a0  lw          $a0, 0xA0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250BC8u, 0x183B18u, 0x183B20u)) {
        return;
    }
    ctx->pc = 0x183B20u;
label_183b20:
    // 0x183b20: 0xc060fc8  jal         func_183F20
    ctx->pc = 0x183B20u;
    SET_GPR_U32(ctx, 31, 0x183B28u);
    ctx->pc = 0x183B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183B20u;
    // 0x183b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183F20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x183F20u, 0x183B20u, 0x183B28u)) {
        return;
    }
    ctx->pc = 0x183B28u;
label_183b28:
    // 0x183b28: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x183B28u;
    {
        const bool branch_taken_0x183b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B28u;
        // 0x183b2c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b28) {
            ctx->pc = 0x183B78u;
            goto label_183b78;
        }
    }
    ctx->pc = 0x183B30u;
label_183b30:
    // 0x183b30: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x183b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x183b34: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x183b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x183b38: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x183b38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x183b3c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x183B3Cu;
    {
        const bool branch_taken_0x183b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x183B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B3Cu;
        // 0x183b40: 0x2605008c  addiu       $a1, $s0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b3c) {
            ctx->pc = 0x183B60u;
            goto label_183b60;
        }
    }
    ctx->pc = 0x183B44u;
    // 0x183b44: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x183b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x183b48: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x183B48u;
    {
        const bool branch_taken_0x183b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183b48) {
            ctx->pc = 0x183B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183B48u;
            // 0x183b4c: 0x3c050070  lui         $a1, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183B64u;
            goto label_183b64;
        }
    }
    ctx->pc = 0x183B50u;
    // 0x183b50: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x183b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x183b54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x183b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b58: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x183B58u;
    SET_GPR_U32(ctx, 31, 0x183B60u);
    ctx->pc = 0x183B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183B58u;
    // 0x183b5c: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x183B58u, 0x183B60u)) {
        return;
    }
    ctx->pc = 0x183B60u;
label_183b60:
    // 0x183b60: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x183b60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_183b64:
    // 0x183b64: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x183b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x183b68: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x183b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x183b6c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x183B6Cu;
    SET_GPR_U32(ctx, 31, 0x183B74u);
    ctx->pc = 0x183B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183B6Cu;
    // 0x183b70: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x183B6Cu, 0x183B74u)) {
        return;
    }
    ctx->pc = 0x183B74u;
label_183b74:
    // 0x183b74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x183b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_183b78:
    // 0x183b78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x183b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x183B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B7Cu;
        // 0x183b80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183B84u;
    // 0x183b84: 0x0  nop
    ctx->pc = 0x183b84u;
    // NOP
    ctx->pc = 0x183b88u;
}

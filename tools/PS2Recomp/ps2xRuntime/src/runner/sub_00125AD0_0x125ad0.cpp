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

// Function: sub_00125AD0
// Address: 0x125ad0 - 0x125be0
void sub_00125AD0_0x125ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125AD0_0x125ad0");
#endif

    switch (ctx->pc) {
        case 0x125b0cu: goto label_125b0c;
        case 0x125b1cu: goto label_125b1c;
        case 0x125b30u: goto label_125b30;
        case 0x125b40u: goto label_125b40;
        case 0x125b60u: goto label_125b60;
        case 0x125b78u: goto label_125b78;
        case 0x125b80u: goto label_125b80;
        case 0x125b8cu: goto label_125b8c;
        case 0x125b9cu: goto label_125b9c;
        default: break;
    }

    ctx->pc = 0x125ad0u;

    // 0x125ad0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x125ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x125ad4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x125ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x125ad8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x125ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x125adc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x125adcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ae0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x125ae0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ae4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x125ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x125ae8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x125ae8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125aec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x125aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125af0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x125af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x125af4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x125af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x125af8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x125af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x125afc: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x125afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x125b00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x125b04: 0xc0c49b7  jal         func_3126DC
    ctx->pc = 0x125B04u;
    SET_GPR_U32(ctx, 31, 0x125B0Cu);
    ctx->pc = 0x125B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125B04u;
    // 0x125b08: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3126DCu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3126DCu, 0x125B04u, 0x125B0Cu)) {
        return;
    }
    ctx->pc = 0x125B0Cu;
label_125b0c:
    // 0x125b0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x125B0Cu;
    {
        const bool branch_taken_0x125b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B0Cu;
        // 0x125b10: 0x538823  subu        $s1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b0c) {
            ctx->pc = 0x125B20u;
            goto label_125b20;
        }
    }
    ctx->pc = 0x125B14u;
    // 0x125b14: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x125B14u;
    SET_GPR_U32(ctx, 31, 0x125B1Cu);
    ctx->pc = 0x125B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125B14u;
    // 0x125b18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x125B14u, 0x125B1Cu)) {
        return;
    }
    ctx->pc = 0x125B1Cu;
label_125b1c:
    // 0x125b1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x125b1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125b20:
    // 0x125b20: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x125B20u;
    {
        const bool branch_taken_0x125b20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x125B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B20u;
        // 0x125b24: 0x2a230021  slti        $v1, $s1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b20) {
            ctx->pc = 0x125B48u;
            goto label_125b48;
        }
    }
    ctx->pc = 0x125B28u;
    // 0x125b28: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x125B28u;
    {
        const bool branch_taken_0x125b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B28u;
        // 0x125b2c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b28) {
            ctx->pc = 0x125BB8u;
            goto label_125bb8;
        }
    }
    ctx->pc = 0x125B30u;
label_125b30:
    // 0x125b30: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x125b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125b34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x125b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125b38: 0xc040d20  jal         func_103480
    ctx->pc = 0x125B38u;
    SET_GPR_U32(ctx, 31, 0x125B40u);
    ctx->pc = 0x125B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125B38u;
    // 0x125b3c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x103480u, 0x125B38u, 0x125B40u)) {
        return;
    }
    ctx->pc = 0x125B40u;
label_125b40:
    // 0x125b40: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x125B40u;
    {
        const bool branch_taken_0x125b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B40u;
        // 0x125b44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b40) {
            ctx->pc = 0x125BB8u;
            goto label_125bb8;
        }
    }
    ctx->pc = 0x125B48u;
label_125b48:
    // 0x125b48: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x125b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x125b4c: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x125b4cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2));
    // 0x125b50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x125b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125b54: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x125b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125b58: 0xc040d0c  jal         func_103430
    ctx->pc = 0x125B58u;
    SET_GPR_U32(ctx, 31, 0x125B60u);
    ctx->pc = 0x125B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125B58u;
    // 0x125b5c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103430u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x103430u, 0x125B58u, 0x125B60u)) {
        return;
    }
    ctx->pc = 0x125B60u;
label_125b60:
    // 0x125b60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x125b60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125b64: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x125B64u;
    {
        const bool branch_taken_0x125b64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B64u;
        // 0x125b68: 0x3c160034  lui         $s6, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b64) {
            ctx->pc = 0x125BB4u;
            goto label_125bb4;
        }
    }
    ctx->pc = 0x125B6Cu;
    // 0x125b6c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x125b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125b70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x125b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125b74: 0x0  nop
    ctx->pc = 0x125b74u;
    // NOP
label_125b78:
    // 0x125b78: 0xc040d12  jal         func_103448
    ctx->pc = 0x125B78u;
    SET_GPR_U32(ctx, 31, 0x125B80u);
    ctx->pc = 0x125B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125B78u;
    // 0x125b7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x103448u, 0x125B78u, 0x125B80u)) {
        return;
    }
    ctx->pc = 0x125B80u;
label_125b80:
    // 0x125b80: 0x8ec48668  lw          $a0, -0x7998($s6)
    ctx->pc = 0x125b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936168)));
    // 0x125b84: 0xc0595ec  jal         func_1657B0
    ctx->pc = 0x125B84u;
    SET_GPR_U32(ctx, 31, 0x125B8Cu);
    ctx->pc = 0x125B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125B84u;
    // 0x125b88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1657B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1657B0u, 0x125B84u, 0x125B8Cu)) {
        return;
    }
    ctx->pc = 0x125B8Cu;
label_125b8c:
    // 0x125b8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x125b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125b90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x125b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125b94: 0xc0c4b78  jal         func_312DE0
    ctx->pc = 0x125B94u;
    SET_GPR_U32(ctx, 31, 0x125B9Cu);
    ctx->pc = 0x125B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125B94u;
    // 0x125b98: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312DE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312DE0u, 0x125B94u, 0x125B9Cu)) {
        return;
    }
    ctx->pc = 0x125B9Cu;
label_125b9c:
    // 0x125b9c: 0x1040ffe4  beqz        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x125B9Cu;
    {
        const bool branch_taken_0x125b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B9Cu;
        // 0x125ba0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b9c) {
            ctx->pc = 0x125B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125b30;
        }
    }
    ctx->pc = 0x125BA4u;
    // 0x125ba4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x125ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x125ba8: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x125ba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x125bac: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x125BACu;
    {
        const bool branch_taken_0x125bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125bac) {
            ctx->pc = 0x125BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125BACu;
            // 0x125bb0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125b78;
        }
    }
    ctx->pc = 0x125BB4u;
label_125bb4:
    // 0x125bb4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x125bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_125bb8:
    // 0x125bb8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x125bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x125bbc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x125bbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x125bc0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x125bc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x125bc4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x125bc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125bc8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x125bc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125bcc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x125bccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125bd0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x125bd0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125bd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x125BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BD8u;
        // 0x125bdc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125BE0u;
}

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

// Function: sub_0028BB50
// Address: 0x28bb50 - 0x28bca8
void sub_0028BB50_0x28bb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BB50_0x28bb50");
#endif

    switch (ctx->pc) {
        case 0x28bb70u: goto label_28bb70;
        case 0x28bb88u: goto label_28bb88;
        case 0x28bb90u: goto label_28bb90;
        case 0x28bba0u: goto label_28bba0;
        case 0x28bc20u: goto label_28bc20;
        case 0x28bc70u: goto label_28bc70;
        default: break;
    }

    ctx->pc = 0x28bb50u;

    // 0x28bb50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28bb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28bb54: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x28bb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x28bb58: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28bb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28bb5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28bb5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb60: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28bb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x28bb64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28bb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28bb68: 0xc0a2504  jal         func_289410
    ctx->pc = 0x28BB68u;
    SET_GPR_U32(ctx, 31, 0x28BB70u);
    ctx->pc = 0x28BB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BB68u;
    // 0x28bb6c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289410u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289410u, 0x28BB68u, 0x28BB70u)) {
        return;
    }
    ctx->pc = 0x28BB70u;
label_28bb70:
    // 0x28bb70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28BB70u;
    {
        const bool branch_taken_0x28bb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB70u;
        // 0x28bb74: 0x3c050029  lui         $a1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bb70) {
            ctx->pc = 0x28BB98u;
            goto label_28bb98;
        }
    }
    ctx->pc = 0x28BB78u;
    // 0x28bb78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28bb78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb7c: 0x24a5bb50  addiu       $a1, $a1, -0x44B0
    ctx->pc = 0x28bb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949712));
    // 0x28bb80: 0xc0a2db6  jal         func_28B6D8
    ctx->pc = 0x28BB80u;
    SET_GPR_U32(ctx, 31, 0x28BB88u);
    ctx->pc = 0x28BB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BB80u;
    // 0x28bb84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B6D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28B6D8u, 0x28BB80u, 0x28BB88u)) {
        return;
    }
    ctx->pc = 0x28BB88u;
label_28bb88:
    // 0x28bb88: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x28BB88u;
    {
        const bool branch_taken_0x28bb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB88u;
        // 0x28bb8c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bb88) {
            ctx->pc = 0x28BC90u;
            goto label_28bc90;
        }
    }
    ctx->pc = 0x28BB90u;
label_28bb90:
    // 0x28bb90: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x28BB90u;
    {
        const bool branch_taken_0x28bb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB90u;
        // 0x28bb94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bb90) {
            ctx->pc = 0x28BC60u;
            goto label_28bc60;
        }
    }
    ctx->pc = 0x28BB98u;
label_28bb98:
    // 0x28bb98: 0xc0a2508  jal         func_289420
    ctx->pc = 0x28BB98u;
    SET_GPR_U32(ctx, 31, 0x28BBA0u);
    ctx->pc = 0x28BB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BB98u;
    // 0x28bb9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289420u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289420u, 0x28BB98u, 0x28BBA0u)) {
        return;
    }
    ctx->pc = 0x28BBA0u;
label_28bba0:
    // 0x28bba0: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x28BBA0u;
    {
        const bool branch_taken_0x28bba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BBA0u;
        // 0x28bba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bba0) {
            ctx->pc = 0x28BC8Cu;
            goto label_28bc8c;
        }
    }
    ctx->pc = 0x28BBA8u;
    // 0x28bba8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28bbac: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x28BBACu;
    {
        const bool branch_taken_0x28bbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BBACu;
        // 0x28bbb0: 0x8e5000b0  lw          $s0, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bbac) {
            ctx->pc = 0x28BC5Cu;
            goto label_28bc5c;
        }
    }
    ctx->pc = 0x28BBB4u;
    // 0x28bbb4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x28bbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28bbb8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28bbb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bbbc: 0x30e40003  andi        $a0, $a3, 0x3
    ctx->pc = 0x28bbbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x28bbc0: 0x18e00011  blez        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x28BBC0u;
    {
        const bool branch_taken_0x28bbc0 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x28BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BBC0u;
        // 0x28bbc4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bbc0) {
            ctx->pc = 0x28BC08u;
            goto label_28bc08;
        }
    }
    ctx->pc = 0x28BBC8u;
    // 0x28bbc8: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x28BBC8u;
    {
        const bool branch_taken_0x28bbc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bbc8) {
            ctx->pc = 0x28BBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BBC8u;
            // 0x28bbcc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BC24u;
            goto label_28bc24;
        }
    }
    ctx->pc = 0x28BBD0u;
    // 0x28bbd0: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x28bbd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28bbd4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x28BBD4u;
    {
        const bool branch_taken_0x28bbd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28bbd4) {
            ctx->pc = 0x28BBD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BBD4u;
            // 0x28bbd8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BC0Cu;
            goto label_28bc0c;
        }
    }
    ctx->pc = 0x28BBDCu;
    // 0x28bbdc: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x28bbdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x28bbe0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28BBE0u;
    {
        const bool branch_taken_0x28bbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28bbe0) {
            ctx->pc = 0x28BBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BBE0u;
            // 0x28bbe4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BBFCu;
            goto label_28bbfc;
        }
    }
    ctx->pc = 0x28BBE8u;
    // 0x28bbe8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x28bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28bbec: 0x1050ffe8  beq         $v0, $s0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x28BBECu;
    {
        const bool branch_taken_0x28bbec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x28BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BBECu;
        // 0x28bbf0: 0x24c30004  addiu       $v1, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bbec) {
            ctx->pc = 0x28BB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28bb90;
        }
    }
    ctx->pc = 0x28BBF4u;
    // 0x28bbf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28bbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bbf8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28bbfc:
    // 0x28bbfc: 0x1050ffe4  beq         $v0, $s0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x28BBFCu;
    {
        const bool branch_taken_0x28bbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x28BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BBFCu;
        // 0x28bc00: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bbfc) {
            ctx->pc = 0x28BB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28bb90;
        }
    }
    ctx->pc = 0x28BC04u;
    // 0x28bc04: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28bc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_28bc08:
    // 0x28bc08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28bc0c:
    // 0x28bc0c: 0x1050ffe0  beq         $v0, $s0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x28BC0Cu;
    {
        const bool branch_taken_0x28bc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x28BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC0Cu;
        // 0x28bc10: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc0c) {
            ctx->pc = 0x28BB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28bb90;
        }
    }
    ctx->pc = 0x28BC14u;
    // 0x28bc14: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x28bc14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x28bc18: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28BC18u;
    {
        const bool branch_taken_0x28bc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC18u;
        // 0x28bc1c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc18) {
            ctx->pc = 0x28BC5Cu;
            goto label_28bc5c;
        }
    }
    ctx->pc = 0x28BC20u;
label_28bc20:
    // 0x28bc20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28bc24:
    // 0x28bc24: 0x1050000e  beq         $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x28BC24u;
    {
        const bool branch_taken_0x28bc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x28BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC24u;
        // 0x28bc28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc24) {
            ctx->pc = 0x28BC60u;
            goto label_28bc60;
        }
    }
    ctx->pc = 0x28BC2Cu;
    // 0x28bc2c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x28bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28bc30: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x28BC30u;
    {
        const bool branch_taken_0x28bc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x28BC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC30u;
        // 0x28bc34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc30) {
            ctx->pc = 0x28BC60u;
            goto label_28bc60;
        }
    }
    ctx->pc = 0x28BC38u;
    // 0x28bc38: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x28bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x28bc3c: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28BC3Cu;
    {
        const bool branch_taken_0x28bc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x28BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC3Cu;
        // 0x28bc40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc3c) {
            ctx->pc = 0x28BC60u;
            goto label_28bc60;
        }
    }
    ctx->pc = 0x28BC44u;
    // 0x28bc44: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x28bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x28bc48: 0x1050ffd1  beq         $v0, $s0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x28BC48u;
    {
        const bool branch_taken_0x28bc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x28BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC48u;
        // 0x28bc4c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc48) {
            ctx->pc = 0x28BB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28bb90;
        }
    }
    ctx->pc = 0x28BC50u;
    // 0x28bc50: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x28bc50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x28bc54: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x28BC54u;
    {
        const bool branch_taken_0x28bc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC54u;
        // 0x28bc58: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc54) {
            ctx->pc = 0x28BC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28bc20;
        }
    }
    ctx->pc = 0x28BC5Cu;
label_28bc5c:
    // 0x28bc5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28bc5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bc60:
    // 0x28bc60: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28BC60u;
    {
        const bool branch_taken_0x28bc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC60u;
        // 0x28bc64: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc60) {
            ctx->pc = 0x28BC90u;
            goto label_28bc90;
        }
    }
    ctx->pc = 0x28BC68u;
    // 0x28bc68: 0xc0a34a2  jal         func_28D288
    ctx->pc = 0x28BC68u;
    SET_GPR_U32(ctx, 31, 0x28BC70u);
    ctx->pc = 0x28BC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC68u;
    // 0x28bc6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D288u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28D288u, 0x28BC68u, 0x28BC70u)) {
        return;
    }
    ctx->pc = 0x28BC70u;
label_28bc70:
    // 0x28bc70: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x28bc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28bc74: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28bc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28bc78: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x28bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28bc7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x28bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28bc80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28bc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28bc84: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x28bc84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x28bc88: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x28bc88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_28bc8c:
    // 0x28bc8c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x28bc8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28bc90:
    // 0x28bc90: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28bc90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28bc94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28bc94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28bc98: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x28bc98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bc9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28bc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bca0: 0x3e00008  jr          $ra
    ctx->pc = 0x28BCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCA0u;
        // 0x28bca4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BCA8u;
}

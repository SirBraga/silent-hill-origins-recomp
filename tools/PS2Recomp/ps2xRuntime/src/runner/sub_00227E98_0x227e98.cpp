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

// Function: sub_00227E98
// Address: 0x227e98 - 0x227fd8
void sub_00227E98_0x227e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227E98_0x227e98");
#endif

    switch (ctx->pc) {
        case 0x227f20u: goto label_227f20;
        case 0x227f50u: goto label_227f50;
        case 0x227f64u: goto label_227f64;
        case 0x227f8cu: goto label_227f8c;
        case 0x227f98u: goto label_227f98;
        default: break;
    }

    ctx->pc = 0x227e98u;

    // 0x227e98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x227e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x227e9c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x227e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x227ea0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x227ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x227ea4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x227ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x227ea8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x227ea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227eac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x227eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x227eb0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x227eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x227eb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x227eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x227eb8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x227eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x227ebc: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x227EBCu;
    {
        const bool branch_taken_0x227ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EBCu;
        // 0x227ec0: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ebc) {
            ctx->pc = 0x227EF0u;
            goto label_227ef0;
        }
    }
    ctx->pc = 0x227EC4u;
    // 0x227ec4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227EC4u;
    {
        const bool branch_taken_0x227ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EC4u;
        // 0x227ec8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ec4) {
            ctx->pc = 0x227EDCu;
            goto label_227edc;
        }
    }
    ctx->pc = 0x227ECCu;
    // 0x227ecc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x227ECCu;
    {
        const bool branch_taken_0x227ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227ECCu;
        // 0x227ed0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ecc) {
            ctx->pc = 0x227EF0u;
            goto label_227ef0;
        }
    }
    ctx->pc = 0x227ED4u;
    // 0x227ed4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x227ED4u;
    {
        const bool branch_taken_0x227ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227ed4) {
            ctx->pc = 0x227F78u;
            goto label_227f78;
        }
    }
    ctx->pc = 0x227EDCu;
label_227edc:
    // 0x227edc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x227edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x227ee0: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x227EE0u;
    {
        const bool branch_taken_0x227ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x227ee0) {
            ctx->pc = 0x227EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227EE0u;
            // 0x227ee4: 0x8e500014  lw          $s0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227F28u;
            goto label_227f28;
        }
    }
    ctx->pc = 0x227EE8u;
    // 0x227ee8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x227EE8u;
    {
        const bool branch_taken_0x227ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EE8u;
        // 0x227eec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ee8) {
            ctx->pc = 0x227F78u;
            goto label_227f78;
        }
    }
    ctx->pc = 0x227EF0u;
label_227ef0:
    // 0x227ef0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x227ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x227ef4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x227ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227ef8: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x227ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x227efc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227EFCu;
    {
        const bool branch_taken_0x227efc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x227F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EFCu;
        // 0x227f00: 0x433004  sllv        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227efc) {
            ctx->pc = 0x227F18u;
            goto label_227f18;
        }
    }
    ctx->pc = 0x227F04u;
    // 0x227f04: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x227f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x227f08: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x227f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x227f0c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x227F0Cu;
    {
        const bool branch_taken_0x227f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F0Cu;
        // 0x227f10: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f0c) {
            ctx->pc = 0x227F84u;
            goto label_227f84;
        }
    }
    ctx->pc = 0x227F14u;
    // 0x227f14: 0x0  nop
    ctx->pc = 0x227f14u;
    // NOP
label_227f18:
    // 0x227f18: 0xc089b4c  jal         func_226D30
    ctx->pc = 0x227F18u;
    SET_GPR_U32(ctx, 31, 0x227F20u);
    ctx->pc = 0x227F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227F18u;
    // 0x227f1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226D30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226D30u, 0x227F18u, 0x227F20u)) {
        return;
    }
    ctx->pc = 0x227F20u;
label_227f20:
    // 0x227f20: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x227F20u;
    {
        const bool branch_taken_0x227f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F20u;
        // 0x227f24: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f20) {
            ctx->pc = 0x227FA4u;
            goto label_227fa4;
        }
    }
    ctx->pc = 0x227F28u;
label_227f28:
    // 0x227f28: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x227f28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x227f2c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227F2Cu;
    {
        const bool branch_taken_0x227f2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x227F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F2Cu;
        // 0x227f30: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f2c) {
            ctx->pc = 0x227F48u;
            goto label_227f48;
        }
    }
    ctx->pc = 0x227F34u;
    // 0x227f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227f38: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x227f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x227f3c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x227f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x227f40: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x227F40u;
    {
        const bool branch_taken_0x227f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F40u;
        // 0x227f44: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f40) {
            ctx->pc = 0x227F84u;
            goto label_227f84;
        }
    }
    ctx->pc = 0x227F48u;
label_227f48:
    // 0x227f48: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x227F48u;
    {
        const bool branch_taken_0x227f48 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x227F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F48u;
        // 0x227f4c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f48) {
            ctx->pc = 0x227FA0u;
            goto label_227fa0;
        }
    }
    ctx->pc = 0x227F50u;
label_227f50:
    // 0x227f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227f54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x227f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227f58: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x227f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227f5c: 0xc089b4c  jal         func_226D30
    ctx->pc = 0x227F5Cu;
    SET_GPR_U32(ctx, 31, 0x227F64u);
    ctx->pc = 0x227F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227F5Cu;
    // 0x227f60: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226D30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226D30u, 0x227F5Cu, 0x227F64u)) {
        return;
    }
    ctx->pc = 0x227F64u;
label_227f64:
    // 0x227f64: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x227f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x227f68: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x227F68u;
    {
        const bool branch_taken_0x227f68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x227F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F68u;
        // 0x227f6c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f68) {
            ctx->pc = 0x227F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227f50;
        }
    }
    ctx->pc = 0x227F70u;
    // 0x227f70: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x227F70u;
    {
        const bool branch_taken_0x227f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F70u;
        // 0x227f74: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f70) {
            ctx->pc = 0x227FA4u;
            goto label_227fa4;
        }
    }
    ctx->pc = 0x227F78u;
label_227f78:
    // 0x227f78: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x227f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x227f7c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x227f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x227f80: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x227f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_227f84:
    // 0x227f84: 0xc092848  jal         func_24A120
    ctx->pc = 0x227F84u;
    SET_GPR_U32(ctx, 31, 0x227F8Cu);
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x227F84u, 0x227F8Cu)) {
        return;
    }
    ctx->pc = 0x227F8Cu;
label_227f8c:
    // 0x227f8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x227f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227f90: 0xc09281a  jal         func_24A068
    ctx->pc = 0x227F90u;
    SET_GPR_U32(ctx, 31, 0x227F98u);
    ctx->pc = 0x227F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227F90u;
    // 0x227f94: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x227F90u, 0x227F98u)) {
        return;
    }
    ctx->pc = 0x227F98u;
label_227f98:
    // 0x227f98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x227F98u;
    {
        const bool branch_taken_0x227f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F98u;
        // 0x227f9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f98) {
            ctx->pc = 0x227FB0u;
            goto label_227fb0;
        }
    }
    ctx->pc = 0x227FA0u;
label_227fa0:
    // 0x227fa0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x227fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_227fa4:
    // 0x227fa4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x227fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227fa8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x227fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x227fac: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x227facu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_227fb0:
    // 0x227fb0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x227fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x227fb4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x227fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x227fb8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x227fb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x227fbc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x227fbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227fc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x227FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FC4u;
        // 0x227fc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227FCCu;
    // 0x227fcc: 0x0  nop
    ctx->pc = 0x227fccu;
    // NOP
    // 0x227fd0: 0xc460020c  lwc1        $f0, 0x20C($v1)
    ctx->pc = 0x227fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227fd4: 0x0  nop
    ctx->pc = 0x227fd4u;
    // NOP
    ctx->pc = 0x227fd8u;
}

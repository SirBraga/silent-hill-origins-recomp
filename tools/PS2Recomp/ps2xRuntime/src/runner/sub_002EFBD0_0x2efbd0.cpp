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

// Function: sub_002EFBD0
// Address: 0x2efbd0 - 0x2efdc8
void sub_002EFBD0_0x2efbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFBD0_0x2efbd0");
#endif

    switch (ctx->pc) {
        case 0x2efcdcu: goto label_2efcdc;
        case 0x2efcf0u: goto label_2efcf0;
        case 0x2efd08u: goto label_2efd08;
        case 0x2efd1cu: goto label_2efd1c;
        case 0x2efd2cu: goto label_2efd2c;
        case 0x2efd40u: goto label_2efd40;
        case 0x2efd50u: goto label_2efd50;
        case 0x2efd64u: goto label_2efd64;
        case 0x2efd74u: goto label_2efd74;
        case 0x2efd88u: goto label_2efd88;
        case 0x2efd98u: goto label_2efd98;
        default: break;
    }

    ctx->pc = 0x2efbd0u;

    // 0x2efbd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2efbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2efbd4: 0x8f8290a8  lw          $v0, -0x6F58($gp)
    ctx->pc = 0x2efbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938792)));
    // 0x2efbd8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2efbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2efbdc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2efbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2efbe0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2efbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2efbe4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2efbe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efbe8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2efbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2efbec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2efbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2efbf0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2efbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2efbf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2efbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efbf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2efbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2efbfc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2efbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2efc00: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2efc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2efc04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFC04u;
    {
        const bool branch_taken_0x2efc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC04u;
        // 0x2efc08: 0x24d00008  addiu       $s0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc04) {
            ctx->pc = 0x2EFC18u;
            goto label_2efc18;
        }
    }
    ctx->pc = 0x2EFC0Cu;
    // 0x2efc0c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2efc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2efc10: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2efc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2efc14: 0x0  nop
    ctx->pc = 0x2efc14u;
    // NOP
label_2efc18:
    // 0x2efc18: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2efc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2efc1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFC1Cu;
    {
        const bool branch_taken_0x2efc1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC1Cu;
        // 0x2efc20: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc1c) {
            ctx->pc = 0x2EFC30u;
            goto label_2efc30;
        }
    }
    ctx->pc = 0x2EFC24u;
    // 0x2efc24: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2efc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2efc28: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2efc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2efc2c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2efc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2efc30:
    // 0x2efc30: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2efc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2efc34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFC34u;
    {
        const bool branch_taken_0x2efc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC34u;
        // 0x2efc38: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc34) {
            ctx->pc = 0x2EFC48u;
            goto label_2efc48;
        }
    }
    ctx->pc = 0x2EFC3Cu;
    // 0x2efc3c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2efc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2efc40: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2efc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2efc44: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2efc44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2efc48:
    // 0x2efc48: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2efc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2efc4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFC4Cu;
    {
        const bool branch_taken_0x2efc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC4Cu;
        // 0x2efc50: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc4c) {
            ctx->pc = 0x2EFC60u;
            goto label_2efc60;
        }
    }
    ctx->pc = 0x2EFC54u;
    // 0x2efc54: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2efc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2efc58: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2efc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2efc5c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2efc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2efc60:
    // 0x2efc60: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2efc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2efc64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFC64u;
    {
        const bool branch_taken_0x2efc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC64u;
        // 0x2efc68: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc64) {
            ctx->pc = 0x2EFC78u;
            goto label_2efc78;
        }
    }
    ctx->pc = 0x2EFC6Cu;
    // 0x2efc6c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2efc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2efc70: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2efc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2efc74: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2efc74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2efc78:
    // 0x2efc78: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2efc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2efc7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFC7Cu;
    {
        const bool branch_taken_0x2efc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC7Cu;
        // 0x2efc80: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc7c) {
            ctx->pc = 0x2EFC90u;
            goto label_2efc90;
        }
    }
    ctx->pc = 0x2EFC84u;
    // 0x2efc84: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2efc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2efc88: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2efc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2efc8c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2efc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2efc90:
    // 0x2efc90: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2efc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2efc94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFC94u;
    {
        const bool branch_taken_0x2efc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC94u;
        // 0x2efc98: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc94) {
            ctx->pc = 0x2EFCA8u;
            goto label_2efca8;
        }
    }
    ctx->pc = 0x2EFC9Cu;
    // 0x2efc9c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2efc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2efca0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2efca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2efca4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2efca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2efca8:
    // 0x2efca8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2efca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2efcac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFCACu;
    {
        const bool branch_taken_0x2efcac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFCACu;
        // 0x2efcb0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efcac) {
            ctx->pc = 0x2EFCC0u;
            goto label_2efcc0;
        }
    }
    ctx->pc = 0x2EFCB4u;
    // 0x2efcb4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2efcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2efcb8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2efcb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2efcbc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2efcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2efcc0:
    // 0x2efcc0: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x2efcc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x2efcc4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2efcc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efcc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2efcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efccc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2efcccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efcd0: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x2efcd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x2efcd4: 0xc0926f4  jal         func_249BD0
    ctx->pc = 0x2EFCD4u;
    SET_GPR_U32(ctx, 31, 0x2EFCDCu);
    ctx->pc = 0x2EFCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFCD4u;
    // 0x2efcd8: 0x24080065  addiu       $t0, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249BD0u, 0x2EFCD4u, 0x2EFCDCu)) {
        return;
    }
    ctx->pc = 0x2EFCDCu;
label_2efcdc:
    // 0x2efcdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EFCDCu;
    {
        const bool branch_taken_0x2efcdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFCDCu;
        // 0x2efce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efcdc) {
            ctx->pc = 0x2EFCF8u;
            goto label_2efcf8;
        }
    }
    ctx->pc = 0x2EFCE4u;
    // 0x2efce4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2efce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efce8: 0xc092782  jal         func_249E08
    ctx->pc = 0x2EFCE8u;
    SET_GPR_U32(ctx, 31, 0x2EFCF0u);
    ctx->pc = 0x2EFCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFCE8u;
    // 0x2efcec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x2EFCE8u, 0x2EFCF0u)) {
        return;
    }
    ctx->pc = 0x2EFCF0u;
label_2efcf0:
    // 0x2efcf0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EFCF0u;
    {
        const bool branch_taken_0x2efcf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFCF0u;
        // 0x2efcf4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efcf0) {
            ctx->pc = 0x2EFD00u;
            goto label_2efd00;
        }
    }
    ctx->pc = 0x2EFCF8u;
label_2efcf8:
    // 0x2efcf8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2EFCF8u;
    {
        const bool branch_taken_0x2efcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFCF8u;
        // 0x2efcfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efcf8) {
            ctx->pc = 0x2EFDACu;
            goto label_2efdac;
        }
    }
    ctx->pc = 0x2EFD00u;
label_2efd00:
    // 0x2efd00: 0x26330020  addiu       $s3, $s1, 0x20
    ctx->pc = 0x2efd00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2efd04: 0x0  nop
    ctx->pc = 0x2efd04u;
    // NOP
label_2efd08:
    // 0x2efd08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2efd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2efd0c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EFD0Cu;
    {
        const bool branch_taken_0x2efd0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efd0c) {
            ctx->pc = 0x2EFD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFD0Cu;
            // 0x2efd10: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFD30u;
            goto label_2efd30;
        }
    }
    ctx->pc = 0x2EFD14u;
    // 0x2efd14: 0xc0bbdbe  jal         func_2EF6F8
    ctx->pc = 0x2EFD14u;
    SET_GPR_U32(ctx, 31, 0x2EFD1Cu);
    ctx->pc = 0x2EFD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFD14u;
    // 0x2efd18: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF6F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF6F8u, 0x2EFD14u, 0x2EFD1Cu)) {
        return;
    }
    ctx->pc = 0x2EFD1Cu;
label_2efd1c:
    // 0x2efd1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2efd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2efd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd24: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x2EFD24u;
    SET_GPR_U32(ctx, 31, 0x2EFD2Cu);
    ctx->pc = 0x2EFD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFD24u;
    // 0x2efd28: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x2EFD24u, 0x2EFD2Cu)) {
        return;
    }
    ctx->pc = 0x2EFD2Cu;
label_2efd2c:
    // 0x2efd2c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2efd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2efd30:
    // 0x2efd30: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EFD30u;
    {
        const bool branch_taken_0x2efd30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efd30) {
            ctx->pc = 0x2EFD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFD30u;
            // 0x2efd34: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFD54u;
            goto label_2efd54;
        }
    }
    ctx->pc = 0x2EFD38u;
    // 0x2efd38: 0xc0bbdbe  jal         func_2EF6F8
    ctx->pc = 0x2EFD38u;
    SET_GPR_U32(ctx, 31, 0x2EFD40u);
    ctx->pc = 0x2EFD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFD38u;
    // 0x2efd3c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF6F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF6F8u, 0x2EFD38u, 0x2EFD40u)) {
        return;
    }
    ctx->pc = 0x2EFD40u;
label_2efd40:
    // 0x2efd40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2efd40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2efd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd48: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x2EFD48u;
    SET_GPR_U32(ctx, 31, 0x2EFD50u);
    ctx->pc = 0x2EFD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFD48u;
    // 0x2efd4c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x2EFD48u, 0x2EFD50u)) {
        return;
    }
    ctx->pc = 0x2EFD50u;
label_2efd50:
    // 0x2efd50: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2efd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2efd54:
    // 0x2efd54: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EFD54u;
    {
        const bool branch_taken_0x2efd54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efd54) {
            ctx->pc = 0x2EFD58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFD54u;
            // 0x2efd58: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFD78u;
            goto label_2efd78;
        }
    }
    ctx->pc = 0x2EFD5Cu;
    // 0x2efd5c: 0xc0bbdbe  jal         func_2EF6F8
    ctx->pc = 0x2EFD5Cu;
    SET_GPR_U32(ctx, 31, 0x2EFD64u);
    ctx->pc = 0x2EFD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFD5Cu;
    // 0x2efd60: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF6F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF6F8u, 0x2EFD5Cu, 0x2EFD64u)) {
        return;
    }
    ctx->pc = 0x2EFD64u;
label_2efd64:
    // 0x2efd64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2efd64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2efd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd6c: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x2EFD6Cu;
    SET_GPR_U32(ctx, 31, 0x2EFD74u);
    ctx->pc = 0x2EFD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFD6Cu;
    // 0x2efd70: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x2EFD6Cu, 0x2EFD74u)) {
        return;
    }
    ctx->pc = 0x2EFD74u;
label_2efd74:
    // 0x2efd74: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2efd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2efd78:
    // 0x2efd78: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EFD78u;
    {
        const bool branch_taken_0x2efd78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efd78) {
            ctx->pc = 0x2EFD7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFD78u;
            // 0x2efd7c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFD9Cu;
            goto label_2efd9c;
        }
    }
    ctx->pc = 0x2EFD80u;
    // 0x2efd80: 0xc0bbdbe  jal         func_2EF6F8
    ctx->pc = 0x2EFD80u;
    SET_GPR_U32(ctx, 31, 0x2EFD88u);
    ctx->pc = 0x2EFD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFD80u;
    // 0x2efd84: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF6F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF6F8u, 0x2EFD80u, 0x2EFD88u)) {
        return;
    }
    ctx->pc = 0x2EFD88u;
label_2efd88:
    // 0x2efd88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2efd88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2efd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd90: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x2EFD90u;
    SET_GPR_U32(ctx, 31, 0x2EFD98u);
    ctx->pc = 0x2EFD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFD90u;
    // 0x2efd94: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x2EFD90u, 0x2EFD98u)) {
        return;
    }
    ctx->pc = 0x2EFD98u;
label_2efd98:
    // 0x2efd98: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2efd98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2efd9c:
    // 0x2efd9c: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x2efd9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2efda0: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2EFDA0u;
    {
        const bool branch_taken_0x2efda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EFDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFDA0u;
        // 0x2efda4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efda0) {
            ctx->pc = 0x2EFD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2efd08;
        }
    }
    ctx->pc = 0x2EFDA8u;
    // 0x2efda8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2efda8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2efdac:
    // 0x2efdac: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2efdacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2efdb0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2efdb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2efdb4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2efdb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2efdb8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2efdb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2efdbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2efdbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2efdc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFDC0u;
        // 0x2efdc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFDC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFDC8u;
}

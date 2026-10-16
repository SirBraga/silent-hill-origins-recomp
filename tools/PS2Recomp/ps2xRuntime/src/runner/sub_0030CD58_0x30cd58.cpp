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

// Function: sub_0030CD58
// Address: 0x30cd58 - 0x30d060
void sub_0030CD58_0x30cd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CD58_0x30cd58");
#endif

    switch (ctx->pc) {
        case 0x30cd90u: goto label_30cd90;
        case 0x30cdc0u: goto label_30cdc0;
        case 0x30cdecu: goto label_30cdec;
        case 0x30ce30u: goto label_30ce30;
        case 0x30ce5cu: goto label_30ce5c;
        case 0x30ce98u: goto label_30ce98;
        case 0x30ceb8u: goto label_30ceb8;
        case 0x30cee4u: goto label_30cee4;
        case 0x30cef8u: goto label_30cef8;
        case 0x30cf3cu: goto label_30cf3c;
        case 0x30cf58u: goto label_30cf58;
        case 0x30cf74u: goto label_30cf74;
        case 0x30cf88u: goto label_30cf88;
        case 0x30cf98u: goto label_30cf98;
        case 0x30cfacu: goto label_30cfac;
        case 0x30cfc0u: goto label_30cfc0;
        case 0x30cfd4u: goto label_30cfd4;
        default: break;
    }

    ctx->pc = 0x30cd58u;

    // 0x30cd58: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x30cd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x30cd5c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x30cd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x30cd60: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x30cd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x30cd64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30cd64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd68: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x30cd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x30cd6c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x30cd6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd70: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x30cd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x30cd74: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x30cd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x30cd78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30cd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30cd7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30cd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30cd80: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30cd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30cd84: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30cd84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30cd88: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30CD88u;
    SET_GPR_U32(ctx, 31, 0x30CD90u);
    ctx->pc = 0x30CD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CD88u;
    // 0x30cd8c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30CD88u, 0x30CD90u)) {
        return;
    }
    ctx->pc = 0x30CD90u;
label_30cd90:
    // 0x30cd90: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x30CD90u;
    {
        const bool branch_taken_0x30cd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CD90u;
        // 0x30cd94: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cd90) {
            ctx->pc = 0x30D010u;
            goto label_30d010;
        }
    }
    ctx->pc = 0x30CD98u;
    // 0x30cd98: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x30cd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x30cd9c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30cd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30cda0: 0x1443009b  bne         $v0, $v1, . + 4 + (0x9B << 2)
    ctx->pc = 0x30CDA0u;
    {
        const bool branch_taken_0x30cda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30CDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CDA0u;
        // 0x30cda4: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cda0) {
            ctx->pc = 0x30D010u;
            goto label_30d010;
        }
    }
    ctx->pc = 0x30CDA8u;
    // 0x30cda8: 0x14400099  bnez        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x30CDA8u;
    {
        const bool branch_taken_0x30cda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CDA8u;
        // 0x30cdac: 0x27b00004  addiu       $s0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cda8) {
            ctx->pc = 0x30D010u;
            goto label_30d010;
        }
    }
    ctx->pc = 0x30CDB0u;
    // 0x30cdb0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30cdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30cdb4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30cdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30cdb8: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30CDB8u;
    SET_GPR_U32(ctx, 31, 0x30CDC0u);
    ctx->pc = 0x30CDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CDB8u;
    // 0x30cdbc: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30CDB8u, 0x30CDC0u)) {
        return;
    }
    ctx->pc = 0x30CDC0u;
label_30cdc0:
    // 0x30cdc0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30CDC0u;
    {
        const bool branch_taken_0x30cdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CDC0u;
        // 0x30cdc4: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cdc0) {
            ctx->pc = 0x30CDF8u;
            goto label_30cdf8;
        }
    }
    ctx->pc = 0x30CDC8u;
    // 0x30cdc8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30cdcc: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30cdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30cdd0: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30CDD0u;
    {
        const bool branch_taken_0x30cdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CDD0u;
        // 0x30cdd4: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cdd0) {
            ctx->pc = 0x30CDF8u;
            goto label_30cdf8;
        }
    }
    ctx->pc = 0x30CDD8u;
    // 0x30cdd8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30CDD8u;
    {
        const bool branch_taken_0x30cdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CDD8u;
        // 0x30cddc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cdd8) {
            ctx->pc = 0x30CDF8u;
            goto label_30cdf8;
        }
    }
    ctx->pc = 0x30CDE0u;
    // 0x30cde0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30cde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30cde4: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30CDE4u;
    SET_GPR_U32(ctx, 31, 0x30CDECu);
    ctx->pc = 0x30CDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CDE4u;
    // 0x30cde8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30CDE4u, 0x30CDECu)) {
        return;
    }
    ctx->pc = 0x30CDECu;
label_30cdec:
    // 0x30cdec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CDECu;
    {
        const bool branch_taken_0x30cdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30cdec) {
            ctx->pc = 0x30CE00u;
            goto label_30ce00;
        }
    }
    ctx->pc = 0x30CDF4u;
    // 0x30cdf4: 0x0  nop
    ctx->pc = 0x30cdf4u;
    // NOP
label_30cdf8:
    // 0x30cdf8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CDF8u;
    {
        const bool branch_taken_0x30cdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CDF8u;
        // 0x30cdfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cdf8) {
            ctx->pc = 0x30CE18u;
            goto label_30ce18;
        }
    }
    ctx->pc = 0x30CE00u;
label_30ce00:
    // 0x30ce00: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30CE00u;
    {
        const bool branch_taken_0x30ce00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CE00u;
        // 0x30ce04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ce00) {
            ctx->pc = 0x30CE18u;
            goto label_30ce18;
        }
    }
    ctx->pc = 0x30CE08u;
    // 0x30ce08: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30ce0c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30ce10: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30ce10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30ce14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30ce18:
    // 0x30ce18: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x30CE18u;
    {
        const bool branch_taken_0x30ce18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CE18u;
        // 0x30ce1c: 0x27b0000c  addiu       $s0, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ce18) {
            ctx->pc = 0x30D010u;
            goto label_30d010;
        }
    }
    ctx->pc = 0x30CE20u;
    // 0x30ce20: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30ce20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30ce24: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30ce24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30ce28: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30CE28u;
    SET_GPR_U32(ctx, 31, 0x30CE30u);
    ctx->pc = 0x30CE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CE28u;
    // 0x30ce2c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30CE28u, 0x30CE30u)) {
        return;
    }
    ctx->pc = 0x30CE30u;
label_30ce30:
    // 0x30ce30: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30CE30u;
    {
        const bool branch_taken_0x30ce30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CE30u;
        // 0x30ce34: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ce30) {
            ctx->pc = 0x30CE68u;
            goto label_30ce68;
        }
    }
    ctx->pc = 0x30CE38u;
    // 0x30ce38: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30ce38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30ce3c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30ce3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30ce40: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30CE40u;
    {
        const bool branch_taken_0x30ce40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CE40u;
        // 0x30ce44: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ce40) {
            ctx->pc = 0x30CE68u;
            goto label_30ce68;
        }
    }
    ctx->pc = 0x30CE48u;
    // 0x30ce48: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30CE48u;
    {
        const bool branch_taken_0x30ce48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CE48u;
        // 0x30ce4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ce48) {
            ctx->pc = 0x30CE68u;
            goto label_30ce68;
        }
    }
    ctx->pc = 0x30CE50u;
    // 0x30ce50: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30ce50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30ce54: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30CE54u;
    SET_GPR_U32(ctx, 31, 0x30CE5Cu);
    ctx->pc = 0x30CE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CE54u;
    // 0x30ce58: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30CE54u, 0x30CE5Cu)) {
        return;
    }
    ctx->pc = 0x30CE5Cu;
label_30ce5c:
    // 0x30ce5c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CE5Cu;
    {
        const bool branch_taken_0x30ce5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ce5c) {
            ctx->pc = 0x30CE70u;
            goto label_30ce70;
        }
    }
    ctx->pc = 0x30CE64u;
    // 0x30ce64: 0x0  nop
    ctx->pc = 0x30ce64u;
    // NOP
label_30ce68:
    // 0x30ce68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30CE68u;
    {
        const bool branch_taken_0x30ce68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CE68u;
        // 0x30ce6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ce68) {
            ctx->pc = 0x30CE88u;
            goto label_30ce88;
        }
    }
    ctx->pc = 0x30CE70u;
label_30ce70:
    // 0x30ce70: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30CE70u;
    {
        const bool branch_taken_0x30ce70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CE70u;
        // 0x30ce74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ce70) {
            ctx->pc = 0x30CE88u;
            goto label_30ce88;
        }
    }
    ctx->pc = 0x30CE78u;
    // 0x30ce78: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30ce7c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30ce80: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30ce84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30ce88:
    // 0x30ce88: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x30CE88u;
    {
        const bool branch_taken_0x30ce88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CE88u;
        // 0x30ce8c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ce88) {
            ctx->pc = 0x30D010u;
            goto label_30d010;
        }
    }
    ctx->pc = 0x30CE90u;
    // 0x30ce90: 0xc0ad26a  jal         func_2B49A8
    ctx->pc = 0x30CE90u;
    SET_GPR_U32(ctx, 31, 0x30CE98u);
    ctx->pc = 0x30CE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CE90u;
    // 0x30ce94: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B49A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B49A8u, 0x30CE90u, 0x30CE98u)) {
        return;
    }
    ctx->pc = 0x30CE98u;
label_30ce98:
    // 0x30ce98: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x30ce98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce9c: 0x1280005c  beqz        $s4, . + 4 + (0x5C << 2)
    ctx->pc = 0x30CE9Cu;
    {
        const bool branch_taken_0x30ce9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CE9Cu;
        // 0x30cea0: 0x2690000c  addiu       $s0, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ce9c) {
            ctx->pc = 0x30D010u;
            goto label_30d010;
        }
    }
    ctx->pc = 0x30CEA4u;
    // 0x30cea4: 0x8e930008  lw          $s3, 0x8($s4)
    ctx->pc = 0x30cea4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x30cea8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30cea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30ceac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30ceacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30ceb0: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30CEB0u;
    SET_GPR_U32(ctx, 31, 0x30CEB8u);
    ctx->pc = 0x30CEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CEB0u;
    // 0x30ceb4: 0x27a50014  addiu       $a1, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30CEB0u, 0x30CEB8u)) {
        return;
    }
    ctx->pc = 0x30CEB8u;
label_30ceb8:
    // 0x30ceb8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30CEB8u;
    {
        const bool branch_taken_0x30ceb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CEB8u;
        // 0x30cebc: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ceb8) {
            ctx->pc = 0x30CEF8u;
            goto label_30cef8;
        }
    }
    ctx->pc = 0x30CEC0u;
    // 0x30cec0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x30cec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30cec4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30cec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30cec8: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x30CEC8u;
    {
        const bool branch_taken_0x30cec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CEC8u;
        // 0x30cecc: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cec8) {
            ctx->pc = 0x30CEF8u;
            goto label_30cef8;
        }
    }
    ctx->pc = 0x30CED0u;
    // 0x30ced0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30CED0u;
    {
        const bool branch_taken_0x30ced0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CED0u;
        // 0x30ced4: 0x27a50018  addiu       $a1, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ced0) {
            ctx->pc = 0x30CEF8u;
            goto label_30cef8;
        }
    }
    ctx->pc = 0x30CED8u;
    // 0x30ced8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30ced8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30cedc: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30CEDCu;
    SET_GPR_U32(ctx, 31, 0x30CEE4u);
    ctx->pc = 0x30CEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CEDCu;
    // 0x30cee0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30CEDCu, 0x30CEE4u)) {
        return;
    }
    ctx->pc = 0x30CEE4u;
label_30cee4:
    // 0x30cee4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CEE4u;
    {
        const bool branch_taken_0x30cee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CEE4u;
        // 0x30cee8: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cee4) {
            ctx->pc = 0x30CEF8u;
            goto label_30cef8;
        }
    }
    ctx->pc = 0x30CEECu;
    // 0x30ceec: 0x10530004  beq         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x30CEECu;
    {
        const bool branch_taken_0x30ceec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x30ceec) {
            ctx->pc = 0x30CF00u;
            goto label_30cf00;
        }
    }
    ctx->pc = 0x30CEF4u;
    // 0x30cef4: 0x0  nop
    ctx->pc = 0x30cef4u;
    // NOP
label_30cef8:
    // 0x30cef8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x30CEF8u;
    {
        const bool branch_taken_0x30cef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CEF8u;
        // 0x30cefc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cef8) {
            ctx->pc = 0x30D008u;
            goto label_30d008;
        }
    }
    ctx->pc = 0x30CF00u;
label_30cf00:
    // 0x30cf00: 0x12600039  beqz        $s3, . + 4 + (0x39 << 2)
    ctx->pc = 0x30CF00u;
    {
        const bool branch_taken_0x30cf00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF00u;
        // 0x30cf04: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cf00) {
            ctx->pc = 0x30CFE8u;
            goto label_30cfe8;
        }
    }
    ctx->pc = 0x30CF08u;
    // 0x30cf08: 0x1a600016  blez        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x30CF08u;
    {
        const bool branch_taken_0x30cf08 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x30CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF08u;
        // 0x30cf0c: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cf08) {
            ctx->pc = 0x30CF64u;
            goto label_30cf64;
        }
    }
    ctx->pc = 0x30CF10u;
    // 0x30cf10: 0x5060001e  beql        $v1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x30CF10u;
    {
        const bool branch_taken_0x30cf10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cf10) {
            ctx->pc = 0x30CF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30CF10u;
            // 0x30cf14: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30CF8Cu;
            goto label_30cf8c;
        }
    }
    ctx->pc = 0x30CF18u;
    // 0x30cf18: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x30cf18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30cf1c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x30CF1Cu;
    {
        const bool branch_taken_0x30cf1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF1Cu;
        // 0x30cf20: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cf1c) {
            ctx->pc = 0x30CF68u;
            goto label_30cf68;
        }
    }
    ctx->pc = 0x30CF24u;
    // 0x30cf24: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x30cf24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x30cf28: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30CF28u;
    {
        const bool branch_taken_0x30cf28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30cf28) {
            ctx->pc = 0x30CF4Cu;
            goto label_30cf4c;
        }
    }
    ctx->pc = 0x30CF30u;
    // 0x30cf30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30cf30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cf34: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30CF34u;
    SET_GPR_U32(ctx, 31, 0x30CF3Cu);
    ctx->pc = 0x30CF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CF34u;
    // 0x30cf38: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30CF34u, 0x30CF3Cu)) {
        return;
    }
    ctx->pc = 0x30CF3Cu;
label_30cf3c:
    // 0x30cf3c: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x30CF3Cu;
    {
        const bool branch_taken_0x30cf3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF3Cu;
        // 0x30cf40: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cf3c) {
            ctx->pc = 0x30CEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30cef8;
        }
    }
    ctx->pc = 0x30CF44u;
    // 0x30cf44: 0x26900010  addiu       $s0, $s4, 0x10
    ctx->pc = 0x30cf44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x30cf48: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30cf48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30cf4c:
    // 0x30cf4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30cf4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cf50: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30CF50u;
    SET_GPR_U32(ctx, 31, 0x30CF58u);
    ctx->pc = 0x30CF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CF50u;
    // 0x30cf54: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30CF50u, 0x30CF58u)) {
        return;
    }
    ctx->pc = 0x30CF58u;
label_30cf58:
    // 0x30cf58: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x30CF58u;
    {
        const bool branch_taken_0x30cf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF58u;
        // 0x30cf5c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cf58) {
            ctx->pc = 0x30CEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30cef8;
        }
    }
    ctx->pc = 0x30CF60u;
    // 0x30cf60: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x30cf60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_30cf64:
    // 0x30cf64: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30cf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30cf68:
    // 0x30cf68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30cf68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cf6c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30CF6Cu;
    SET_GPR_U32(ctx, 31, 0x30CF74u);
    ctx->pc = 0x30CF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CF6Cu;
    // 0x30cf70: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30CF6Cu, 0x30CF74u)) {
        return;
    }
    ctx->pc = 0x30CF74u;
label_30cf74:
    // 0x30cf74: 0x1040ffe0  beqz        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x30CF74u;
    {
        const bool branch_taken_0x30cf74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF74u;
        // 0x30cf78: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cf74) {
            ctx->pc = 0x30CEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30cef8;
        }
    }
    ctx->pc = 0x30CF7Cu;
    // 0x30cf7c: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x30cf7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x30cf80: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x30CF80u;
    {
        const bool branch_taken_0x30cf80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF80u;
        // 0x30cf84: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cf80) {
            ctx->pc = 0x30CFE8u;
            goto label_30cfe8;
        }
    }
    ctx->pc = 0x30CF88u;
label_30cf88:
    // 0x30cf88: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30cf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30cf8c:
    // 0x30cf8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30cf8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cf90: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30CF90u;
    SET_GPR_U32(ctx, 31, 0x30CF98u);
    ctx->pc = 0x30CF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CF90u;
    // 0x30cf94: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30CF90u, 0x30CF98u)) {
        return;
    }
    ctx->pc = 0x30CF98u;
label_30cf98:
    // 0x30cf98: 0x1040ffd7  beqz        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x30CF98u;
    {
        const bool branch_taken_0x30cf98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF98u;
        // 0x30cf9c: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cf98) {
            ctx->pc = 0x30CEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30cef8;
        }
    }
    ctx->pc = 0x30CFA0u;
    // 0x30cfa0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30cfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30cfa4: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30CFA4u;
    SET_GPR_U32(ctx, 31, 0x30CFACu);
    ctx->pc = 0x30CFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CFA4u;
    // 0x30cfa8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30CFA4u, 0x30CFACu)) {
        return;
    }
    ctx->pc = 0x30CFACu;
label_30cfac:
    // 0x30cfac: 0x1040ffd2  beqz        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x30CFACu;
    {
        const bool branch_taken_0x30cfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CFACu;
        // 0x30cfb0: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cfac) {
            ctx->pc = 0x30CEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30cef8;
        }
    }
    ctx->pc = 0x30CFB4u;
    // 0x30cfb4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30cfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30cfb8: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30CFB8u;
    SET_GPR_U32(ctx, 31, 0x30CFC0u);
    ctx->pc = 0x30CFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CFB8u;
    // 0x30cfbc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30CFB8u, 0x30CFC0u)) {
        return;
    }
    ctx->pc = 0x30CFC0u;
label_30cfc0:
    // 0x30cfc0: 0x1040ffcd  beqz        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x30CFC0u;
    {
        const bool branch_taken_0x30cfc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CFC0u;
        // 0x30cfc4: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cfc0) {
            ctx->pc = 0x30CEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30cef8;
        }
    }
    ctx->pc = 0x30CFC8u;
    // 0x30cfc8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30cfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30cfcc: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30CFCCu;
    SET_GPR_U32(ctx, 31, 0x30CFD4u);
    ctx->pc = 0x30CFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CFCCu;
    // 0x30cfd0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30CFCCu, 0x30CFD4u)) {
        return;
    }
    ctx->pc = 0x30CFD4u;
label_30cfd4:
    // 0x30cfd4: 0x1040ffc8  beqz        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x30CFD4u;
    {
        const bool branch_taken_0x30cfd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CFD4u;
        // 0x30cfd8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cfd4) {
            ctx->pc = 0x30CEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30cef8;
        }
    }
    ctx->pc = 0x30CFDCu;
    // 0x30cfdc: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x30cfdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x30cfe0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x30CFE0u;
    {
        const bool branch_taken_0x30cfe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CFE0u;
        // 0x30cfe4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cfe0) {
            ctx->pc = 0x30CF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30cf88;
        }
    }
    ctx->pc = 0x30CFE8u;
label_30cfe8:
    // 0x30cfe8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30CFE8u;
    {
        const bool branch_taken_0x30cfe8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CFE8u;
        // 0x30cfec: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cfe8) {
            ctx->pc = 0x30D004u;
            goto label_30d004;
        }
    }
    ctx->pc = 0x30CFF0u;
    // 0x30cff0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x30cff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30cff4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30cff8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x30cff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x30cffc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30d000: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x30d000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_30d004:
    // 0x30d004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d008:
    // 0x30d008: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D008u;
    {
        const bool branch_taken_0x30d008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d008) {
            ctx->pc = 0x30D018u;
            goto label_30d018;
        }
    }
    ctx->pc = 0x30D010u;
label_30d010:
    // 0x30d010: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30D010u;
    {
        const bool branch_taken_0x30d010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D010u;
        // 0x30d014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d010) {
            ctx->pc = 0x30D030u;
            goto label_30d030;
        }
    }
    ctx->pc = 0x30D018u;
label_30d018:
    // 0x30d018: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D018u;
    {
        const bool branch_taken_0x30d018 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D018u;
        // 0x30d01c: 0xaeb40000  sw          $s4, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d018) {
            ctx->pc = 0x30D02Cu;
            goto label_30d02c;
        }
    }
    ctx->pc = 0x30D020u;
    // 0x30d020: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30d020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30d024: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30d024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30d028: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30d028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_30d02c:
    // 0x30d02c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d030:
    // 0x30d030: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x30d030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30d034: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x30d034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30d038: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x30d038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30d03c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x30d03cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30d040: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30d040u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30d044: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x30d044u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d048: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30d048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d04c: 0x3e00008  jr          $ra
    ctx->pc = 0x30D04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D04Cu;
        // 0x30d050: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D054u;
    // 0x30d054: 0x0  nop
    ctx->pc = 0x30d054u;
    // NOP
    // 0x30d058: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x30d058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30d05c: 0x0  nop
    ctx->pc = 0x30d05cu;
    // NOP
    ctx->pc = 0x30d060u;
}

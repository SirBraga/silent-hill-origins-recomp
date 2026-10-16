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

// Function: sub_002DBAA0
// Address: 0x2dbaa0 - 0x2dbd70
void sub_002DBAA0_0x2dbaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBAA0_0x2dbaa0");
#endif

    switch (ctx->pc) {
        case 0x2dbae8u: goto label_2dbae8;
        case 0x2dbb0cu: goto label_2dbb0c;
        case 0x2dbb34u: goto label_2dbb34;
        case 0x2dbb7cu: goto label_2dbb7c;
        case 0x2dbb88u: goto label_2dbb88;
        case 0x2dbbb8u: goto label_2dbbb8;
        case 0x2dbbe0u: goto label_2dbbe0;
        case 0x2dbbf8u: goto label_2dbbf8;
        case 0x2dbc34u: goto label_2dbc34;
        case 0x2dbc58u: goto label_2dbc58;
        case 0x2dbc80u: goto label_2dbc80;
        case 0x2dbca0u: goto label_2dbca0;
        case 0x2dbcc0u: goto label_2dbcc0;
        case 0x2dbcd0u: goto label_2dbcd0;
        case 0x2dbcdcu: goto label_2dbcdc;
        case 0x2dbcfcu: goto label_2dbcfc;
        case 0x2dbd08u: goto label_2dbd08;
        default: break;
    }

    ctx->pc = 0x2dbaa0u;

    // 0x2dbaa0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2dbaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2dbaa4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2dbaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2dbaa8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2dbaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2dbaac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2dbaacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbab0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2dbab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2dbab4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2dbab4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbab8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2dbab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2dbabc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2dbabcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbac0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2dbac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2dbac4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2dbac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2dbac8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2dbac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2dbacc: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2dbaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2dbad0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2dbad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2dbad4: 0x12c0008f  beqz        $s6, . + 4 + (0x8F << 2)
    ctx->pc = 0x2DBAD4u;
    {
        const bool branch_taken_0x2dbad4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBAD4u;
        // 0x2dbad8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbad4) {
            ctx->pc = 0x2DBD14u;
            goto label_2dbd14;
        }
    }
    ctx->pc = 0x2DBADCu;
    // 0x2dbadc: 0x3c170070  lui         $s7, 0x70
    ctx->pc = 0x2dbadcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)112 << 16));
    // 0x2dbae0: 0x241efff0  addiu       $fp, $zero, -0x10
    ctx->pc = 0x2dbae0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2dbae4: 0x141140  sll         $v0, $s4, 5
    ctx->pc = 0x2dbae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
label_2dbae8:
    // 0x2dbae8: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x2dbae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2dbaec: 0x2a29021  addu        $s2, $s5, $v0
    ctx->pc = 0x2dbaecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2dbaf0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2dbaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2dbaf4: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2DBAF4u;
    {
        const bool branch_taken_0x2dbaf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DBAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBAF4u;
        // 0x2dbaf8: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbaf4) {
            ctx->pc = 0x2DBB68u;
            goto label_2dbb68;
        }
    }
    ctx->pc = 0x2DBAFCu;
    // 0x2dbafc: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x2dbafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2dbb00: 0x26e47c98  addiu       $a0, $s7, 0x7C98
    ctx->pc = 0x2dbb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 31896));
    // 0x2dbb04: 0xc0b7018  jal         func_2DC060
    ctx->pc = 0x2DBB04u;
    SET_GPR_U32(ctx, 31, 0x2DBB0Cu);
    ctx->pc = 0x2DBB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBB04u;
    // 0x2dbb08: 0x24132000  addiu       $s3, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC060u, 0x2DBB04u, 0x2DBB0Cu)) {
        return;
    }
    ctx->pc = 0x2DBB0Cu;
label_2dbb0c:
    // 0x2dbb0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dbb0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb10: 0x8e470018  lw          $a3, 0x18($s2)
    ctx->pc = 0x2dbb10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2dbb14: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2dbb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2dbb18: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x2dbb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2dbb1c: 0x8e48001c  lw          $t0, 0x1C($s2)
    ctx->pc = 0x2dbb1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2dbb20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dbb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb24: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2dbb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2dbb28: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x2dbb28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2dbb2c: 0xc0b6d64  jal         func_2DB590
    ctx->pc = 0x2DBB2Cu;
    SET_GPR_U32(ctx, 31, 0x2DBB34u);
    ctx->pc = 0x2DBB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBB2Cu;
    // 0x2dbb30: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB590u, 0x2DBB2Cu, 0x2DBB34u)) {
        return;
    }
    ctx->pc = 0x2DBB34u;
label_2dbb34:
    // 0x2dbb34: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2dbb34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb38: 0x10e0005a  beqz        $a3, . + 4 + (0x5A << 2)
    ctx->pc = 0x2DBB38u;
    {
        const bool branch_taken_0x2dbb38 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB38u;
        // 0x2dbb3c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb38) {
            ctx->pc = 0x2DBCA4u;
            goto label_2dbca4;
        }
    }
    ctx->pc = 0x2DBB40u;
    // 0x2dbb40: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DBB40u;
    {
        const bool branch_taken_0x2dbb40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbb40) {
            ctx->pc = 0x2DBB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBB40u;
            // 0x2dbb44: 0x8ce20014  lw          $v0, 0x14($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBB58u;
            goto label_2dbb58;
        }
    }
    ctx->pc = 0x2DBB48u;
    // 0x2dbb48: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2dbb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2dbb4c: 0xacf00018  sw          $s0, 0x18($a3)
    ctx->pc = 0x2dbb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 16));
    // 0x2dbb50: 0x34534000  ori         $s3, $v0, 0x4000
    ctx->pc = 0x2dbb50u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2dbb54: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x2dbb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_2dbb58:
    // 0x2dbb58: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2dbb58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb5c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x2dbb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x2dbb60: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2DBB60u;
    {
        const bool branch_taken_0x2dbb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB60u;
        // 0x2dbb64: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb60) {
            ctx->pc = 0x2DBCA4u;
            goto label_2dbca4;
        }
    }
    ctx->pc = 0x2DBB68u;
label_2dbb68:
    // 0x2dbb68: 0x1482002b  bne         $a0, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2DBB68u;
    {
        const bool branch_taken_0x2dbb68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DBB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB68u;
        // 0x2dbb6c: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb68) {
            ctx->pc = 0x2DBC18u;
            goto label_2dbc18;
        }
    }
    ctx->pc = 0x2DBB70u;
    // 0x2dbb70: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x2dbb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2dbb74: 0xc0b7018  jal         func_2DC060
    ctx->pc = 0x2DBB74u;
    SET_GPR_U32(ctx, 31, 0x2DBB7Cu);
    ctx->pc = 0x2DBB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBB74u;
    // 0x2dbb78: 0x26e47c98  addiu       $a0, $s7, 0x7C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 31896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC060u, 0x2DBB74u, 0x2DBB7Cu)) {
        return;
    }
    ctx->pc = 0x2DBB7Cu;
label_2dbb7c:
    // 0x2dbb7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dbb7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbb80: 0xc0b70d2  jal         func_2DC348
    ctx->pc = 0x2DBB80u;
    SET_GPR_U32(ctx, 31, 0x2DBB88u);
    ctx->pc = 0x2DBB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBB80u;
    // 0x2dbb84: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC348u, 0x2DBB80u, 0x2DBB88u)) {
        return;
    }
    ctx->pc = 0x2DBB88u;
label_2dbb88:
    // 0x2dbb88: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2dbb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2dbb8c: 0x8e48001c  lw          $t0, 0x1C($s2)
    ctx->pc = 0x2dbb8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2dbb90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2dbb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dbb94: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2dbb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2dbb98: 0x8e470018  lw          $a3, 0x18($s2)
    ctx->pc = 0x2dbb98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2dbb9c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2DBB9Cu;
    {
        const bool branch_taken_0x2dbb9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB9Cu;
        // 0x2dbba0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb9c) {
            ctx->pc = 0x2DBBC8u;
            goto label_2dbbc8;
        }
    }
    ctx->pc = 0x2DBBA4u;
    // 0x2dbba4: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DBBA4u;
    {
        const bool branch_taken_0x2dbba4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbba4) {
            ctx->pc = 0x2DBBC8u;
            goto label_2dbbc8;
        }
    }
    ctx->pc = 0x2DBBACu;
    // 0x2dbbac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2dbbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2dbbb0: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x2dbbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2dbbb4: 0x0  nop
    ctx->pc = 0x2dbbb4u;
    // NOP
label_2dbbb8:
    // 0x2dbbb8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DBBB8u;
    {
        const bool branch_taken_0x2dbbb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbbb8) {
            ctx->pc = 0x2DBBC8u;
            goto label_2dbbc8;
        }
    }
    ctx->pc = 0x2DBBC0u;
    // 0x2dbbc0: 0x14e0fffd  bnez        $a3, . + 4 + (-0x3 << 2)
    ctx->pc = 0x2DBBC0u;
    {
        const bool branch_taken_0x2dbbc0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbbc0) {
            ctx->pc = 0x2DBBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbbb8;
        }
    }
    ctx->pc = 0x2DBBC8u;
label_2dbbc8:
    // 0x2dbbc8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DBBC8u;
    {
        const bool branch_taken_0x2dbbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbbc8) {
            ctx->pc = 0x2DBBF0u;
            goto label_2dbbf0;
        }
    }
    ctx->pc = 0x2DBBD0u;
    // 0x2dbbd0: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DBBD0u;
    {
        const bool branch_taken_0x2dbbd0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbbd0) {
            ctx->pc = 0x2DBBF0u;
            goto label_2dbbf0;
        }
    }
    ctx->pc = 0x2DBBD8u;
    // 0x2dbbd8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2dbbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2dbbdc: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x2dbbdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2dbbe0:
    // 0x2dbbe0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DBBE0u;
    {
        const bool branch_taken_0x2dbbe0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbbe0) {
            ctx->pc = 0x2DBBF0u;
            goto label_2dbbf0;
        }
    }
    ctx->pc = 0x2DBBE8u;
    // 0x2dbbe8: 0x14e0fffd  bnez        $a3, . + 4 + (-0x3 << 2)
    ctx->pc = 0x2DBBE8u;
    {
        const bool branch_taken_0x2dbbe8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbbe8) {
            ctx->pc = 0x2DBBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbbe0;
        }
    }
    ctx->pc = 0x2DBBF0u;
label_2dbbf0:
    // 0x2dbbf0: 0xc0b6d64  jal         func_2DB590
    ctx->pc = 0x2DBBF0u;
    SET_GPR_U32(ctx, 31, 0x2DBBF8u);
    ctx->pc = 0x2DBBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBBF0u;
    // 0x2dbbf4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB590u, 0x2DBBF0u, 0x2DBBF8u)) {
        return;
    }
    ctx->pc = 0x2DBBF8u;
label_2dbbf8:
    // 0x2dbbf8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2dbbf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbbfc: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DBBFCu;
    {
        const bool branch_taken_0x2dbbfc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBBFCu;
        // 0x2dbc00: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbbfc) {
            ctx->pc = 0x2DBC64u;
            goto label_2dbc64;
        }
    }
    ctx->pc = 0x2DBC04u;
    // 0x2dbc04: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x2dbc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2dbc08: 0xacf00018  sw          $s0, 0x18($a3)
    ctx->pc = 0x2dbc08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 16));
    // 0x2dbc0c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2dbc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2dbc10: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2DBC10u;
    {
        const bool branch_taken_0x2dbc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC10u;
        // 0x2dbc14: 0xace20014  sw          $v0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc10) {
            ctx->pc = 0x2DBCA4u;
            goto label_2dbca4;
        }
    }
    ctx->pc = 0x2DBC18u;
label_2dbc18:
    // 0x2dbc18: 0x5482001c  bnel        $a0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2DBC18u;
    {
        const bool branch_taken_0x2dbc18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dbc18) {
            ctx->pc = 0x2DBC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBC18u;
            // 0x2dbc1c: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBC8Cu;
            goto label_2dbc8c;
        }
    }
    ctx->pc = 0x2DBC20u;
    // 0x2dbc20: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x2dbc20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2dbc24: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DBC24u;
    {
        const bool branch_taken_0x2dbc24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC24u;
        // 0x2dbc28: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc24) {
            ctx->pc = 0x2DBC38u;
            goto label_2dbc38;
        }
    }
    ctx->pc = 0x2DBC2Cu;
    // 0x2dbc2c: 0xc0b7018  jal         func_2DC060
    ctx->pc = 0x2DBC2Cu;
    SET_GPR_U32(ctx, 31, 0x2DBC34u);
    ctx->pc = 0x2DBC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBC2Cu;
    // 0x2dbc30: 0x26e47c98  addiu       $a0, $s7, 0x7C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 31896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC060u, 0x2DBC2Cu, 0x2DBC34u)) {
        return;
    }
    ctx->pc = 0x2DBC34u;
label_2dbc34:
    // 0x2dbc34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dbc34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dbc38:
    // 0x2dbc38: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x2dbc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2dbc3c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DBC3Cu;
    {
        const bool branch_taken_0x2dbc3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC3Cu;
        // 0x2dbc40: 0x8e48001c  lw          $t0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc3c) {
            ctx->pc = 0x2DBC6Cu;
            goto label_2dbc6c;
        }
    }
    ctx->pc = 0x2DBC44u;
    // 0x2dbc44: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2dbc44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc48: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2dbc48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2dbc4c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2dbc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2dbc50: 0xc0b6d64  jal         func_2DB590
    ctx->pc = 0x2DBC50u;
    SET_GPR_U32(ctx, 31, 0x2DBC58u);
    ctx->pc = 0x2DBC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBC50u;
    // 0x2dbc54: 0x24041000  addiu       $a0, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB590u, 0x2DBC50u, 0x2DBC58u)) {
        return;
    }
    ctx->pc = 0x2DBC58u;
label_2dbc58:
    // 0x2dbc58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc5c: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DBC5Cu;
    {
        const bool branch_taken_0x2dbc5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbc5c) {
            ctx->pc = 0x2DBC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBC5Cu;
            // 0x2dbc60: 0xac900018  sw          $s0, 0x18($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBC84u;
            goto label_2dbc84;
        }
    }
    ctx->pc = 0x2DBC64u;
label_2dbc64:
    // 0x2dbc64: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2DBC64u;
    {
        const bool branch_taken_0x2dbc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC64u;
        // 0x2dbc68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc64) {
            ctx->pc = 0x2DBCA4u;
            goto label_2dbca4;
        }
    }
    ctx->pc = 0x2DBC6Cu;
label_2dbc6c:
    // 0x2dbc6c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2dbc6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dbc70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc74: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x2dbc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2dbc78: 0xc0b6d64  jal         func_2DB590
    ctx->pc = 0x2DBC78u;
    SET_GPR_U32(ctx, 31, 0x2DBC80u);
    ctx->pc = 0x2DBC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBC78u;
    // 0x2dbc7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB590u, 0x2DBC78u, 0x2DBC80u)) {
        return;
    }
    ctx->pc = 0x2DBC80u;
label_2dbc80:
    // 0x2dbc80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dbc84:
    // 0x2dbc84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DBC84u;
    {
        const bool branch_taken_0x2dbc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC84u;
        // 0x2dbc88: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc84) {
            ctx->pc = 0x2DBCA4u;
            goto label_2dbca4;
        }
    }
    ctx->pc = 0x2DBC8Cu;
label_2dbc8c:
    // 0x2dbc8c: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x2dbc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2dbc90: 0x8e470018  lw          $a3, 0x18($s2)
    ctx->pc = 0x2dbc90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2dbc94: 0x8e48001c  lw          $t0, 0x1C($s2)
    ctx->pc = 0x2dbc94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2dbc98: 0xc0b6d64  jal         func_2DB590
    ctx->pc = 0x2DBC98u;
    SET_GPR_U32(ctx, 31, 0x2DBCA0u);
    ctx->pc = 0x2DBC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBC98u;
    // 0x2dbc9c: 0xa63021  addu        $a2, $a1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB590u, 0x2DBC98u, 0x2DBCA0u)) {
        return;
    }
    ctx->pc = 0x2DBCA0u;
label_2dbca0:
    // 0x2dbca0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dbca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dbca4:
    // 0x2dbca4: 0x56200011  bnel        $s1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DBCA4u;
    {
        const bool branch_taken_0x2dbca4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbca4) {
            ctx->pc = 0x2DBCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBCA4u;
            // 0x2dbca8: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBCECu;
            goto label_2dbcec;
        }
    }
    ctx->pc = 0x2DBCACu;
    // 0x2dbcac: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x2DBCACu;
    {
        const bool branch_taken_0x2dbcac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBCACu;
        // 0x2dbcb0: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbcac) {
            ctx->pc = 0x2DBCE4u;
            goto label_2dbce4;
        }
    }
    ctx->pc = 0x2DBCB4u;
    // 0x2dbcb4: 0x3d58021  addu        $s0, $fp, $s5
    ctx->pc = 0x2dbcb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 21)));
    // 0x2dbcb8: 0x3c120070  lui         $s2, 0x70
    ctx->pc = 0x2dbcb8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
    // 0x2dbcbc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2dbcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dbcc0:
    // 0x2dbcc0: 0x26447c98  addiu       $a0, $s2, 0x7C98
    ctx->pc = 0x2dbcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 31896));
    // 0x2dbcc4: 0x2610ffe0  addiu       $s0, $s0, -0x20
    ctx->pc = 0x2dbcc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x2dbcc8: 0xc0b7018  jal         func_2DC060
    ctx->pc = 0x2DBCC8u;
    SET_GPR_U32(ctx, 31, 0x2DBCD0u);
    ctx->pc = 0x2DBCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBCC8u;
    // 0x2dbccc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC060u, 0x2DBCC8u, 0x2DBCD0u)) {
        return;
    }
    ctx->pc = 0x2DBCD0u;
label_2dbcd0:
    // 0x2dbcd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbcd4: 0xc0b6dee  jal         func_2DB7B8
    ctx->pc = 0x2DBCD4u;
    SET_GPR_U32(ctx, 31, 0x2DBCDCu);
    ctx->pc = 0x2DBCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBCD4u;
    // 0x2dbcd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB7B8u, 0x2DBCD4u, 0x2DBCDCu)) {
        return;
    }
    ctx->pc = 0x2DBCDCu;
label_2dbcdc:
    // 0x2dbcdc: 0x5620fff8  bnel        $s1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DBCDCu;
    {
        const bool branch_taken_0x2dbcdc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbcdc) {
            ctx->pc = 0x2DBCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBCDCu;
            // 0x2dbce0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBCC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbcc0;
        }
    }
    ctx->pc = 0x2DBCE4u;
label_2dbce4:
    // 0x2dbce4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DBCE4u;
    {
        const bool branch_taken_0x2dbce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBCE4u;
        // 0x2dbce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbce4) {
            ctx->pc = 0x2DBD18u;
            goto label_2dbd18;
        }
    }
    ctx->pc = 0x2DBCECu;
label_2dbcec:
    // 0x2dbcec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dbcecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbcf0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2dbcf0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2dbcf4: 0xc0b7d62  jal         func_2DF588
    ctx->pc = 0x2DBCF4u;
    SET_GPR_U32(ctx, 31, 0x2DBCFCu);
    ctx->pc = 0x2DBCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBCF4u;
    // 0x2dbcf8: 0x27de0020  addiu       $fp, $fp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF588u, 0x2DBCF4u, 0x2DBCFCu)) {
        return;
    }
    ctx->pc = 0x2DBCFCu;
label_2dbcfc:
    // 0x2dbcfc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2dbcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2dbd00: 0xc0b7d4e  jal         func_2DF538
    ctx->pc = 0x2DBD00u;
    SET_GPR_U32(ctx, 31, 0x2DBD08u);
    ctx->pc = 0x2DBD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBD00u;
    // 0x2dbd04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF538u, 0x2DBD00u, 0x2DBD08u)) {
        return;
    }
    ctx->pc = 0x2DBD08u;
label_2dbd08:
    // 0x2dbd08: 0x296182b  sltu        $v1, $s4, $s6
    ctx->pc = 0x2dbd08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x2dbd0c: 0x1460ff76  bnez        $v1, . + 4 + (-0x8A << 2)
    ctx->pc = 0x2DBD0Cu;
    {
        const bool branch_taken_0x2dbd0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD0Cu;
        // 0x2dbd10: 0x141140  sll         $v0, $s4, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbd0c) {
            ctx->pc = 0x2DBAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbae8;
        }
    }
    ctx->pc = 0x2DBD14u;
label_2dbd14:
    // 0x2dbd14: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2dbd14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2dbd18:
    // 0x2dbd18: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2dbd18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2dbd1c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2dbd1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2dbd20: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2dbd20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dbd24: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2dbd24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dbd28: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2dbd28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dbd2c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2dbd2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dbd30: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2dbd30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dbd34: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2dbd34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dbd38: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2dbd38u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dbd3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dbd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dbd40: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD40u;
        // 0x2dbd44: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBD48u;
    // 0x2dbd48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2dbd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dbd4c: 0x0  nop
    ctx->pc = 0x2dbd4cu;
    // NOP
    // 0x2dbd50: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2dbd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dbd54: 0x0  nop
    ctx->pc = 0x2dbd54u;
    // NOP
    // 0x2dbd58: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2dbd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dbd5c: 0x0  nop
    ctx->pc = 0x2dbd5cu;
    // NOP
    // 0x2dbd60: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2dbd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2dbd64: 0x0  nop
    ctx->pc = 0x2dbd64u;
    // NOP
    // 0x2dbd68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2dbd68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dbd6c: 0x0  nop
    ctx->pc = 0x2dbd6cu;
    // NOP
    ctx->pc = 0x2dbd70u;
}
